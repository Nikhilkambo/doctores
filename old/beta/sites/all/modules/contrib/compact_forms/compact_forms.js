
(function ($) {

Drupal.compactForms = {};

/**
 * Compact Forms jQuery plugin.
 */
$.fn.compactForm = function (stars) {
  stars = stars || 0;
  var placeholders = 'placeholder' in document.createElement('input');

  this.each(function () {
    var classes = 'compact-form' + (placeholders ? ' compact-form-html5' : '');
    $(this).addClass(classes).find('label').each(function () {
      var context = this.form;
      var $label = $(this);
      if (!$label.attr('for')) {
        return;
      }
      if ($label.hasClass('element-invisible')) {
        $label.removeClass('element-invisible');
      }
      var $field = $('#' + $label.attr('for'), context);
      if (!$field.length || !$field.is('input:text,input:password,textarea,input[type=email]')) {
        return;
      }
      // Store the initial field value, in case the browser is going to
      // automatically fill it in upon focus.
      var initial_value = $field.val();
      if (placeholders) {
        $field.attr('placeholder', stars === 1 ? $label.text() : $label.text().replace(/\*/, '').trim());
        if (stars === 2) {
          $label.find('.form-required').insertAfter($field).prepend('&nbsp;');
        }
        $label.css('display', 'none');
      }
      else {
        if (initial_value != '') {
          // Firefox doesn't like .hide() here for some reason.
          $label.css('display', 'none');
        }

        $label.parent().addClass('compact-form-wrapper');
        $label.addClass('compact-form-label');
        $field.addClass('compact-form-field');

        if (stars === 0) {
          $label.find('.form-required').hide();
        }
        else if (stars === 2) {
          $label.find('.form-required').insertAfter($field).prepend('&nbsp;');
        }

        $field.focus(function () {
          // Some browsers (e.g., Firefox) are automatically inserting a stored
          // username and password into login forms. In case the password field is
          // manually emptied afterwards, and the user jumps back to the username
          // field (without changing it), and forth to the password field, then
          // the browser automatically re-inserts the password again. Therefore,
          // we also need to test against the initial field value.
          if ($field.val() === initial_value || $field.val() === '') {
            $label.fadeOut('fast');
          }
        });

        $field.blur(function () {
          if ($field.val() === '') {
            $label.fadeIn('slow');
          }
        });

        // Chrome adds passwords after page load, so we need to track changes.
        $field.change(function () {
          if ($field.get(0) != document.activeElement) {
            if ($field.val() === '') {
              $label.fadeIn('fast');
            }
            else {
              $label.css('display', 'none');
            }
          }
        });
      }
    });
  });
};

/**
 * Attach compact forms behavior to all enabled forms upon page load.
 */
Drupal.behaviors.compactForms = {
  attach: function (context, settings) {
    if (!settings || !settings.compactForms) {
      return;
    }
    matchstring='#' + settings.compactForms.forms.join(',#');
    // We have to do this because find only matches children and ajax sends
    // us the whole form element as context.
    $(context).filter(matchstring).compactForm(settings.compactForms.stars);
    $(context).find(matchstring).compactForm(settings.compactForms.stars);

    // Safari adds passwords without triggering any event after page load.
    // We therefore need to wait a bit and then check for field values.
    // JQuery 1.9+ removed .browser method. Modernizr library recommended instead.
    if ($.browser && $.browser.safari) {
      setTimeout(Drupal.compactForms.fixSafari, 200);
    }
  }
};

/**
 * Checks for field values and hides the corresponding label if non-empty.
 *
 * @todo Convert $.fn.compactForm to always use a function like this.
 */
Drupal.compactForms.fixSafari = function () {
  $('label.compact-form-label').each(function () {
    var $label = $(this);
    var context = this.form;
    if ($('#' + $label.attr('for'), context).val() != '') {
      $label.css('display', 'none');
    }
  });
}

})(jQuery);

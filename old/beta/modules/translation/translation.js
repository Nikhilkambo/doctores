// $Id$

(function ($) {

Drupal.behaviors.translationFieldsetSummaries = {
  attach: function (context) {
    $('fieldset#edit-translation', context).drupalSetSummary(function (context) {
      if ($('.form-item-translation-status input', context).is(':checked')) {
        return Drupal.t("Translation update required");
      }
      else {
        return Drupal.t('No update required');
      }
    });
  }
};

})(jQuery);

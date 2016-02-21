/**
 * Navbar search form.
 */
(function ($) {
  Drupal.behaviors.navbarSearchForm = {
    attach: function(context, settings) {
      if ($('#restaurant-toolbar-search-form').length) {
        var $form = $('#restaurant-toolbar-search-form');
        if (!$form.hasClass('navbar-form-processed')) {

          // Add a class when the field is focused.
          var $input = $form.find('.form-text');
          $input.on('focus', function() {
            $form.addClass('focused');
          });
          // Remove it when blurred.
          $input.on('blur', function() {
            $form.removeClass('focused');
          });

          $form.addClass('navbar-form-processed');
        }
      }
    }
  }
})(jQuery);

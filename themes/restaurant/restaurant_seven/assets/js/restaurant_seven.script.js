/**
 * @file
 * Custom scripts for theme.
 */
(function ($) {
  Drupal.behaviors.adminMenuExpanded = {
    attach: function(context, settings) {
      $('#admin-menu li').mouseenter(function() {
        $(this).addClass('expanded');
      });
      $('#admin-menu li').mouseleave(function() {
        $(this).removeClass('expanded');
      });
    }
  }
})(jQuery);

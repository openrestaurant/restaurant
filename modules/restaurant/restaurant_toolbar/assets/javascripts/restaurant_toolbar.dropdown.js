/**
 * Navbar dropdown.
 */
(function ($) {
  Drupal.behaviors.navbarDropdown = {
    attach: function(context, settings) {
      if ($('.navbar-dropdown').length) {
        $('.navbar-dropdown', context).each(function () {
          var $this = $(this);
          if (!$this.hasClass('navbar-dropdown-processed')) {
            $this.find('.navbar-dropdown__button').click(function (event) {
              event.stopPropagation();
              $this.toggleClass('open');
            });
          }
          $this.addClass('navbar-dropdown-processed');
        });

        // Close dropdown on click.
        $('html').click(function() {
          $('.navbar-dropdown', context).removeClass('open');
        });
      }
    }
  }
})(jQuery);

/**
 * Restaurant toolbar.
 */
(function ($) {
  Drupal.behaviors.RestaurantToolbar = {
    attach: function(context, settings) {
      // Make sure navbar is always vertical.
      if ($('#navbar-administration').length) {
        // Listen to navbar change and ensure vertical navbar.
        ensureVerticalNavbar();
        $(document).on('drupalNavbarTabChange', function(event, tray) {
          ensureVerticalNavbar();
        });

        // TODO: Figure out a way to skip this event.
        $('.navbar-tab--menu .navbar-tab').click(function() {
          ensureVerticalNavbar();
        });
      }
    }
  }

  function ensureVerticalNavbar() {
    $('body')
      .removeClass('navbar-horizontal')
      .addClass('navbar-vertical');
    $('#navbar-administration .navbar-tray')
      .removeClass('navbar-tray-horizontal')
      .addClass('navbar-tray-vertical');

    // Lock it.
    if (localStorage) {
      localStorage.setItem('Drupal.navbar.trayVerticalLocked', true);
    }
  }
})(jQuery);

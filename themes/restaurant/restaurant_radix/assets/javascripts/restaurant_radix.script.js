/**
 * @file
 * Custom scripts for theme.
 */
(function ($) {
  $(document).ready(function() {
    // Show dropdowns on hover.
    $('.nav > li.dropdown').mouseenter(function() {
      $(this).addClass('open');
    });
    $('.nav > li.dropdown').mouseleave(function() {
      $(this).removeClass('open');
    });

    // Make dropdown toggle clickable.
    $('.dropdown-toggle').on('click', function() {
      if ($(this).attr('href')) {
        window.location.href = $(this).attr('href');
      }
    });
  });

  // Smooth anchor scroll.
  Drupal.behaviors.smoothAnchorScroll = {
    attach: function(context, settings) {
      $('a[href*=#]:not([href=#])').click(function() {
        var $this = this;
        //window.location.hash = $this.hash;
        if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') && location.hostname == this.hostname) {
          var target = $(this.hash);
          target = target.length ? target : $('[name=' + this.hash.slice(1) +']');
          if (target.length) {
            $('html,body').animate({
              scrollTop: target.offset().top
            }, 1000, function() {
              window.location.hash = $this.hash;
            });
            return false;
          }
        }
      });
    }
  }
})(jQuery);

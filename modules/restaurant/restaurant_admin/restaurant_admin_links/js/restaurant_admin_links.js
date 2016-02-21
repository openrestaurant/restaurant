(function ($) {

  /**
   * Admin Links
   */
  Drupal.behaviors.restaurantAdminLinks = {
    attach: function (context, settings) {
      $('.admin-links', context).once('admin-links', function () {
        var $region = $($(this).data().region);
        var $wrapper = $(this).clone();
        // Append to existing links if found.
        if ($region.hasClass('contextual-links-region')) {
          $wrapper.find('ul.contextual-links').find('li').each(function() {
            $region.find('ul.contextual-links').append($(this));
          });
        }
        else {
          // Use parent div as contextual-links-region
          $region.addClass('contextual-links-region');
          $region.prepend($wrapper);

          // Reset trigger
          $wrapper.find('.contextual-links-trigger').remove();
        }
        $(this).remove();

        //var $region = $wrapper.closest('.contextual-links-region');
        var $links = $wrapper.find('ul.contextual-links');
        var $trigger = $('<a class="contextual-links-trigger" href="#" />').text(Drupal.t('Configure')).click(
          function () {
            $links.stop(true, true).slideToggle(100);
            $wrapper.toggleClass('contextual-links-active');
            return false;
          }
        );
        // Attach hover behavior to trigger and ul.contextual-links.
        $trigger.add($links).hover(
          function () { $region.addClass('contextual-links-region-active'); },
          function () { $region.removeClass('contextual-links-region-active'); }
        );
        // Hide the contextual links when user clicks a link or rolls out of the .contextual-links-region.
        $region.bind('mouseleave click', Drupal.contextualLinks.mouseleave);
        $region.hover(
          function() { $trigger.addClass('contextual-links-trigger-active'); },
          function() { $trigger.removeClass('contextual-links-trigger-active'); }
        );
        // Prepend the trigger.
        $wrapper.prepend($trigger);
      });
    }
  }

})(jQuery);

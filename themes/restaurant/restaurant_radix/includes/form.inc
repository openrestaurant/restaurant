<?php
/**
 * @file
 * Theme and preprocess functions for forms
 */

/**
 * Implements theme_select_as_checkboxes().
 */
function restaurant_radix_select_as_checkboxes($variables) {
  $element = $variables['element'];
  $is_taxonomy_based_filter = FALSE;
  if (!empty($element['#bef_nested'])) {
    if (empty($element['#attributes']['class'])) {
      $element['#attributes']['class'] = array();
    }
    $element['#attributes']['class'][] = 'form-checkboxes';
    return theme('select_as_tree', array('element' => $element));
  }

  // The selected keys from #options.
  $selected_options = empty($element['#value']) ? $element['#default_value'] : $element['#value'];
  if (!is_array($selected_options)) {
    $selected_options = array($selected_options);
  }

  // Grab exposed filter description.  We'll put it under the label where it
  // makes more sense.
  $description = '';
  if (!empty($element['#bef_description'])) {
    $description = '<div class="description">' . $element['#bef_description'] . '</div>';
  }

  $output = '<div class="bef-checkboxes">';
  foreach ($element['#options'] as $option => $elem) {
    if ('All' === $option) {
      // TODO: 'All' text is customizable in Views.
      // No need for an 'All' option -- either unchecking or checking all the
      // checkboxes is equivalent.
      continue;
    }

    // Check for Taxonomy-based filters.
    if (is_object($elem)) {
      $slice = array_slice($elem->option, 0, 1, TRUE);
      list($option, $elem) = each($slice);
      $is_taxonomy_based_filter = TRUE;
    }

    // Check for optgroups.  Put subelements in the $element_set array and add
    // a group heading. Otherwise, just add the element to the set.
    $element_set = array();
    $is_optgroup = FALSE;
    if (is_array($elem)) {
      $output .= '<div class="bef-group">';
      $output .= '<div class="bef-group-heading">' . $option . '</div>';
      $output .= '<div class="bef-group-items">';
      $element_set = $elem;
      $is_optgroup = TRUE;
    }
    else {
      $element_set[$option] = $elem;
    }

    foreach ($element_set as $key => $value) {
      // Add icon to element.
      $icon = '';

      // Check for terms first.
      if ($is_taxonomy_based_filter) {
        $term = taxonomy_term_load($key);
        if (!empty($term->vocabulary_machine_name)) {
          $icon_field_name = 'field_' . $term->vocabulary_machine_name . '_icon';
          if (!empty($term->{$icon_field_name})) {
            $metadata = entity_metadata_wrapper('taxonomy_term', $term);
            $icon = $metadata->{$icon_field_name}->value();
          }
        }
      }
      // Else assume node and fallback.
      else {
        $node = node_load($key);
        if (!empty($node->type)) {
          $icon_field_name = 'field_' . $node->type . '_icon';
          if (!empty($node->{$icon_field_name})) {
            $metadata = entity_metadata_wrapper('node', $node);
            $icon = $metadata->{$icon_field_name}->value();
          }
        }
      }

      // Prepend icon.
      if (!empty($icon)) {
        $image = theme('image_style', array(
          'style_name' => 'filters_icon',
          'path' => $icon['uri'],
        ));
        $value = $image . $value;
      }

      $output .= theme('bef_checkbox', array('element' => $element, 'value' => $key, 'label' => $value, 'selected' => array_search($key, $selected_options) !== FALSE));
    }

    if ($is_optgroup) {
      // Close group and item <div>s.
      $output .= '</div></div>';
    }

  }
  $output .= '</div>';

  // Fake theme_checkboxes() which we can't call because it calls
  // theme_form_element() for each option.
  $attributes['class'] = array('form-checkboxes', 'bef-select-as-checkboxes');
  if (!empty($element['#bef_select_all_none'])) {
    $attributes['class'][] = 'bef-select-all-none';
  }
  if (!empty($element['#bef_select_all_none_nested'])) {
    $attributes['class'][] = 'bef-select-all-none-nested';
  }
  if (!empty($element['#attributes']['class'])) {
    $attributes['class'] = array_merge($element['#attributes']['class'], $attributes['class']);
  }

  return '<div' . drupal_attributes($attributes) . ">$description$output</div>";
}

<?php

/**
 * @file
 * Theme hooks for Restaurant Admin.
 */

function theme_restaurant_admin_thumbnail($variables) {
  $element = $variables['element'];

  if (isset($element['#file']->uri)) {
    $output = '<div class="form-item form-type-managed-file"><span class="file">';
    $output .= '<img width="150px" height="auto" src="' . file_create_url($element['#file']->uri) . '" />';
    $output .= '</span><input type="submit" id="edit-' . $element['#name'] . '-remove-button" name="' . $element['#name'] . '_remove_button" value="Remove" class="form-submit ajax-processed">';
    $output .= '<input type="hidden" name="' . $element['#name'] . '[fid]" value="' . $element['#file']->fid . '"></div>';
    return $output;
  }
}
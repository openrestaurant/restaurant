<?php
/**
 * @file
 * Theme and preprocess functions for media.
 */

/**
 * Pre render callback for the media form element.
 */
function restaurant_seven_media_pre_render($element) {
  // Remove preview div.
  $element['preview']['#prefix'] = '';
  $element['preview']['#suffix'] = '';

  return $element;
}

/**
 * Adds a wrapper around a preview of a media file.
 */
function restaurant_seven_media_thumbnail($variables) {
  $label = '';
  $element = $variables['element'];

  // Wrappers to go around the thumbnail.
  $attributes = array(
    'title' => $element['#name'],
    'class' => 'media-item',
    'data-fid' => $element['#file']->fid,
  );
  $prefix = '<div ' . drupal_attributes($attributes) . '>';
  $suffix = '</div>';

  // Arguments for the thumbnail link.
  $thumb = $element['#children'];
  if (file_entity_access('update', $element['#file'])) {
    $target = 'file/' . $element['#file']->fid . '/edit';
    $title = t('Click to edit details');
  }
  else {
    $target = 'file/' . $element['#file']->fid;
    $title = t('Click to view details');
  }
  $options = array(
    'query' => drupal_get_destination(),
    'html' => TRUE,
    'attributes' => array('title' => $title),
  );

  // Element should be a field renderable array. This should be improved.
  if (!empty($element['#show_names']) && $element['#name']) {
    $file_size = format_size($element['#item']['filesize']);
    $label = '<label class="media-filename">' . $element['#name'] . '<br />' . $file_size . '</label>';
  }

  $output = $prefix;
  if (!empty($element['#add_link'])) {
    $output .= l($thumb, $target, $options);
  }
  else {
    $output .= $thumb;
  }
  $output .= $suffix . $label;
  return $output;
}

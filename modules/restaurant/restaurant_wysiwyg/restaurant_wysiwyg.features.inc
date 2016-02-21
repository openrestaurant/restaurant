<?php
/**
 * @file
 * restaurant_wysiwyg.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function restaurant_wysiwyg_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function restaurant_wysiwyg_filter_default_formats_alter(&$data) {
  if (isset($data['panopoly_html_text'])) {
    $data['panopoly_html_text']['filters']['caption_filter']['weight'] = -47; /* WAS: -48 */
    $data['panopoly_html_text']['filters']['filter_autop']['weight'] = -44; /* WAS: -45 */
    $data['panopoly_html_text']['filters']['filter_htmlcorrector']['weight'] = -45; /* WAS: -46 */
    $data['panopoly_html_text']['filters']['filter_url']['weight'] = -43; /* WAS: -44 */
    $data['panopoly_html_text']['filters']['image_resize_filter']['weight'] = -49; /* WAS: -50 */
    $data['panopoly_html_text']['filters']['media_filter']['weight'] = -46; /* WAS: -47 */
    $data['panopoly_html_text']['filters']['restaurant_config_filter'] = array(
      'settings' => array(),
      'status' => 1,
      'weight' => -50,
    ); /* WAS: '' */
    $data['panopoly_html_text']['filters']['wysiwyg']['settings']['valid_elements'] = 'a[!href|target<_blank|title|style|class],
    div[style|class|align<center?justify?left?right],
    br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
    span[style],p[style|class],
    h1[style|class],h2[style|class],h3[style|class],h4[style|class],h5[style|class],h6[style|class],
    img[!src|title|alt|style|width|height|class|hspace|vspace],
    @[style|class|role|tabindex|aria-activedescendant|aria-atomic|aria-autocomplete|aria-busy|aria-checked|aria-controls|aria-describedby|aria-disabled|aria-dropeffect|aria-expanded|aria-flowto|aria-grabbed|aria-haspopup|aria-hidden|aria-invalid|aria-label|aria-labelledby|aria-level|aria-live|aria-multiline|aria-multiselectable|aria-owns|aria-posinset|aria-pressed|aria-readonly|aria-relevant|aria-required|aria-selected|aria-setsize|aria-sort|aria-valuemax|aria-valuemin|aria-valuenow|aria-valuetext]'; /* WAS: 'a[!href|target<_blank|title|style|class],
    div[style|class|align<center?justify?left?right],
    br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
    span[style],p[style|class],
    h1[style|class],h2[style|class],h3[style|class],h4[style|class],h5[style|class],h6[style|class],
    img[!src|title|alt|style|width|height|class|hspace|vspace],
    @[style|class|role|tabindex|aria-activedescendant|aria-atomic|aria-autocomplete|aria-busy|aria-checked|aria-controls|aria-describedby|aria-disabled|aria-dropeffect|aria-expanded|aria-flowto|aria-grabbed|aria-haspopup|aria-hidden|aria-invalid|aria-label|aria-labelledby|aria-level|aria-live|aria-multiline|aria-multiselectable|aria-owns|aria-posinset|aria-pressed|aria-readonly|aria-relevant|aria-required|aria-selected|aria-setsize|aria-sort|aria-valuemax|aria-valuemin|aria-valuenow|aria-valuetext]' */
    $data['panopoly_html_text']['filters']['wysiwyg']['weight'] = -48; /* WAS: -49 */
  }
  if (isset($data['panopoly_wysiwyg_text'])) {
    $data['panopoly_wysiwyg_text']['filters']['caption_filter']['weight'] = -47; /* WAS: -48 */
    $data['panopoly_wysiwyg_text']['filters']['filter_htmlcorrector']['weight'] = -45; /* WAS: -46 */
    $data['panopoly_wysiwyg_text']['filters']['image_resize_filter']['weight'] = -49; /* WAS: -50 */
    $data['panopoly_wysiwyg_text']['filters']['media_filter']['weight'] = -46; /* WAS: -47 */
    $data['panopoly_wysiwyg_text']['filters']['panopoly_images_fix_captions']['weight'] = -40; /* WAS: 0 */
    $data['panopoly_wysiwyg_text']['filters']['restaurant_config_filter'] = array(
      'settings' => array(),
      'status' => 1,
      'weight' => -50,
    ); /* WAS: '' */
    $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['weight'] = -48; /* WAS: -49 */
  }
}

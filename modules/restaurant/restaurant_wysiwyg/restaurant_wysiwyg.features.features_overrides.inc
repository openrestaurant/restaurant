<?php
/**
 * @file
 * restaurant_wysiwyg.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function restaurant_wysiwyg_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.panopoly_html_text.filters|caption_filter|weight"] = -47;
  $overrides["filter.panopoly_html_text.filters|filter_autop|weight"] = -44;
  $overrides["filter.panopoly_html_text.filters|filter_htmlcorrector|weight"] = -45;
  $overrides["filter.panopoly_html_text.filters|filter_url|weight"] = -43;
  $overrides["filter.panopoly_html_text.filters|image_resize_filter|weight"] = -49;
  $overrides["filter.panopoly_html_text.filters|media_filter|weight"] = -46;
  $overrides["filter.panopoly_html_text.filters|restaurant_config_filter"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => -50,
  );
  $overrides["filter.panopoly_html_text.filters|wysiwyg|settings|valid_elements"] = 'a[!href|target<_blank|title|style|class],
  div[style|class|align<center?justify?left?right],
  br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
  span[style],p[style|class],
  h1[style|class],h2[style|class],h3[style|class],h4[style|class],h5[style|class],h6[style|class],
  img[!src|title|alt|style|width|height|class|hspace|vspace],
  @[style|class|role|tabindex|aria-activedescendant|aria-atomic|aria-autocomplete|aria-busy|aria-checked|aria-controls|aria-describedby|aria-disabled|aria-dropeffect|aria-expanded|aria-flowto|aria-grabbed|aria-haspopup|aria-hidden|aria-invalid|aria-label|aria-labelledby|aria-level|aria-live|aria-multiline|aria-multiselectable|aria-owns|aria-posinset|aria-pressed|aria-readonly|aria-relevant|aria-required|aria-selected|aria-setsize|aria-sort|aria-valuemax|aria-valuemin|aria-valuenow|aria-valuetext]';
  $overrides["filter.panopoly_html_text.filters|wysiwyg|weight"] = -48;
  $overrides["filter.panopoly_wysiwyg_text.filters|caption_filter|weight"] = -47;
  $overrides["filter.panopoly_wysiwyg_text.filters|filter_htmlcorrector|weight"] = -45;
  $overrides["filter.panopoly_wysiwyg_text.filters|image_resize_filter|weight"] = -49;
  $overrides["filter.panopoly_wysiwyg_text.filters|media_filter|weight"] = -46;
  $overrides["filter.panopoly_wysiwyg_text.filters|panopoly_images_fix_captions|weight"] = -40;
  $overrides["filter.panopoly_wysiwyg_text.filters|restaurant_config_filter"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => -50,
  );
  $overrides["filter.panopoly_wysiwyg_text.filters|wysiwyg|weight"] = -48;

 return $overrides;
}

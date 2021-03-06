<?php
/**
 * @file
 * drupallos_menu.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drupallos_menu_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|menu_item_group|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'menu_item_group';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title_divider' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|menu_item_group|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|menu_item|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'menu_item';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'related_products_add_to_cart' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|menu_item|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|menu_item|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'menu_item';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => 'ui-li-heading',
      ),
    ),
  );
  $export['node|menu_item|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pizza|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pizza';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'related_products_add_to_cart' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|pizza|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pizza|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pizza';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'related_products_add_to_cart' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|pizza|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sandwich|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sandwich';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|sandwich|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sandwich|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sandwich';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|sandwich|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|soup|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'soup';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'related_products_add_to_cart' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|soup|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drupallos_menu_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|menu_item_group|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'menu_item_group';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title_divider',
        1 => 'field_items',
      ),
    ),
    'fields' => array(
      'title_divider' => 'header',
      'field_items' => 'header',
    ),
    'classes' => array(),
  );
  $export['node|menu_item_group|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|menu_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'menu_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'body',
      ),
      'footer' => array(
        0 => 'related_products_add_to_cart',
      ),
      'header' => array(
        0 => 'field_price',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'related_products_add_to_cart' => 'footer',
      'body' => 'left',
      'field_price' => 'header',
    ),
    'classes' => array(
      'header' => array(
        'ui-li-aside' => 'ui-li-aside',
      ),
    ),
  );
  $export['node|menu_item|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|menu_item|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'menu_item';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'body',
      ),
      'footer' => array(
        0 => 'field_price',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_price' => 'footer',
      'body' => 'header',
    ),
    'classes' => array(
      'footer' => array(
        'ui-li-aside' => 'ui-li-aside',
      ),
    ),
  );
  $export['node|menu_item|full'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pizza|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pizza';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'right' => array(
        0 => 'related_products_add_to_cart',
        1 => 'field_slice',
        2 => 'field_small',
        3 => 'field_medium',
        4 => 'field_large',
      ),
      'left' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'related_products_add_to_cart' => 'right',
      'body' => 'left',
      'field_slice' => 'right',
      'field_small' => 'right',
      'field_medium' => 'right',
      'field_large' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|pizza|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pizza|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pizza';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'body',
      ),
      'footer' => array(
        0 => 'related_products_add_to_cart',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'related_products_add_to_cart' => 'footer',
      'body' => 'header',
    ),
    'classes' => array(),
  );
  $export['node|pizza|full'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sandwich|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sandwich';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        0 => 'field_regular',
        1 => 'field_footlong',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'body' => 'left',
      'field_regular' => 'right',
      'field_footlong' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|sandwich|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sandwich|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sandwich';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'regions' => array(
      'right' => array(
        0 => 'field_regular',
        1 => 'field_footlong',
      ),
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'field_regular' => 'right',
      'field_footlong' => 'right',
      'title' => 'header',
      'body' => 'left',
    ),
    'classes' => array(),
  );
  $export['node|sandwich|full'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|soup|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'soup';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'footer' => array(
        0 => 'related_products_add_to_cart',
      ),
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        0 => 'field_cup',
        1 => 'field_bowl',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'related_products_add_to_cart' => 'footer',
      'body' => 'left',
      'field_cup' => 'right',
      'field_bowl' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|soup|default'] = $ds_layout;

  return $export;
}

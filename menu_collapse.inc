<?php


function menu_collapse_form_alter(&$form, $form_state, $form_id) {

    if( ($form_id == 'page_node_form') || ($form_id == 'menu_edit_item')  ) {
      drupal_add_js("jQuery(document).ready(function () {
        jQuery('#edit-menu-options-attributes a.fieldset-title, #edit-options-attributes a.fieldset-title').trigger('click');
        })", 'inline');
    }
}

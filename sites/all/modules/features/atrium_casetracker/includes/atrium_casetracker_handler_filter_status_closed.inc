<?php
class atrium_casetracker_handler_filter_status_closed extends views_handler_filter_boolean_operator {
  function construct() {
    $this->value_value = t('Show closed cases');  
    if (isset($this->definition['label'])) {
      $this->value_value = $this->definition['label'];
    }
  }

  function value_form(&$form, &$form_state) {
    $form['value'] = array(
      '#type' => 'checkbox',
      '#title' => $this->value_value,
      '#default_value' => $this->value,
    );
    if (!empty($this->options['exposed'])) {
      $form['value']['#title'] = $this->options['expose']['label'];
      $identifier = $this->options['expose']['identifier'];
      if (!isset($form_state['input'][$identifier])) {
        $form_state['input'][$identifier] = $this->value;
      }    
    }
  }

  function query() {
    if (empty($this->value)) {
      $this->ensure_my_table();
      $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field <>  7");
    }
  }
}

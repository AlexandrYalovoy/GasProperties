//
// Created by alexa on 16.09.2021.
//

#include "Gas_comp_array.h"

Gas_comp_array::Gas_comp_array() = default;

Gas_comp_array::~Gas_comp_array() = default;

void Gas_comp_array::component_add_in_array(Gas_component *_element) {
    m_gas_comp_array.push_back(_element);
}

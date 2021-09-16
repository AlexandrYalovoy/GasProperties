//
// Created by alexa on 16.09.2021.
//
#include "Gas_component.h"
#include "vector"

#ifndef GASPROPERTIES_GAS_COMP_ARRAY_H
#define GASPROPERTIES_GAS_COMP_ARRAY_H

class Gas_comp_array {
private:
    std::vector<Gas_component *> m_gas_comp_array{};
public:
    Gas_comp_array();

    ~Gas_comp_array();

    // Функция по добавлению элемента в массив.
    void component_add_in_array(Gas_component *_element);
};

#endif //GASPROPERTIES_GAS_COMP_ARRAY_H

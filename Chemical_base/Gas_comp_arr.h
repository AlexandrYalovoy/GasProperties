//
// Created by alexa on 28.09.2021.
//

#ifndef GASPROPERTIES_GAS_COMP_ARR_H
#define GASPROPERTIES_GAS_COMP_ARR_H

#include "Gas_component.h"
#include "vector"
#include <functional>


class Gas_comp_arr {
/// Класс создает базовые компоненты, складывает их в вектор эталон экземпляров класса.
/// Возвращает этот вектор эталон на основе которого создаются потоки
private:
    std::vector<Gas_component> m_array_gas_component;

    void create_gas_comp();

public:
    Gas_comp_arr();

    ~Gas_comp_arr();

    [[nodiscard]] std::vector<Gas_component> get_arr() const;
};

#endif //GASPROPERTIES_GAS_COMP_ARR_H

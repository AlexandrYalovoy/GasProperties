//
// Created by alexa on 04.10.2021.
//

#ifndef GASPROPERTIES_MOLAR_HEAT_BURNING_20_H
#define GASPROPERTIES_MOLAR_HEAT_BURNING_20_H

#include "vector"
#include "../Chemical_base/Gas_component.h"
#include "iostream"
#include <cmath>

class Molar_heat_burning_20 {
private:
    // Хранит ссылку на вектор потока
    std::vector<Gas_component> m_flow;

    // Хранит высшую молярную теплоту сгорания округленную кДж·моль-1
    double m_molar_heat_burning_20_higher{};
    // Хранит низшую молярную теплоту сгорания округленную кДж·моль-1
    double m_molar_heat_burning_20_lower{};

    // Метод расчета молярной теплоты сгорания 20/атм
    void calc_molar_heat_burning_20();

public:
    // Присваивает ссылку в m_flow и сразу вызывает расчет при создании
    explicit Molar_heat_burning_20(std::vector<Gas_component> &_flow);

    ~Molar_heat_burning_20();

    // Возвращает m_molar_heat_burning_20_higher
    [[nodiscard]] double get_molar_heat_burning_20_higher() const;

    // Возвращает m_molar_heat_burning_20_lower
    [[nodiscard]] double get_molar_heat_burning_20_lower() const;

};


#endif //GASPROPERTIES_MOLAR_HEAT_BURNING_20_H

//
// Created by alexa on 04.10.2021.
//

#ifndef GASPROPERTIES_MASS_HEAT_BURNING_20_H
#define GASPROPERTIES_MASS_HEAT_BURNING_20_H

#include "vector"
#include "../Chemical_base/Gas_component.h"
#include "iostream"
#include <cmath>

class Mass_heat_burning_20 {
private:
    // Хранит ссылку на вектор потока
    std::vector<Gas_component> m_flow;

    double m_molar_mass{};

    // Хранит высшую массовую теплоту сгорания округленную МДж·кг-1
    double m_mass_heat_burning_20_higher{};
    // Хранит низшую массовую теплоту сгорания округленную МДж·кг-1
    double m_mass_heat_burning_20_lower{};

    // Метод расчета молярной теплоты сгорания 20/атм
    void calc_mass_heat_burning_20();

public:
    // Присваивает ссылку в m_flow и сразу вызывает расчет при создании
    explicit Mass_heat_burning_20(std::vector<Gas_component> &_flow, double _molar_mass);

    ~Mass_heat_burning_20();

    // Возвращает m_molar_heat_burning_20_higher
    [[nodiscard]] double get_mass_heat_burning_20_higher() const;

    // Возвращает m_molar_heat_burning_20_lower
    [[nodiscard]] double get_mass_heat_burning_20_lower() const;

};


#endif //GASPROPERTIES_MASS_HEAT_BURNING_20_H

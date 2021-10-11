//
// Created by alexa on 06.10.2021.
//

#ifndef GASPROPERTIES_VOLUME_HEAT_BURNING_20_H
#define GASPROPERTIES_VOLUME_HEAT_BURNING_20_H

#include "vector"
#include "../Chemical_base/Gas_component.h"
#include "Factor_z.h"
#include "iostream"
#include <cmath>


class Volume_heat_burning_20 {
// Хранит ссылку на вектор потока
private:
    std::vector<Gas_component> m_flow;

    // Хранит коэффициент сжимаемости
    double m_z_factor{};

    // Хранит высшую объёмную теплоту сгорания округленную МДж·м-3
    double m_volume_heat_burning_20_higher{};
    // Хранит низшую объёмную теплоту сгорания округленную МДж·м-3
    double m_volume_heat_burning_20_lower{};

    // Метод расчета молярной теплоты сгорания 20/атм
    void calc_volume_heat_burning_20();

public:
    // Присваивает ссылку в m_flow и сразу вызывает расчет при создании
    explicit Volume_heat_burning_20(std::vector<Gas_component> &_flow, double _z_factor);

    ~Volume_heat_burning_20();

    // Возвращает m_molar_heat_burning_20_higher
    [[nodiscard]] double get_volume_heat_burning_20_higher() const;

    // Возвращает m_molar_heat_burning_20_lower
    [[nodiscard]] double get_volume_heat_burning_20_lower() const;

};


#endif //GASPROPERTIES_VOLUME_HEAT_BURNING_20_H

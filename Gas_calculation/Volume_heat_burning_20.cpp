//
// Created by alexa on 06.10.2021.
//

#include "Volume_heat_burning_20.h"


Volume_heat_burning_20::Volume_heat_burning_20(std::vector<Gas_component> &_flow, double _z_factor) {
    m_flow = _flow;
    m_z_factor = _z_factor;
    calc_volume_heat_burning_20();
}

double Volume_heat_burning_20::get_volume_heat_burning_20_higher() const {
    return m_volume_heat_burning_20_higher;
}

double Volume_heat_burning_20::get_volume_heat_burning_20_lower() const {
    return m_volume_heat_burning_20_lower;
}

void Volume_heat_burning_20::calc_volume_heat_burning_20() {
    // высшая объёмная теплота сгорания смеси
    double volume_heat_burning_20_higher{};
    // низшая объёмная теплота сгорания смеси
    double volume_heat_burning_20_lower{};

    // Данные по компоненту
    double spam_mol_frac{};
    double spam_volume_heat_burning_20_higher{};
    double spam_volume_heat_burning_20_lower{};

    // Объёмная теплота сгорания без поправки на сжимаемость
    for (Gas_component &item: m_flow) {
        spam_mol_frac = item.get_molar_fraction_component();
        spam_volume_heat_burning_20_higher = item.get_volume_heat_burning_20_higher();
        spam_volume_heat_burning_20_lower = item.get_volume_heat_burning_20_lower();
        volume_heat_burning_20_higher += spam_mol_frac * spam_volume_heat_burning_20_higher;
        volume_heat_burning_20_lower += spam_mol_frac * spam_volume_heat_burning_20_lower;
    }

    // поправка на сжимаемость
    volume_heat_burning_20_higher /= m_z_factor;
    volume_heat_burning_20_lower /= m_z_factor;

    // Точность округления
    double rounding_accuracy = 100.0;
    // Округление
    volume_heat_burning_20_higher = round(volume_heat_burning_20_higher * rounding_accuracy) / rounding_accuracy;
    volume_heat_burning_20_lower = round(volume_heat_burning_20_lower * rounding_accuracy) / rounding_accuracy;

    m_volume_heat_burning_20_higher = volume_heat_burning_20_higher;
    m_volume_heat_burning_20_lower = volume_heat_burning_20_lower;
}

Volume_heat_burning_20::~Volume_heat_burning_20() = default;

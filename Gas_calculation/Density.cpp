//
// Created by alexa on 06.10.2021.
//

#include "Density.h"

Density::Density(Molar_mass &_molar_mass, double _z_factor) {
    m_molar_mass_flow = _molar_mass.get_molar_mass();
    m_z_factor = _z_factor;
    calc_standard_density();
}

double Density::get_flow_density_20() const {
    return m_flow_density_20;
}

double Density::get_flow_del_air_20() const {
    return m_flow_del_air_20;
}

void Density::calc_standard_density() {
    double spam_flow_density_20{};
    double spam_flow_del_air_20{};

    // Плотность потока Без поправки на реальность (Типа идеальный, но нам это не надо)
    spam_flow_density_20 = (m_molar_mass_flow * standard_pressure_kPa)
                        / (universal_gas_constant_R * standard_temperature_k);
    // Поправим на реальность Плотность потока
    spam_flow_density_20 /= m_z_factor;

    // Относительная плотность потока Без поправки на реальность
    spam_flow_del_air_20 = m_molar_mass_flow / air_molar_mass;
    // Поправим на реальность относительную плотность
    spam_flow_del_air_20 /= m_z_factor;

    // Точность округления
    double rounding_accuracy = 10000.0;
    // Округление
    spam_flow_density_20 = round(spam_flow_density_20 * rounding_accuracy) / rounding_accuracy;
    spam_flow_del_air_20 = round(spam_flow_del_air_20 * rounding_accuracy) / rounding_accuracy;

    m_flow_density_20 = spam_flow_density_20;
    m_flow_del_air_20 = spam_flow_del_air_20;

}

Density::~Density() = default;

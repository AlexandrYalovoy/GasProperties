//
// Created by alexa on 04.10.2021.
//

#include "Mass_heat_burning_20.h"


Mass_heat_burning_20::Mass_heat_burning_20(std::vector<Gas_component> &_flow, Molar_mass &_class_mol_mass) {
    m_flow = _flow;
    m_molar_mass = _class_mol_mass.get_molar_mass();
    calc_mass_heat_burning_20();
}

double Mass_heat_burning_20::get_mass_heat_burning_20_higher() const {
    return m_mass_heat_burning_20_higher;
}

double Mass_heat_burning_20::get_mass_heat_burning_20_lower() const {
    return m_mass_heat_burning_20_lower;
}

void Mass_heat_burning_20::calc_mass_heat_burning_20() {
    // высшая массовая теплота сгорания смеси
    double mass_heat_burning_20_higher{};
    // низшая массовая теплота сгорания смеси
    double mass_heat_burning_20_lower{};

    // Данные по компоненту
    double spam_mol_frac{};
    double spam_mass_heat_burning_20_higher{};
    double spam_mass_heat_burning_20_lower{};

    for (Gas_component &item: m_flow) {
        spam_mol_frac = item.get_molar_fraction_component();
        spam_mass_heat_burning_20_higher = item.get_molar_heat_burning_20_higher();
        spam_mass_heat_burning_20_lower = item.get_molar_heat_burning_20_lower();
        mass_heat_burning_20_higher += (spam_mol_frac / m_molar_mass) * spam_mass_heat_burning_20_higher;
        mass_heat_burning_20_lower += (spam_mol_frac / m_molar_mass) * spam_mass_heat_burning_20_lower;
    }

    // Точность округления
    double rounding_accuracy = 100.0;
    // Округление
    mass_heat_burning_20_higher = round(mass_heat_burning_20_higher * rounding_accuracy) / rounding_accuracy;
    mass_heat_burning_20_lower = round(mass_heat_burning_20_lower * rounding_accuracy) / rounding_accuracy;

    m_mass_heat_burning_20_higher = mass_heat_burning_20_higher;
    m_mass_heat_burning_20_lower = mass_heat_burning_20_lower;
}

Mass_heat_burning_20::~Mass_heat_burning_20() = default;

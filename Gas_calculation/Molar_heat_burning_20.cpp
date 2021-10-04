//
// Created by alexa on 04.10.2021.
//

#include "Molar_heat_burning_20.h"

Molar_heat_burning_20::Molar_heat_burning_20(std::vector<Gas_component> &_flow) {
    m_flow = _flow;
    calc_molar_heat_burning_20();
}

double Molar_heat_burning_20::get_molar_heat_burning_20_higher() const {
    return m_molar_heat_burning_20_higher;
}

double Molar_heat_burning_20::get_molar_heat_burning_20_lower() const {
    return m_molar_heat_burning_20_lower;
}

void Molar_heat_burning_20::calc_molar_heat_burning_20() {
    // высшая молярная теплота сгорания смеси
    double molar_heat_burning_20_higher{};
    // низшая молярная теплота сгорания смеси
    double molar_heat_burning_20_lower{};

    // Данные по компоненту
    double spam_mol_frac{};
    double spam_mol_heat_burning_20_higher{};
    double spam_mol_heat_burning_20_lower{};

    for (Gas_component &item: m_flow) {
        spam_mol_frac = item.get_molar_fraction_component();
        spam_mol_heat_burning_20_higher = item.get_molar_heat_burning_20_higher();
        spam_mol_heat_burning_20_lower = item.get_molar_heat_burning_20_lower();
        molar_heat_burning_20_higher += spam_mol_frac * spam_mol_heat_burning_20_higher;
        molar_heat_burning_20_lower += spam_mol_frac * spam_mol_heat_burning_20_lower;
    }

    // Точность округления
    double rounding_accuracy = 100.0;
    // Округление
    molar_heat_burning_20_higher = round(molar_heat_burning_20_higher * rounding_accuracy) / rounding_accuracy;
    molar_heat_burning_20_lower = round(molar_heat_burning_20_lower * rounding_accuracy) / rounding_accuracy;

    m_molar_heat_burning_20_higher = molar_heat_burning_20_higher;
    m_molar_heat_burning_20_lower = molar_heat_burning_20_lower;
}

Molar_heat_burning_20::~Molar_heat_burning_20() = default;

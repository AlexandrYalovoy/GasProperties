//
// Created by alexa on 03.10.2021.
//

#include "Molar_mass.h"

Molar_mass::Molar_mass(std::vector<Gas_component> &_flow) {
    m_flow = _flow;
    calc_molar_mass();
}

double Molar_mass::get_molar_mass() const {
    return m_molar_mass;
}

void Molar_mass::calc_molar_mass() {
    double molar_mass{};
    double spam_mol_frac{};
    double spam_mol_mass{};

    for (Gas_component &item: m_flow) {
        spam_mol_frac = item.get_molar_fraction_component();
        spam_mol_mass = item.get_molar_mass();
        molar_mass += spam_mol_frac * spam_mol_mass;
    }

    double rounding_accuracy = 100.0;
    molar_mass = round(molar_mass * rounding_accuracy) / rounding_accuracy;

    m_molar_mass = molar_mass;
}

Molar_mass::~Molar_mass() = default;




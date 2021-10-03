//
// Created by alexa on 29.09.2021.
//

#include "Factor_z.h"

Factor_z::Factor_z(std::vector<Gas_component> &_flow) {
    m_flow = _flow;
    calc_flow_z_factor();
}

void Factor_z::test_arr() {
    std::cout << m_flow[0].get_name_en() << std::endl;
}

void Factor_z::calc_flow_z_factor() {

    // найдем средне арифметическое смеси произведения мольной доли итого компонента на коф. суммирования
    double average_mol_frac_sqrt_b{};
    double spam_mol_frac{};
    double spam_20_sqrt_b{};
    for (Gas_component &item: m_flow) {
        spam_mol_frac = item.get_molar_fraction_component();
        spam_20_sqrt_b = item.get_20_sqrt_b();
        average_mol_frac_sqrt_b += spam_mol_frac * spam_20_sqrt_b;
    }

    // Найдем коэффициент сжимаемости
    double result_z_factor{};
    result_z_factor = 1.0 - pow(average_mol_frac_sqrt_b, 2.0);
    double rounding_accuracy = 10000.0;
    result_z_factor = round(result_z_factor * rounding_accuracy) / rounding_accuracy;
    m_flow_z_factor = result_z_factor;
}

double Factor_z::get_flow_z_factor() const {
    return m_flow_z_factor;
}

Factor_z::~Factor_z() = default;

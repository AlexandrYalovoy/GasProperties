//
// Created by alexa on 11.10.2021.
//

#ifndef GASPROPERTIES_GAS_CALCULATION_H
#define GASPROPERTIES_GAS_CALCULATION_H

#include "../Chemical_base/Gas_comp_arr.h"
#include "Factor_z.h"
#include "Molar_mass.h"
#include "Molar_heat_burning_20.h"
#include "Mass_heat_burning_20.h"
#include "Volume_heat_burning_20.h"
#include "Density.h"
#include "Wobbe_number.h"

class Gas_calculation {
private:
    // Хранит ссылку на вектор потока
    std::vector<Gas_component> m_flow;

    // Хранит результаты расчета

    // Хранит коэффициент сжимаемости
    double m_flow_z_factor{};

    // Хранит молярную массу
    double m_molar_mass{};

    // Хранит высшую молярную теплоту сгорания округленную кДж·моль-1
    double m_molar_heat_burning_20_higher{};
    // Хранит низшую молярную теплоту сгорания округленную кДж·моль-1
    double m_molar_heat_burning_20_lower{};

    // Хранит высшую массовую теплоту сгорания округленную МДж·кг-1
    double m_mass_heat_burning_20_higher{};
    // Хранит низшую массовую теплоту сгорания округленную МДж·кг-1
    double m_mass_heat_burning_20_lower{};

    // Хранит высшую объёмную теплоту сгорания округленную МДж·м-3
    double m_volume_heat_burning_20_higher{};
    // Хранит низшую объёмную теплоту сгорания округленную МДж·м-3
    double m_volume_heat_burning_20_lower{};

    // Хранит плотность в стандартных условиях кг*м-3
    double m_flow_density_20{};
    // Хранит плотность относительную
    double m_flow_density_del_air_20{};

    // Хранит число Воббе высшее МДж·м-3
    double m_wobbe_number_higher{};
    // Хранит число Воббе низшее МДж·м-3
    double m_wobbe_number_lower{};

public:
    explicit Gas_calculation(std::vector<Gas_component> &_flow);

    ~Gas_calculation();

    [[nodiscard]] double get_flow_z_factor() const;

    [[nodiscard]] double get_molar_mass() const;

    [[nodiscard]] double get_molar_heat_burning_20_higher() const;

    [[nodiscard]] double get_molar_heat_burning_20_lower() const;

    [[nodiscard]] double get_mass_heat_burning_20_higher() const;

    [[nodiscard]] double get_mass_heat_burning_20_lower() const;

    [[nodiscard]] double get_volume_heat_burning_20_higher() const;

    [[nodiscard]] double get_volume_heat_burning_20_lower() const;

    [[nodiscard]] double get_flow_density_20() const;

    [[nodiscard]] double get_flow_density_del_air_20() const;

    [[nodiscard]] double get_wobbe_number_higher() const;

    [[nodiscard]] double get_wobbe_number_lower() const;

    [[maybe_unused]] void result_calc_print() const;

};


#endif //GASPROPERTIES_GAS_CALCULATION_H

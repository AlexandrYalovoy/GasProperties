//
// Created by alexa on 06.10.2021.
//

#ifndef GASPROPERTIES_DENSITY_H
#define GASPROPERTIES_DENSITY_H

#include "../Chemical_base/Gas_const.h"
#include "Molar_mass.h"

class Density {
private:
    // Молярная масса потока
    double m_molar_mass_flow{};
    // Коэффициент сжимаемости
    double m_z_factor{};

    // Плотности в стандартных условиях кг*м-3
    // Хранит плотность в стандартных условиях кг*м-3
    double m_flow_density_20{};
    // Хранит плотность относительную
    double m_flow_density_del_air_20{};

    // Метод расчета плотности в стандартных условиях + относит
    void calc_standard_density();
public:
    explicit Density(double _molar_mass, double _z_factor);
    ~Density();

    [[nodiscard]] double get_flow_density_20() const;
    [[nodiscard]] double get_flow_density_del_air_20() const;

};


#endif //GASPROPERTIES_DENSITY_H

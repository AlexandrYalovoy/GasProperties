//
// Created by alexa on 11.10.2021.
//

#ifndef GASPROPERTIES_WOBBE_NUMBER_H
#define GASPROPERTIES_WOBBE_NUMBER_H

#include "cmath"

class Wobbe_number {
private:
    // Хранит высшую объёмную теплоту сгорания округленную МДж·м-3
    double m_volume_heat_burning_20_higher{};
    // Хранит низшую объёмную теплоту сгорания округленную МДж·м-3
    double m_volume_heat_burning_20_lower{};
    // Хранит относительную плотность смеси по воздуху
    double m_flow_density_del_air_20{};

    // Хранит число Воббе высшее МДж·м-3
    double m_wobbe_number_higher{};
    // Хранит число Воббе низшее МДж·м-3
    double m_wobbe_number_lower{};

    void calc_wobbe_number();

public:
    Wobbe_number(double _volume_heat_burning_20_higher, double _volume_heat_burning_20_lower,
                 double _flow_density_del_air_20);

    ~Wobbe_number();

    [[nodiscard]] double get_wobbe_number_higher() const;

    [[nodiscard]] double get_wobbe_number_lower() const;
};


#endif //GASPROPERTIES_WOBBE_NUMBER_H

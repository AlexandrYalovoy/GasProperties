//
// Created by alexa on 11.10.2021.
//

#include "Wobbe_number.h"


Wobbe_number::Wobbe_number(double _volume_heat_burning_20_higher, double _volume_heat_burning_20_lower,
                           double _flow_density_del_air_20) {
    m_volume_heat_burning_20_higher = _volume_heat_burning_20_higher;
    m_volume_heat_burning_20_lower = _volume_heat_burning_20_lower;
    m_flow_density_del_air_20 = _flow_density_del_air_20;
    calc_wobbe_number();
}

double Wobbe_number::get_wobbe_number_higher() const {
    return m_wobbe_number_higher;
}

double Wobbe_number::get_wobbe_number_lower() const {
    return m_wobbe_number_lower;
}

void Wobbe_number::calc_wobbe_number() {
    // Найдем высшее число Воббе
    m_wobbe_number_higher = m_volume_heat_burning_20_higher / sqrt(m_flow_density_del_air_20);
    // Найдем низшее число Воббе
    m_wobbe_number_lower = m_volume_heat_burning_20_lower / sqrt(m_flow_density_del_air_20);

    // Точность округления
    double rounding_accuracy = 10000.0;
    // Округление
    m_wobbe_number_higher = round(m_wobbe_number_higher * rounding_accuracy) / rounding_accuracy;
    m_wobbe_number_lower = round(m_wobbe_number_lower * rounding_accuracy) / rounding_accuracy;

}

Wobbe_number::~Wobbe_number() = default;

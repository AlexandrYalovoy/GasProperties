//
// Created by alexa on 11.10.2021.
//

#include "Gas_calculation.h"

Gas_calculation::Gas_calculation(std::vector<Gas_component> &_flow) {
    // Хранит ссылку на вектор потока
    m_flow = _flow;

    // Коэффициент сжимаемости
    Factor_z factor_z(m_flow);
    m_flow_z_factor = factor_z.get_flow_z_factor();

    // Молярная масса
    Molar_mass molar_mass(m_flow);
    m_molar_mass = molar_mass.get_molar_mass();
    //
    Molar_heat_burning_20 molar_heat_burning_20(m_flow);
    m_molar_heat_burning_20_higher = molar_heat_burning_20.get_molar_heat_burning_20_higher();
    m_molar_heat_burning_20_lower = molar_heat_burning_20.get_molar_heat_burning_20_lower();
    //
    Mass_heat_burning_20 mass_heat_burning_20(m_flow, m_molar_mass);
    m_mass_heat_burning_20_higher = mass_heat_burning_20.get_mass_heat_burning_20_higher();
    m_mass_heat_burning_20_lower = mass_heat_burning_20.get_mass_heat_burning_20_lower();
    //
    Volume_heat_burning_20 volume_heat_burning_20(m_flow, m_flow_z_factor);
    m_volume_heat_burning_20_higher = volume_heat_burning_20.get_volume_heat_burning_20_higher();
    m_volume_heat_burning_20_lower = volume_heat_burning_20.get_volume_heat_burning_20_lower();
    //
    Density density(m_molar_mass, m_flow_z_factor);
    m_flow_density_20 = density.get_flow_density_20();
    m_flow_density_del_air_20 = density.get_flow_density_del_air_20();
    //
    Wobbe_number wobbe_number(m_volume_heat_burning_20_higher, m_volume_heat_burning_20_lower,
                              m_flow_density_del_air_20);
    m_wobbe_number_higher = wobbe_number.get_wobbe_number_higher();
    m_wobbe_number_lower = wobbe_number.get_wobbe_number_lower();
}

double Gas_calculation::get_flow_z_factor() const {
    return m_flow_z_factor;
}

double Gas_calculation::get_molar_mass() const {
    return m_molar_mass;
}

double Gas_calculation::get_molar_heat_burning_20_higher() const {
    return m_molar_heat_burning_20_higher;
}

double Gas_calculation::get_molar_heat_burning_20_lower() const {
    return m_molar_heat_burning_20_lower;
}

double Gas_calculation::get_mass_heat_burning_20_higher() const {
    return m_mass_heat_burning_20_higher;
}

double Gas_calculation::get_mass_heat_burning_20_lower() const {
    return m_mass_heat_burning_20_lower;
}

double Gas_calculation::get_volume_heat_burning_20_higher() const {
    return m_volume_heat_burning_20_higher;
}

double Gas_calculation::get_volume_heat_burning_20_lower() const {
    return m_volume_heat_burning_20_lower;
}

double Gas_calculation::get_flow_density_20() const {
    return m_flow_density_20;
}

double Gas_calculation::get_flow_density_del_air_20() const {
    return m_flow_density_del_air_20;
}

double Gas_calculation::get_wobbe_number_higher() const {
    return m_wobbe_number_higher;
}

double Gas_calculation::get_wobbe_number_lower() const {
    return m_wobbe_number_lower;
}

[[maybe_unused]] void Gas_calculation::result_calc_print() const {
    std::cout << "flow_z_factor - " << get_flow_z_factor() << std::endl;
    std::cout << "molar_mass - " << get_molar_mass() << std::endl;
    std::cout << "molar_heat_burning_20_higher - " << get_molar_heat_burning_20_higher() << std::endl;
    std::cout << "molar_heat_burning_20_lower - " << get_molar_heat_burning_20_lower() << std::endl;
    std::cout << "mass_heat_burning_20_higher - " << get_mass_heat_burning_20_higher() << std::endl;
    std::cout << "mass_heat_burning_20_lower - " << get_mass_heat_burning_20_lower() << std::endl;
    std::cout << "volume_heat_burning_20_higher - " << get_volume_heat_burning_20_higher() << std::endl;
    std::cout << "volume_heat_burning_20_lower - " << get_volume_heat_burning_20_lower() << std::endl;
    std::cout << "flow_density_20 - " << get_flow_density_20() << std::endl;
    std::cout << "flow_del_air_20 - " << get_flow_density_del_air_20() << std::endl;
    std::cout << "wobbe_number_higher - " << get_wobbe_number_higher() << std::endl;
    std::cout << "wobbe_number_lower - " << get_wobbe_number_lower() << std::endl;
}

Gas_calculation::~Gas_calculation() = default;



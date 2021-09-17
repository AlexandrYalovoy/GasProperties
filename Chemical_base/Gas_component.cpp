//
// Created by alexa on 16.09.2021.
//

#include "Gas_component.h"

Gas_component::Gas_component(std::string _name_ru, std::string _name_en) {
    set_name_ru(std::move(_name_ru));
    set_name_en(std::move(_name_en));
}

Gas_component::~Gas_component() = default;

// Метод печати информации

void Gas_component::print_comp_info() const{
    std::cout << "Name - " << get_name_en() << std::endl;
    std::cout << "Molar_fraction - " << get_molar_fraction_component() << std::endl;
    std::cout << "Molar_mas - " << get_molar_mass() << std::endl;
    std::cout << "20_z_factor - " << get_20_z_factor() << std::endl;
    std::cout << "20_sqrt_b - " << get_20_sqrt_b() << std::endl;
    std::cout << "Molar_heat_burning_20_higher - " << get_molar_heat_burning_20_higher() << std::endl;
    std::cout << "Molar_heat_burning_20_lower - " << get_molar_heat_burning_20_lower() << std::endl;
    std::cout << "Mass_heat_burning_20_higher - " << get_mass_heat_burning_20_higher() << std::endl;
    std::cout << "Mass_heat_burning_20_lower - " << get_mass_heat_burning_20_lower() << std::endl;
    std::cout << "Volume_heat_burning_20_higher - " << get_volume_heat_burning_20_higher() << std::endl;
    std::cout << "Volume_heat_burning_20_lower - " << get_volume_heat_burning_20_lower() << std::endl;
    std::cout << "Critical_temperature - " << get_critical_temperature() << std::endl;
    std::cout << "Critical_pressure - " << get_critical_pressure() << std::endl;
    std::cout << "Coefficient_acentricity - " << get_coefficient_acentricity() << std::endl;
}

// блок сеттеров
void Gas_component::set_name_ru(std::string _name_ru) {
    m_name_ru = std::move(_name_ru);
}

void Gas_component::set_name_en(std::string _name_en) {
    m_name_en = std::move(_name_en);
}

void Gas_component::set_molar_fraction_component(double _molar_fraction_component) {
    m_molar_fraction_component = _molar_fraction_component;
}

void Gas_component::set_molar_mass(double _molar_mass) {
    m_molar_mass = _molar_mass;
}

void Gas_component::set_20_z_factor(double _20_z_factor) {
    m_20_z_factor = _20_z_factor;
}

void Gas_component::set_20_sqrt_b(double _20_sqrt_b) {
    m_20_sqrt_b = _20_sqrt_b;
}

void Gas_component::set_molar_heat_burning_20_higher(double _molar_heat_burning_20_higher) {
    m_molar_heat_burning_20_higher = _molar_heat_burning_20_higher;
}

void Gas_component::set_molar_heat_burning_20_lower(double _molar_heat_burning_20_lower) {
    m_molar_heat_burning_20_lower = _molar_heat_burning_20_lower;
}

void Gas_component::set_mass_heat_burning_20_higher(double _mass_heat_burning_20_higher) {
    m_mass_heat_burning_20_higher = _mass_heat_burning_20_higher;
}

void Gas_component::set_mass_heat_burning_20_lower(double _mass_heat_burning_20_lower) {
    m_mass_heat_burning_20_lower = _mass_heat_burning_20_lower;
}

void Gas_component::set_volume_heat_burning_20_higher(double _volume_heat_burning_20_higher) {
    m_volume_heat_burning_20_higher = _volume_heat_burning_20_higher;
}

void Gas_component::set_volume_heat_burning_20_lower(double _volume_heat_burning_20_lower) {
    m_volume_heat_burning_20_lower = _volume_heat_burning_20_lower;
}

void Gas_component::set_critical_temperature(double _critical_temperature) {
    m_critical_temperature = _critical_temperature;
}

void Gas_component::set_critical_pressure(double _critical_pressure) {
    m_critical_pressure = _critical_pressure;
}

void Gas_component::set_coefficient_acentricity(double _coefficient_acentricity) {
    m_coefficient_acentricity = _coefficient_acentricity;
}

// блок геттеров
std::string Gas_component::get_name_ru() const {
    return m_name_ru;
}

std::string Gas_component::get_name_en() const {
    return m_name_en;
}

double Gas_component::get_molar_fraction_component() const {
    return m_molar_fraction_component;
}

double Gas_component::get_molar_mass() const {
    return m_molar_mass;
}

double Gas_component::get_20_z_factor() const {
    return m_20_z_factor;
}

double Gas_component::get_20_sqrt_b() const {
    return m_20_sqrt_b;
}

double Gas_component::get_molar_heat_burning_20_higher() const {
    return m_molar_heat_burning_20_higher;
}

double Gas_component::get_molar_heat_burning_20_lower() const {
    return m_molar_heat_burning_20_lower;
}

double Gas_component::get_mass_heat_burning_20_higher() const {
    return m_mass_heat_burning_20_higher;
}

double Gas_component::get_mass_heat_burning_20_lower() const {
    return m_mass_heat_burning_20_lower;
}

double Gas_component::get_volume_heat_burning_20_higher() const {
    return m_volume_heat_burning_20_higher;
}

double Gas_component::get_volume_heat_burning_20_lower() const {
    return m_volume_heat_burning_20_lower;
}

double Gas_component::get_critical_temperature() const {
    return m_critical_temperature;
}

double Gas_component::get_critical_pressure() const {
    return m_critical_pressure;
}

double Gas_component::get_coefficient_acentricity() const {
    return m_coefficient_acentricity;
}


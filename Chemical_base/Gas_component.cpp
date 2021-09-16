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
    std::cout << "Molar mass - " << get_molar_mass() << std::endl;
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

void Gas_component::set_0_z_factor(double _0_z_factor) {
    m_0_z_factor = _0_z_factor;
}

void Gas_component::set_0_sqrt_b(double _0_sqrt_b) {
    m_0_sqrt_b = _0_sqrt_b;
}

void Gas_component::set_15_z_factor(double _15_z_factor) {
    m_15_z_factor = _15_z_factor;
}

void Gas_component::set_15_sqrt_b(double _15_sqrt_b) {
    m_15_sqrt_b = _15_sqrt_b;
}

void Gas_component::set_20_z_factor(double _20_z_factor) {
    m_20_z_factor = _20_z_factor;
}

void Gas_component::set_20_sqrt_b(double _20_sqrt_b) {
    m_20_sqrt_b = _20_sqrt_b;
}

void Gas_component::set_molar_heat_burning(double _molar_heat_burning) {
    m_molar_heat_burning = _molar_heat_burning;
}

void Gas_component::set_mass_heat_burning(double _mass_heat_burning) {
    m_mass_heat_burning = _mass_heat_burning;
}

void Gas_component::set_volume_heat_burning(double _volume_heat_burning) {
    m_volume_heat_burning = _volume_heat_burning;
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

double Gas_component::get_0_z_factor() const {
    return m_0_z_factor;
}

double Gas_component::get_0_sqrt_b() const {
    return m_0_sqrt_b;
}

double Gas_component::get_15_z_factor() const {
    return m_15_z_factor;
}

double Gas_component::get_15_sqrt_b() const {
    return m_15_sqrt_b;
}

double Gas_component::get_20_z_factor() const {
    return m_20_z_factor;
}

double Gas_component::get_20_sqrt_b() const {
    return m_20_sqrt_b;
}

double Gas_component::get_molar_heat_burning() const {
    return m_molar_heat_burning;
}

double Gas_component::get_mass_heat_burning() const {
    return m_mass_heat_burning;
}

double Gas_component::get_volume_heat_burning() const {
    return m_volume_heat_burning;
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


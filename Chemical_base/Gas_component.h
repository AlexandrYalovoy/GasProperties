//
// Created by alexa on 16.09.2021.
//

#ifndef GASPROPERTIES_GAS_COMPONENT_H
#define GASPROPERTIES_GAS_COMPONENT_H
#include "string"

class Gas_component {
private:

    std::string m_name_ru{};
    std::string m_name_en{};

    double m_molar_fraction_component = 0.0; // молярная доля компонента

    double m_molar_mass{};  // молярная масса кг*моль-1

    double m_0_z_factor{};  // коэффициент сжимаемости 0 и атм
    double m_0_sqrt_b{};    // коэффициент суммирования 0 и атм
    double m_15_z_factor{}; // коэффициент сжимаемости 15 и атм
    double m_15_sqrt_b{};   // коэффициент суммирования 15 и атм
    double m_20_z_factor{}; // коэффициент сжимаемости 20 и атм
    double m_20_sqrt_b{};   // коэффициент суммирования 20 и атм

    double m_molar_heat_burning{}; // молярная теплота сгорания
    double m_mass_heat_burning{}; // массовая теплота сгорания
    double m_volume_heat_burning{}; // объёмная теплота сгорания

    double m_critical_temperature{}; // Критическая температура, К
    double m_critical_pressure{}; // Критическое давление, кПа
    double m_coefficient_acentricity{}; // Коэффициент ацентричности

public:
    // Конструктор
    Gas_component(std::string _name_ru, std::string _name_en);

    // Деструктор
    ~Gas_component();

    //

    // блок сеттеров
    void set_name_ru(std::string _name_ru);

    void set_name_en(std::string _name_en);

    void set_molar_fraction_component(double _molar_fraction_component);

    void set_molar_mass(double _molar_mass);

    void set_0_z_factor(double _0_z_factor);

    void set_0_sqrt_b(double _0_sqrt_b);

    void set_15_z_factor(double _15_z_factor);

    void set_15_sqrt_b(double _15_sqrt_b);

    void set_20_z_factor(double _20_z_factor);

    void set_20_sqrt_b(double _20_sqrt_b);

    void set_molar_heat_burning(double _molar_heat_burning);

    void set_mass_heat_burning(double _mass_heat_burning);

    void set_volume_heat_burning(double _volume_heat_burning);

    void set_critical_temperature(double _critical_temperature);

    void set_critical_pressure(double _critical_pressure);

    void set_coefficient_acentricity(double _coefficient_acentricity);

    // блок геттеров
    [[nodiscard]] std::string get_name_ru() const;

    [[nodiscard]] std::string get_name_en() const;

    [[nodiscard]] double get_molar_fraction_component() const;

    [[nodiscard]] double get_molar_mass() const;

    [[nodiscard]] double get_0_z_factor() const;

    [[nodiscard]] double get_0_sqrt_b() const;

    [[nodiscard]] double get_15_z_factor() const;

    [[nodiscard]] double get_15_sqrt_b() const;

    [[nodiscard]] double get_20_z_factor() const;

    [[nodiscard]] double get_20_sqrt_b() const;

    [[nodiscard]] double get_molar_heat_burning() const;

    [[nodiscard]] double get_mass_heat_burning() const;

    [[nodiscard]] double get_volume_heat_burning() const;

    [[nodiscard]] double get_critical_temperature() const;

    [[nodiscard]] double get_critical_pressure() const;

    [[nodiscard]] double get_coefficient_acentricity() const;
};

#endif //GASPROPERTIES_GAS_COMPONENT_H

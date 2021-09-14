//
// Created by alexa on 14.09.2021.
//

class Base_gas_component {
private:
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

    double const m_universal_gas_constant_R = 8.314510;  // универсальная газовая постоянная Дж*моль-1 * К-1

    double m_critical_temperature{}; // Критическая температура, К
    double m_critical_pressure{}; // Критическое давление, кПа
    double m_coefficient_acentricity{}; // Коэффициент ацентричности

public:


    // блок сеттеров
    void set_molar_fraction_component(double _molar_fraction_component) {
        m_molar_fraction_component = _molar_fraction_component;
    }

    void set_molar_mass(double _molar_mass) {
        m_molar_mass = _molar_mass;
    }

    void set_0_z_factor(double _0_z_factor) {
        m_0_z_factor = _0_z_factor;
    }

    void set_0_sqrt_b(double _0_sqrt_b) {
        m_0_sqrt_b = _0_sqrt_b;
    }

    void set_15_z_factor(double _15_z_factor) {
        m_15_z_factor = _15_z_factor;
    }

    void set_15_sqrt_b(double _15_sqrt_b) {
        m_15_sqrt_b = _15_sqrt_b;
    }

    void set_20_z_factor(double _20_z_factor) {
        m_20_z_factor = _20_z_factor;
    }

    void set_20_sqrt_b(double _20_sqrt_b) {
        m_20_sqrt_b = _20_sqrt_b;
    }

    void set_molar_heat_burning(double _molar_heat_burning) {
        m_molar_heat_burning = _molar_heat_burning;
    }

    void set_mass_heat_burning(double _mass_heat_burning) {
        m_mass_heat_burning = _mass_heat_burning;
    }

    void set_volume_heat_burning(double _volume_heat_burning) {
        m_volume_heat_burning = _volume_heat_burning;
    }

    void set_critical_temperature(double _critical_temperature) {
        m_critical_temperature = _critical_temperature;
    }

    void set_critical_pressure(double _critical_pressure) {
        m_critical_pressure = _critical_pressure;
    }

    void set_coefficient_acentricity(double _coefficient_acentricity) {
        m_coefficient_acentricity = _coefficient_acentricity;
    }

    // блок геттеров
    [[nodiscard]] double get_molar_fraction_component() const {
        return m_molar_fraction_component;
    };

    [[nodiscard]] double get_molar_mass() const {
        return m_molar_mass;
    };

    [[nodiscard]] double get_0_z_factor() const {
        return m_0_z_factor;
    };

    [[nodiscard]] double get_0_sqrt_b() const {
        return m_0_sqrt_b;
    };

    [[nodiscard]] double get_15_z_factor() const {
        return m_15_z_factor;
    };

    [[nodiscard]] double get_15_sqrt_b() const {
        return m_15_sqrt_b;
    };

    [[nodiscard]] double get_20_z_factor() const {
        return m_20_z_factor;
    };

    [[nodiscard]] double get_20_sqrt_b() const {
        return m_20_sqrt_b;
    };

    [[nodiscard]] double get_molar_heat_burning() const {
        return m_molar_heat_burning;
    };

    [[nodiscard]] double get_mass_heat_burning() const {
        return m_mass_heat_burning;
    };

    [[nodiscard]] double get_volume_heat_burning() const {
        return m_volume_heat_burning;
    };

    [[nodiscard]] double get_critical_temperature() const {
        return m_critical_temperature;
    };

    [[nodiscard]] double get_critical_pressure() const {
        return m_critical_pressure;
    };

    [[nodiscard]] double get_coefficient_acentricity() const {
        return m_coefficient_acentricity;
    };

};

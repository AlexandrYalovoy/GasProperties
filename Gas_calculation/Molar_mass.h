//
// Created by alexa on 03.10.2021.
//

#ifndef GASPROPERTIES_MOLAR_MASS_H
#define GASPROPERTIES_MOLAR_MASS_H

#include "vector"
#include "../Chemical_base/Gas_component.h"
#include "iostream"
#include <cmath>

class Molar_mass {
private:
    // Хранит ссылку на вектор потока
    std::vector<Gas_component> m_flow;

    // Хранит результат расчета округленный
    double m_molar_mass{};

    // Метод расчета молярной массы потока
    void calc_molar_mass();

public:
    // Присваивает ссылку в m_flow и сразу вызывает расчет при создании
    explicit Molar_mass(std::vector<Gas_component> &_flow);

    ~Molar_mass();

    // Возвращает m_molar_mass
    [[nodiscard]] double get_molar_mass() const;

};


#endif //GASPROPERTIES_MOLAR_MASS_H

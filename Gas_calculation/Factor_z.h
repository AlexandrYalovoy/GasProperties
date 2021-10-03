//
// Created by alexa on 29.09.2021.
//

#ifndef GASPROPERTIES_FACTOR_Z_H
#define GASPROPERTIES_FACTOR_Z_H

#include "vector"
#include "../Chemical_base/Gas_component.h"
#include "iostream"
#include <cmath>

class Factor_z {
private:
    std::vector<Gas_component> m_flow;
    double m_flow_z_factor{};

    void calc_flow_z_factor();

public:
    explicit Factor_z(std::vector<Gas_component> &_flow);

    ~Factor_z();

    [[nodiscard]] double get_flow_z_factor() const;

    void test_arr();
};


#endif //GASPROPERTIES_FACTOR_Z_H

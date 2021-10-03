#include <iostream>
#include "Chemical_base/Gas_comp_arr.h"
#include "Gas_calculation/Factor_z.h"
#include "Gas_calculation/Molar_mass.h"
#include "string"


int main() {
    Gas_comp_arr standard_comp_arr;

    std::vector<Gas_component> array_gas_labatugan;

    array_gas_labatugan = standard_comp_arr.get_arr();
    for (Gas_component &item: array_gas_labatugan) {
        std::string spam_name{};
        spam_name = item.get_name_ru();
        if(spam_name == "Метан") {
            item.set_molar_fraction_component(0.9247);
        } else if (spam_name == "Этан") {
            item.set_molar_fraction_component(0.035);
        } else if (spam_name == "Пропан") {
            item.set_molar_fraction_component(0.0098);
        } else if (spam_name == "н-Бутан") {
            item.set_molar_fraction_component(0.0022);
        } else if (spam_name == "2-Метилпропан") {
            item.set_molar_fraction_component(0.0034);
        } else if (spam_name == "н-Пентан") {
            item.set_molar_fraction_component(0.0006);
        } else if (spam_name == "Азот") {
            item.set_molar_fraction_component(0.0175);
        } else if (spam_name == "Диоксид углерода") {
            item.set_molar_fraction_component(0.0068);
        }

    }

    Factor_z test_z(array_gas_labatugan);
    Molar_mass test_m_mass(array_gas_labatugan);

    std::cout << test_z.get_flow_z_factor() << std::endl;
    std::cout << test_m_mass.get_molar_mass() << std::endl;

    return 0;
}

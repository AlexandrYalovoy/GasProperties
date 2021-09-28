#include <iostream>
#include "Chemical_base/Gas_comp_arr.h"


int main() {
    Gas_comp_arr standard_comp_arr;

    std::vector<Gas_component> array_gas_labatugan;

    array_gas_labatugan = standard_comp_arr.get_arr();

    for (const Gas_component& item: array_gas_labatugan) {
        std::cout << item.get_name_en() << std::endl;
    }

    return 0;
}

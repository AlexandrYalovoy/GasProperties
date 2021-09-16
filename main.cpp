#include <iostream>
#include "Chemical_base/Gas_component.h"
#include "Chemical_base/Gas_comp_array.h"


int main() {


    // Метан
    Gas_component methane("Метан", "Methane");
    array_gas_component.push_back(&methane);
    methane.set_molar_mass(16.043);
    methane.print_comp_info();


    return 0;
}

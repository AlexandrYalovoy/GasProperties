#include <iostream>
#include "Chemical_base/Gas_component.h"
#include "Chemical_base/Gas_comp_array.h"


int main() {
    // Инициализация экземпляра класса хранилища

    Gas_comp_array array_base_gas_component;

    // Блок инициализации компонентов

    // Метан
    Gas_component methane("Метан", "Methane");
    array_base_gas_component.component_add_in_array(&methane);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

#include <iostream>
#include "Chemical_base/Gas_comp_arr.h"
#include "Gas_calculation/Gas_calculation.h"
#include "string"
#include "GUI/Main_window.h"
#include <QApplication>


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Gas_comp_arr standard_comp_arr;

    std::vector<Gas_component> array_gas_labatugan;

    array_gas_labatugan = standard_comp_arr.get_arr();
    for (Gas_component &item: array_gas_labatugan) {
        std::string spam_name{};
        spam_name = item.get_name_ru();
        if (spam_name == "Метан") {
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

    Gas_calculation test(array_gas_labatugan);
    test.result_calc_print();

    M_W::Main_window test_window;

    test_window.show();




    return QApplication::exec();
}

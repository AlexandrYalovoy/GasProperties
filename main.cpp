#include <iostream>
#include "Chemical_base/Gas_component.h"
#include "Chemical_base/Gas_comp_array.h"


int main() {


    // Метан
    Gas_component methane("Метан", "Methane");
    array_gas_component.push_back(&methane);

    methane.set_molar_mass(16.043);
    methane.set_20_z_factor(0.9981);
    methane.set_20_sqrt_b(0.0436);

    methane.set_molar_heat_burning_20_higher(891.09);
    methane.set_molar_heat_burning_20_lower(802.65);

    methane.set_mass_heat_burning_20_higher(55.545);
    methane.set_mass_heat_burning_20_lower(50.032);

    methane.set_volume_heat_burning_20_higher(37.044);
    methane.set_volume_heat_burning_20_lower(33.367);

    methane.set_critical_temperature(190.555);
    methane.set_critical_pressure(4598.8);
    methane.set_coefficient_acentricity(0.0115);

    methane.print_comp_info();

    // Этан
    Gas_component ethan("Этан", "Ethan");
    array_gas_component.push_back(&ethan);
    ethan.set_molar_mass(30.070);

    // Пропан
    Gas_component propane("Пропан", "Propane");
    array_gas_component.push_back(&propane);
    propane.set_molar_mass(44.097);

    // н-Бутан
    Gas_component n_butane("н-Бутан", "n-Butane");
    array_gas_component.push_back(&n_butane);
    n_butane.set_molar_mass(58.123);

    // 2-Метилпропан
    Gas_component methylpropane_2("2-Метилпропан", "2-Methylpropane");
    array_gas_component.push_back(&methylpropane_2);
    methylpropane_2.set_molar_mass(58.123);

    // н-Пентан
    Gas_component n_pentane("н-Пентан", "n-Pentane");
    array_gas_component.push_back(&n_pentane);
    n_pentane.set_molar_mass(72.150);

    // 2-Метилбутан
    Gas_component methylbutane_2("2-Метилбутан", "2-Methylbutane");
    array_gas_component.push_back(&methylbutane_2);
    methylbutane_2.set_molar_mass(72.150);

    // 2,2-Диметилпропан
    Gas_component dimethylpropane_2_2("2,2-Диметилпропан", "2,2-Dimethylpropane");
    array_gas_component.push_back(&dimethylpropane_2_2);
    dimethylpropane_2_2.set_molar_mass(72.150);

    // н-Гексан
    Gas_component n_hexane("н-Гексан", "n-Hexane");
    array_gas_component.push_back(&n_hexane);
    n_hexane.set_molar_mass(86.177);

    // 2-Метилпентан
    Gas_component methylpentane_2("2-Метилпентан", "2-Methylpentane");
    array_gas_component.push_back(&methylpentane_2);
    methylpentane_2.set_molar_mass(86.177);

    // 3-Метилпентан
    Gas_component methylpentane_3("3-Метилпентан", "3-Methylpentane");
    array_gas_component.push_back(&methylpentane_3);
    methylpentane_3.set_molar_mass(86.177);

    // 2,2-Диметилбутан
    Gas_component dimethylbutane_2_2("2,2-Диметилбутан", "2,2-Dimethylbutane");
    array_gas_component.push_back(&dimethylbutane_2_2);
    dimethylbutane_2_2.set_molar_mass(86.177);

    // 2,3-Диметилбутан
    Gas_component dimethylbutane_2_3("2,3-Диметилбутан", "2,3-Dimethylbutane");
    array_gas_component.push_back(&dimethylbutane_2_3);
    dimethylbutane_2_3.set_molar_mass(86.177);

    // н-Гептан
    Gas_component n_heptane("н-Гептан", "n-Heptane");
    array_gas_component.push_back(&n_heptane);
    n_heptane.set_molar_mass(100.204);

    // н-Октан
    Gas_component n_octane("н-Октан", "n-Octane");
    array_gas_component.push_back(&n_octane);
    n_octane.set_molar_mass(114.231);

    // н-Нонан
    Gas_component n_nonan("н-Нонан", "n-Nonan");
    array_gas_component.push_back(&n_nonan);
    n_nonan.set_molar_mass(128.258);

    // н-Декан
    Gas_component n_dean("н-Декан", "n-Dean");
    array_gas_component.push_back(&n_dean);
    n_dean.set_molar_mass(142.285);

    // Этилен
    Gas_component ethylene("Этилен", "Ethylene");
    array_gas_component.push_back(&ethylene);
    ethylene.set_molar_mass(28.054);

    // Пропилен
    Gas_component propylene("Пропилен", "Propylene");
    array_gas_component.push_back(&propylene);
    propylene.set_molar_mass(42.081);

    // 1-Бутен
    Gas_component butene_1("1-Бутен", "1-Butene");
    array_gas_component.push_back(&butene_1);
    butene_1.set_molar_mass(56.108);

    // цис-2-Бутен
    Gas_component cis_2_butene("цис-2-Бутен", "cis-2-Butene");
    array_gas_component.push_back(&cis_2_butene);
    cis_2_butene.set_molar_mass(56.108);

    // транс-2-Бутен
    Gas_component trans_2_butene("транс-2-Бутен", "trans-2-Butene");
    array_gas_component.push_back(&trans_2_butene);
    trans_2_butene.set_molar_mass(56.108);

    // 2-Метилпропен
    Gas_component methylpropene_2("2-Метилпропен", "2-Methylpropane");
    array_gas_component.push_back(&methylpropene_2);
    methylpropene_2.set_molar_mass(56.108);

    // 1-Пентен
    Gas_component penten_1("1-Пентен", "1-Penten");
    array_gas_component.push_back(&penten_1);
    penten_1.set_molar_mass(70.134);

    // Пропадиен
    Gas_component propadiene("Пропадиен", "Propadiene");
    array_gas_component.push_back(&propadiene);
    propadiene.set_molar_mass(40.065);

    // 1,2-Бутадиен
    Gas_component butadiene_1_2("1,2-Бутадиен", "1,2-Butadiene");
    array_gas_component.push_back(&butadiene_1_2);
    butadiene_1_2.set_molar_mass(54.092);

    // 1,3-Бутадиен
    Gas_component butadiene_1_3("1,3-Бутадиен", "1,3-Butadiene");
    array_gas_component.push_back(&butadiene_1_3);
    butadiene_1_3.set_molar_mass(54.092);

    // Ацетилен
    Gas_component acethylene("Ацетилен", "Acetylene");
    array_gas_component.push_back(&acethylene);
    acethylene.set_molar_mass(26.038);

    // Циклопентан
    Gas_component cyclopentane("Циклопентан", "Cyclopentane");
    array_gas_component.push_back(&cyclopentane);
    cyclopentane.set_molar_mass(70.134);

    // Метилциклопентан
    Gas_component methylcyclopentane("Метилциклопентан", "Methylcyclopentane");
    array_gas_component.push_back(&methylcyclopentane);
    methylcyclopentane.set_molar_mass(84.161);

    // Этилциклопентан
    Gas_component ethylcyclopentane("Этилциклопентан", "Ethylcyclopentane");
    array_gas_component.push_back(&ethylcyclopentane);
    ethylcyclopentane.set_molar_mass(98.188);

    // Циклогексан
    Gas_component cyclohexane("Циклогексан", "Cyclohexane");
    array_gas_component.push_back(&cyclohexane);
    cyclohexane.set_molar_mass(84.161);

    // Метилциклогексан
    Gas_component methylcyclohexane("Метилциклогексан", "Methylcyclohexane");
    array_gas_component.push_back(&methylcyclohexane);
    methylcyclohexane.set_molar_mass(98.188);

    // Этилциклогексан
    Gas_component ethylcyclohexane("Этилциклогексан", "Ethylcyclohexane");
    array_gas_component.push_back(&ethylcyclohexane);
    ethylcyclohexane.set_molar_mass(112.215);

    // Бензол
    Gas_component benzol("Бензол", "Benzol");
    array_gas_component.push_back(&benzol);
    benzol.set_molar_mass(78.114);

    // Толуол
    Gas_component toluol("Толуол", "Toluol");
    array_gas_component.push_back(&toluol);
    toluol.set_molar_mass(92.141);

    // Этилбензол
    Gas_component ethylbenzol("Этилбензол", "Ethylbenzol");
    array_gas_component.push_back(&ethylbenzol);
    ethylbenzol.set_molar_mass(106.167);

    // о-Ксилол
    Gas_component xylol_o("о-Ксилол", "o-Xylol");
    array_gas_component.push_back(&xylol_o);
    xylol_o.set_molar_mass(106.167);

    // Метанол
    Gas_component methanol("Метанол", "Methanol");
    array_gas_component.push_back(&methanol);
    methanol.set_molar_mass(32.042);

    // Метантиол
    Gas_component methanethiol("Метантиол", "Methanethiol");
    array_gas_component.push_back(&methanethiol);
    methanethiol.set_molar_mass(48.109);

    // Водород
    Gas_component hydrogen("Водород", "Hydrogen");
    array_gas_component.push_back(&hydrogen);
    hydrogen.set_molar_mass(2.0159);

    // Вода
    Gas_component water("Вода", "Water");
    array_gas_component.push_back(&water);
    water.set_molar_mass(18.0153);

    // Сульфид водорода
    Gas_component hydrogen_sulfide("Сульфид водорода", "Hydrogen sulfide");
    array_gas_component.push_back(&hydrogen_sulfide);
    hydrogen_sulfide.set_molar_mass(34.082);

    // Аммиак
    Gas_component ammonia("Аммиак", "Ammonia");
    array_gas_component.push_back(&ammonia);
    ammonia.set_molar_mass(17.0306);

    // Цианид водорода
    Gas_component hydrogen_cyanide("Цианид водорода", "Hydrogen cyanide");
    array_gas_component.push_back(&hydrogen_cyanide);
    hydrogen_cyanide.set_molar_mass(27.026);

    // Монооксид углерода
    Gas_component carbon_monoxide("Монооксид углерода", "Carbon monoxide");
    array_gas_component.push_back(&carbon_monoxide);
    carbon_monoxide.set_molar_mass(28.010);

    // Карбонилсульфид
    Gas_component carbonylsulfide("Карбонилсульфид", "Carbonylsulfide");
    array_gas_component.push_back(&carbonylsulfide);
    carbonylsulfide.set_molar_mass(60.076);

    // Дисульфид углерода
    Gas_component carbon_disulfide("Дисульфид углерода", "Carbon disulfide");
    array_gas_component.push_back(&carbon_disulfide);
    carbon_disulfide.set_molar_mass(76.143);

    // Гелий
    Gas_component helium("Гелий", "Helium");
    array_gas_component.push_back(&helium);
    helium.set_molar_mass(4.0026);

    // Неон
    Gas_component neon("Неон", "Neon");
    array_gas_component.push_back(&neon);
    neon.set_molar_mass(20.1797);

    // Аргон
    Gas_component argon("Аргон", "Argon");
    array_gas_component.push_back(&argon);
    argon.set_molar_mass(39.948);

    // Азот
    Gas_component nitrogen("Азот", "Nitrogen");
    array_gas_component.push_back(&nitrogen);
    nitrogen.set_molar_mass(28.0135);

    // Кислород
    Gas_component oxygen("Кислород", "Oxygen");
    array_gas_component.push_back(&oxygen);
    oxygen.set_molar_mass(31.9988);

    // Диоксид углерода
    Gas_component carbon_dioxide("Диоксид углерода", "Carbon dioxide");
    array_gas_component.push_back(&carbon_dioxide);
    carbon_dioxide.set_molar_mass(44.010);

    // Диоксид серы
    Gas_component sulfur_dioxide("Диоксид серы", "Sulfur dioxide");
    array_gas_component.push_back(&sulfur_dioxide);
    sulfur_dioxide.set_molar_mass(64.065);

    // Монооксид диазота
    Gas_component nitrogen_monoxide("Монооксид диазота", "Nitrogen monoxide");
    array_gas_component.push_back(&nitrogen_monoxide);
    nitrogen_monoxide.set_molar_mass(44.0129);

    // Криптон
    Gas_component krypton("Криптон", "Krypton");
    array_gas_component.push_back(&krypton);
    krypton.set_molar_mass(83.80);

    // Ксенон
    Gas_component xenon("Ксенон", "Xenon");
    array_gas_component.push_back(&xenon);
    xenon.set_molar_mass(131.29);

    // Воздух
    Gas_component air("Воздух", "Air");
    array_gas_component.push_back(&air);
    air.set_molar_mass(28.9626);




    return 0;
}

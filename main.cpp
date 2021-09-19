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
    ethan.set_20_z_factor(0.9920);
    ethan.set_20_sqrt_b(0.0894);

    // Пропан
    Gas_component propane("Пропан", "Propane");
    array_gas_component.push_back(&propane);
    propane.set_molar_mass(44.097);
    propane.set_20_z_factor(0.9834);
    propane.set_20_sqrt_b(0.1288);

    // н-Бутан
    Gas_component n_butane("н-Бутан", "n-Butane");
    array_gas_component.push_back(&n_butane);
    n_butane.set_molar_mass(58.123);
    n_butane.set_20_z_factor(0.9682);
    n_butane.set_20_sqrt_b(0.1783);

    // 2-Метилпропан
    Gas_component methylpropane_2("2-Метилпропан", "2-Methylpropane");
    array_gas_component.push_back(&methylpropane_2);
    methylpropane_2.set_molar_mass(58.123);
    methylpropane_2.set_20_z_factor(0.971);
    methylpropane_2.set_20_sqrt_b(0.1703);

    // н-Пентан
    Gas_component n_pentane("н-Пентан", "n-Pentane");
    array_gas_component.push_back(&n_pentane);
    n_pentane.set_molar_mass(72.150);
    n_pentane.set_20_z_factor(0.945);
    n_pentane.set_20_sqrt_b(0.2345);

    // 2-Метилбутан
    Gas_component methylbutane_2("2-Метилбутан", "2-Methylbutane");
    array_gas_component.push_back(&methylbutane_2);
    methylbutane_2.set_molar_mass(72.150);
    methylbutane_2.set_20_z_factor(0.953);
    methylbutane_2.set_20_sqrt_b(0.2168);

    // 2,2-Диметилпропан
    Gas_component dimethylpropane_2_2("2,2-Диметилпропан", "2,2-Dimethylpropane");
    array_gas_component.push_back(&dimethylpropane_2_2);
    dimethylpropane_2_2.set_molar_mass(72.150);
    dimethylpropane_2_2.set_20_z_factor(0.959);
    dimethylpropane_2_2.set_20_sqrt_b(0.2025);

    // н-Гексан
    Gas_component n_hexane("н-Гексан", "n-Hexane");
    array_gas_component.push_back(&n_hexane);
    n_hexane.set_molar_mass(86.177);
    n_hexane.set_20_z_factor(0.919);
    n_hexane.set_20_sqrt_b(0.2846);

    // 2-Метилпентан
    Gas_component methylpentane_2("2-Метилпентан", "2-Methylpentane");
    array_gas_component.push_back(&methylpentane_2);
    methylpentane_2.set_molar_mass(86.177);
    methylpentane_2.set_20_z_factor(0.926);
    methylpentane_2.set_20_sqrt_b(0.2720);

    // 3-Метилпентан
    Gas_component methylpentane_3("3-Метилпентан", "3-Methylpentane");
    array_gas_component.push_back(&methylpentane_3);
    methylpentane_3.set_molar_mass(86.177);
    methylpentane_3.set_20_z_factor(0.928);
    methylpentane_3.set_20_sqrt_b(0.2683);

    // 2,2-Диметилбутан
    Gas_component dimethylbutane_2_2("2,2-Диметилбутан", "2,2-Dimethylbutane");
    array_gas_component.push_back(&dimethylbutane_2_2);
    dimethylbutane_2_2.set_molar_mass(86.177);
    dimethylbutane_2_2.set_20_z_factor(0.935);
    dimethylbutane_2_2.set_20_sqrt_b(0.2550);

    // 2,3-Диметилбутан
    Gas_component dimethylbutane_2_3("2,3-Диметилбутан", "2,3-Dimethylbutane");
    array_gas_component.push_back(&dimethylbutane_2_3);
    dimethylbutane_2_3.set_molar_mass(86.177);
    dimethylbutane_2_3.set_20_z_factor(0.934);
    dimethylbutane_2_3.set_20_sqrt_b(0.2569);

    // н-Гептан
    Gas_component n_heptane("н-Гептан", "n-Heptane");
    array_gas_component.push_back(&n_heptane);
    n_heptane.set_molar_mass(100.204);
    n_heptane.set_20_z_factor(0.876);
    n_heptane.set_20_sqrt_b(0.3521);

    // н-Октан
    Gas_component n_octane("н-Октан", "n-Octane");
    array_gas_component.push_back(&n_octane);
    n_octane.set_molar_mass(114.231);
    n_octane.set_20_z_factor(0.817);
    n_octane.set_20_sqrt_b(0.4278);

    // н-Нонан
    Gas_component n_nonan("н-Нонан", "n-Nonan");
    array_gas_component.push_back(&n_nonan);
    n_nonan.set_molar_mass(128.258);
    n_nonan.set_20_z_factor(0.735);
    n_nonan.set_20_sqrt_b(0.5148);

    // н-Декан
    Gas_component n_dean("н-Декан", "n-Dean");
    array_gas_component.push_back(&n_dean);
    n_dean.set_molar_mass(142.285);
    n_dean.set_20_z_factor(0.623);
    n_dean.set_20_sqrt_b(0.6140);

    // Этилен
    Gas_component ethylene("Этилен", "Ethylene");
    array_gas_component.push_back(&ethylene);
    ethylene.set_molar_mass(28.054);
    ethylene.set_20_z_factor(0.9940);
    ethylene.set_20_sqrt_b(0.0775);

    // Пропилен
    Gas_component propylene("Пропилен", "Propylene");
    array_gas_component.push_back(&propylene);
    propylene.set_molar_mass(42.081);
    propylene.set_20_z_factor(0.985);
    propylene.set_20_sqrt_b(0.1225);

    // 1-Бутен
    Gas_component butene_1("1-Бутен", "1-Butene");
    array_gas_component.push_back(&butene_1);
    butene_1.set_molar_mass(56.108);
    butene_1.set_20_z_factor(0.972);
    butene_1.set_20_sqrt_b(0.1673);

    // цис-2-Бутен
    Gas_component cis_2_butene("цис-2-Бутен", "cis-2-Butene");
    array_gas_component.push_back(&cis_2_butene);
    cis_2_butene.set_molar_mass(56.108);
    cis_2_butene.set_20_z_factor(0.969);
    cis_2_butene.set_20_sqrt_b(0.1761);

    // транс-2-Бутен
    Gas_component trans_2_butene("транс-2-Бутен", "trans-2-Butene");
    array_gas_component.push_back(&trans_2_butene);
    trans_2_butene.set_molar_mass(56.108);
    trans_2_butene.set_20_z_factor(0.969);
    trans_2_butene.set_20_sqrt_b(0.1761);

    // 2-Метилпропен
    Gas_component methylpropene_2("2-Метилпропен", "2-Methylpropane");
    array_gas_component.push_back(&methylpropene_2);
    methylpropene_2.set_molar_mass(56.108);
    methylpropene_2.set_20_z_factor(0.972);
    methylpropene_2.set_20_sqrt_b(0.1673);

    // 1-Пентен
    Gas_component penten_1("1-Пентен", "1-Penten");
    array_gas_component.push_back(&penten_1);
    penten_1.set_molar_mass(70.134);
    penten_1.set_20_z_factor(0.952);
    penten_1.set_20_sqrt_b(0.2191);

    // Пропадиен
    Gas_component propadiene("Пропадиен", "Propadiene");
    array_gas_component.push_back(&propadiene);
    propadiene.set_molar_mass(40.065);
    propadiene.set_20_z_factor(0.984);
    propadiene.set_20_sqrt_b(0.1265);

    // 1,2-Бутадиен
    Gas_component butadiene_1_2("1,2-Бутадиен", "1,2-Butadiene");
    array_gas_component.push_back(&butadiene_1_2);
    butadiene_1_2.set_molar_mass(54.092);
    butadiene_1_2.set_20_z_factor(0.965);
    butadiene_1_2.set_20_sqrt_b(0.1871);

    // 1,3-Бутадиен
    Gas_component butadiene_1_3("1,3-Бутадиен", "1,3-Butadiene");
    array_gas_component.push_back(&butadiene_1_3);
    butadiene_1_3.set_molar_mass(54.092);
    butadiene_1_3.set_20_z_factor(0.973);
    butadiene_1_3.set_20_sqrt_b(0.1643);

    // Ацетилен
    Gas_component acethylene("Ацетилен", "Acetylene");
    array_gas_component.push_back(&acethylene);
    acethylene.set_molar_mass(26.038);
    acethylene.set_20_z_factor(0.993);
    acethylene.set_20_sqrt_b(0.0837);

    // Циклопентан
    Gas_component cyclopentane("Циклопентан", "Cyclopentane");
    array_gas_component.push_back(&cyclopentane);
    cyclopentane.set_molar_mass(70.134);
    cyclopentane.set_20_z_factor(0.950);
    cyclopentane.set_20_sqrt_b(0.2236);

    // Метилциклопентан
    Gas_component methylcyclopentane("Метилциклопентан", "Methylcyclopentane");
    array_gas_component.push_back(&methylcyclopentane);
    methylcyclopentane.set_molar_mass(84.161);
    methylcyclopentane.set_20_z_factor(0.927);
    methylcyclopentane.set_20_sqrt_b(0.2702);

    // Этилциклопентан
    Gas_component ethylcyclopentane("Этилциклопентан", "Ethylcyclopentane");
    array_gas_component.push_back(&ethylcyclopentane);
    ethylcyclopentane.set_molar_mass(98.188);
    ethylcyclopentane.set_20_z_factor(0.885);
    ethylcyclopentane.set_20_sqrt_b(0.3391);

    // Циклогексан
    Gas_component cyclohexane("Циклогексан", "Cyclohexane");
    array_gas_component.push_back(&cyclohexane);
    cyclohexane.set_molar_mass(84.161);
    cyclohexane.set_20_z_factor(0.924);
    cyclohexane.set_20_sqrt_b(0.2757);

    // Метилциклогексан
    Gas_component methylcyclohexane("Метилциклогексан", "Methylcyclohexane");
    array_gas_component.push_back(&methylcyclohexane);
    methylcyclohexane.set_molar_mass(98.188);
    methylcyclohexane.set_20_z_factor(0.894);
    methylcyclohexane.set_20_sqrt_b(0.3256);

    // Этилциклогексан
    Gas_component ethylcyclohexane("Этилциклогексан", "Ethylcyclohexane");
    array_gas_component.push_back(&ethylcyclohexane);
    ethylcyclohexane.set_molar_mass(112.215);
    ethylcyclohexane.set_20_z_factor(0.838);
    ethylcyclohexane.set_20_sqrt_b(0.4025);

    // Бензол
    Gas_component benzol("Бензол", "Benzol");
    array_gas_component.push_back(&benzol);
    benzol.set_molar_mass(78.114);
    benzol.set_20_z_factor(0.936);
    benzol.set_20_sqrt_b(0.2530);

    // Толуол
    Gas_component toluol("Толуол", "Toluol");
    array_gas_component.push_back(&toluol);
    toluol.set_molar_mass(92.141);
    toluol.set_20_z_factor(0.892);
    toluol.set_20_sqrt_b(0.3286);

    // Этилбензол
    Gas_component ethylbenzol("Этилбензол", "Ethylbenzol");
    array_gas_component.push_back(&ethylbenzol);
    ethylbenzol.set_molar_mass(106.167);
    ethylbenzol.set_20_z_factor(0.837);
    ethylbenzol.set_20_sqrt_b(0.4037);

    // о-Ксилол
    Gas_component xylol_o("о-Ксилол", "o-Xylol");
    array_gas_component.push_back(&xylol_o);
    xylol_o.set_molar_mass(106.167);
    xylol_o.set_20_z_factor(0.821);
    xylol_o.set_20_sqrt_b(0.4231);

    // Метанол
    Gas_component methanol("Метанол", "Methanol");
    array_gas_component.push_back(&methanol);
    methanol.set_molar_mass(32.042);
    methanol.set_20_z_factor(0.892);
    methanol.set_20_sqrt_b(0.3286);

    // Метантиол
    Gas_component methanethiol("Метантиол", "Methanethiol");
    array_gas_component.push_back(&methanethiol);
    methanethiol.set_molar_mass(48.109);
    methanethiol.set_20_z_factor(0.978);
    methanethiol.set_20_sqrt_b(0.1483);

    // Водород
    Gas_component hydrogen("Водород", "Hydrogen");
    array_gas_component.push_back(&hydrogen);
    hydrogen.set_molar_mass(2.0159);
    hydrogen.set_20_z_factor(1.0006);
    hydrogen.set_20_sqrt_b(-0.0051);

    // Вода
    Gas_component water("Вода", "Water");
    array_gas_component.push_back(&water);
    water.set_molar_mass(18.0153);
    water.set_20_z_factor(0.952);
    water.set_20_sqrt_b(0.2191);

    // Сульфид водорода
    Gas_component hydrogen_sulfide("Сульфид водорода", "Hydrogen sulfide");
    array_gas_component.push_back(&hydrogen_sulfide);
    hydrogen_sulfide.set_molar_mass(34.082);
    hydrogen_sulfide.set_20_z_factor(0.990);
    hydrogen_sulfide.set_20_sqrt_b(0.1000);

    // Аммиак
    Gas_component ammonia("Аммиак", "Ammonia");
    array_gas_component.push_back(&ammonia);
    ammonia.set_molar_mass(17.0306);
    ammonia.set_20_z_factor(0.989);
    ammonia.set_20_sqrt_b(0.1049);

    // Цианид водорода
    Gas_component hydrogen_cyanide("Цианид водорода", "Hydrogen cyanide");
    array_gas_component.push_back(&hydrogen_cyanide);
    hydrogen_cyanide.set_molar_mass(27.026);
    hydrogen_cyanide.set_20_z_factor(0.920);
    hydrogen_cyanide.set_20_sqrt_b(0.2828);

    // Монооксид углерода
    Gas_component carbon_monoxide("Монооксид углерода", "Carbon monoxide");
    array_gas_component.push_back(&carbon_monoxide);
    carbon_monoxide.set_molar_mass(28.010);
    carbon_monoxide.set_20_z_factor(0.9996);
    carbon_monoxide.set_20_sqrt_b(0.0200);

    // Карбонил сульфид
    Gas_component carbonyl_sulfide("Карбонил сульфид", "Carbonyl sulfide");
    array_gas_component.push_back(&carbonyl_sulfide);
    carbonyl_sulfide.set_molar_mass(60.076);
    carbonyl_sulfide.set_20_z_factor(0.988);
    carbonyl_sulfide.set_20_sqrt_b(0.1095);

    // Дисульфид углерода
    Gas_component carbon_disulfide("Дисульфид углерода", "Carbon disulfide");
    array_gas_component.push_back(&carbon_disulfide);
    carbon_disulfide.set_molar_mass(76.143);
    carbon_disulfide.set_20_z_factor(0.965);
    carbon_disulfide.set_20_sqrt_b(0.1871);

    // Гелий
    Gas_component helium("Гелий", "Helium");
    array_gas_component.push_back(&helium);
    helium.set_molar_mass(4.0026);
    helium.set_20_z_factor(1.0005);
    helium.set_20_sqrt_b(0.0000);

    // Неон
    Gas_component neon("Неон", "Neon");
    array_gas_component.push_back(&neon);
    neon.set_molar_mass(20.1797);
    neon.set_20_z_factor(1.0005);
    neon.set_20_sqrt_b(0.0000);

    // Аргон
    Gas_component argon("Аргон", "Argon");
    array_gas_component.push_back(&argon);
    argon.set_molar_mass(39.948);
    argon.set_20_z_factor(0.9993);
    argon.set_20_sqrt_b(0.0265);

    // Азот
    Gas_component nitrogen("Азот", "Nitrogen");
    array_gas_component.push_back(&nitrogen);
    nitrogen.set_molar_mass(28.0135);
    nitrogen.set_20_z_factor(0.9997);
    nitrogen.set_20_sqrt_b(0.0173);

    // Кислород
    Gas_component oxygen("Кислород", "Oxygen");
    array_gas_component.push_back(&oxygen);
    oxygen.set_molar_mass(31.9988);
    oxygen.set_20_z_factor(0.9993);
    oxygen.set_20_sqrt_b(0.0265);

    // Диоксид углерода
    Gas_component carbon_dioxide("Диоксид углерода", "Carbon dioxide");
    array_gas_component.push_back(&carbon_dioxide);
    carbon_dioxide.set_molar_mass(44.010);
    carbon_dioxide.set_20_z_factor(0.9947);
    carbon_dioxide.set_20_sqrt_b(0.0728);

    // Диоксид серы
    Gas_component sulfur_dioxide("Диоксид серы", "Sulfur dioxide");
    array_gas_component.push_back(&sulfur_dioxide);
    sulfur_dioxide.set_molar_mass(64.065);
    sulfur_dioxide.set_20_z_factor(0.980);
    sulfur_dioxide.set_20_sqrt_b(0.1414);

    // Монооксид диазота
    Gas_component nitrogen_monoxide("Монооксид диазота", "Nitrogen monoxide");
    array_gas_component.push_back(&nitrogen_monoxide);
    nitrogen_monoxide.set_molar_mass(44.0129);
    nitrogen_monoxide.set_20_z_factor(0.9997); // по азоту
    nitrogen_monoxide.set_20_sqrt_b(0.0173); // по азоту

    // Криптон
    Gas_component krypton("Криптон", "Krypton");
    array_gas_component.push_back(&krypton);
    krypton.set_molar_mass(83.80);
    krypton.set_20_z_factor(0.9997); // по азоту
    krypton.set_20_sqrt_b(0.0173); // по азоту

    // Ксенон
    Gas_component xenon("Ксенон", "Xenon");
    array_gas_component.push_back(&xenon);
    xenon.set_molar_mass(131.29);
    xenon.set_20_z_factor(0.9950); // его
    xenon.set_20_sqrt_b(0.0173); // по азоту

    // Воздух
    Gas_component air("Воздух", "Air");
    array_gas_component.push_back(&air);
    air.set_molar_mass(28.9626);
    air.set_20_z_factor(0.99963);
    air.set_20_sqrt_b(0.0);




    return 0;
}

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
    ethan.set_molar_heat_burning_20_higher(1561.41);
    ethan.set_molar_heat_burning_20_lower(1428.74);

    // Пропан
    Gas_component propane("Пропан", "Propane");
    array_gas_component.push_back(&propane);
    propane.set_molar_mass(44.097);
    propane.set_20_z_factor(0.9834);
    propane.set_20_sqrt_b(0.1288);
    propane.set_molar_heat_burning_20_higher(2220.13);
    propane.set_molar_heat_burning_20_lower(2043.23);

    // н-Бутан
    Gas_component n_butane("н-Бутан", "n-Butane");
    array_gas_component.push_back(&n_butane);
    n_butane.set_molar_mass(58.123);
    n_butane.set_20_z_factor(0.9682);
    n_butane.set_20_sqrt_b(0.1783);
    n_butane.set_molar_heat_burning_20_higher(2878.57);
    n_butane.set_molar_heat_burning_20_lower(2657.45);

    // 2-Метилпропан
    Gas_component methylpropane_2("2-Метилпропан", "2-Methylpropane");
    array_gas_component.push_back(&methylpropane_2);
    methylpropane_2.set_molar_mass(58.123);
    methylpropane_2.set_20_z_factor(0.971);
    methylpropane_2.set_20_sqrt_b(0.1703);
    methylpropane_2.set_molar_heat_burning_20_higher(2869.38);
    methylpropane_2.set_molar_heat_burning_20_lower(2648.26);

    // н-Пентан
    Gas_component n_pentane("н-Пентан", "n-Pentane");
    array_gas_component.push_back(&n_pentane);
    n_pentane.set_molar_mass(72.150);
    n_pentane.set_20_z_factor(0.945);
    n_pentane.set_20_sqrt_b(0.2345);
    n_pentane.set_molar_heat_burning_20_higher(3537.17);
    n_pentane.set_molar_heat_burning_20_lower(3271.83);

    // 2-Метилбутан
    Gas_component methylbutane_2("2-Метилбутан", "2-Methylbutane");
    array_gas_component.push_back(&methylbutane_2);
    methylbutane_2.set_molar_mass(72.150);
    methylbutane_2.set_20_z_factor(0.953);
    methylbutane_2.set_20_sqrt_b(0.2168);
    methylbutane_2.set_molar_heat_burning_20_higher(3530.24);
    methylbutane_2.set_molar_heat_burning_20_lower(3264.89);

    // 2,2-Диметилпропан
    Gas_component dimethylpropane_2_2("2,2-Диметилпропан", "2,2-Dimethylpropane");
    array_gas_component.push_back(&dimethylpropane_2_2);
    dimethylpropane_2_2.set_molar_mass(72.150);
    dimethylpropane_2_2.set_20_z_factor(0.959);
    dimethylpropane_2_2.set_20_sqrt_b(0.2025);
    dimethylpropane_2_2.set_molar_heat_burning_20_higher(3516.01);
    dimethylpropane_2_2.set_molar_heat_burning_20_lower(3250.67);

    // н-Гексан
    Gas_component n_hexane("н-Гексан", "n-Hexane");
    array_gas_component.push_back(&n_hexane);
    n_hexane.set_molar_mass(86.177);
    n_hexane.set_20_z_factor(0.919);
    n_hexane.set_20_sqrt_b(0.2846);
    n_hexane.set_molar_heat_burning_20_higher(4196.58);
    n_hexane.set_molar_heat_burning_20_lower(3887.01);

    // 2-Метилпентан
    Gas_component methylpentane_2("2-Метилпентан", "2-Methylpentane");
    array_gas_component.push_back(&methylpentane_2);
    methylpentane_2.set_molar_mass(86.177);
    methylpentane_2.set_20_z_factor(0.926);
    methylpentane_2.set_20_sqrt_b(0.2720);
    methylpentane_2.set_molar_heat_burning_20_higher(4188.95);
    methylpentane_2.set_molar_heat_burning_20_lower(3879.38);

    // 3-Метилпентан
    Gas_component methylpentane_3("3-Метилпентан", "3-Methylpentane");
    array_gas_component.push_back(&methylpentane_3);
    methylpentane_3.set_molar_mass(86.177);
    methylpentane_3.set_20_z_factor(0.928);
    methylpentane_3.set_20_sqrt_b(0.2683);
    methylpentane_3.set_molar_heat_burning_20_higher(4191.54);
    methylpentane_3.set_molar_heat_burning_20_lower(3881.97);

    // 2,2-Диметилбутан
    Gas_component dimethylbutane_2_2("2,2-Диметилбутан", "2,2-Dimethylbutane");
    array_gas_component.push_back(&dimethylbutane_2_2);
    dimethylbutane_2_2.set_molar_mass(86.177);
    dimethylbutane_2_2.set_20_z_factor(0.935);
    dimethylbutane_2_2.set_20_sqrt_b(0.2550);
    dimethylbutane_2_2.set_molar_heat_burning_20_higher(4179.15);
    dimethylbutane_2_2.set_molar_heat_burning_20_lower(3869.59);

    // 2,3-Диметилбутан
    Gas_component dimethylbutane_2_3("2,3-Диметилбутан", "2,3-Dimethylbutane");
    array_gas_component.push_back(&dimethylbutane_2_3);
    dimethylbutane_2_3.set_molar_mass(86.177);
    dimethylbutane_2_3.set_20_z_factor(0.934);
    dimethylbutane_2_3.set_20_sqrt_b(0.2569);
    dimethylbutane_2_3.set_molar_heat_burning_20_higher(4186.93);
    dimethylbutane_2_3.set_molar_heat_burning_20_lower(3877.36);

    // н-Гептан
    Gas_component n_heptane("н-Гептан", "n-Heptane");
    array_gas_component.push_back(&n_heptane);
    n_heptane.set_molar_mass(100.204);
    n_heptane.set_20_z_factor(0.876);
    n_heptane.set_20_sqrt_b(0.3521);
    n_heptane.set_molar_heat_burning_20_higher(4855.29);
    n_heptane.set_molar_heat_burning_20_lower(4501.49);

    // н-Октан
    Gas_component n_octane("н-Октан", "n-Octane");
    array_gas_component.push_back(&n_octane);
    n_octane.set_molar_mass(114.231);
    n_octane.set_20_z_factor(0.817);
    n_octane.set_20_sqrt_b(0.4278);
    n_octane.set_molar_heat_burning_20_higher(5513.88);
    n_octane.set_molar_heat_burning_20_lower(5115.87);

    // н-Нонан
    Gas_component n_nonan("н-Нонан", "n-Nonan");
    array_gas_component.push_back(&n_nonan);
    n_nonan.set_molar_mass(128.258);
    n_nonan.set_20_z_factor(0.735);
    n_nonan.set_20_sqrt_b(0.5148);
    n_nonan.set_molar_heat_burning_20_higher(6173.46);
    n_nonan.set_molar_heat_burning_20_lower(5731.22);

    // н-Декан
    Gas_component n_dean("н-Декан", "n-Dean");
    array_gas_component.push_back(&n_dean);
    n_dean.set_molar_mass(142.285);
    n_dean.set_20_z_factor(0.623);
    n_dean.set_20_sqrt_b(0.6140);
    n_dean.set_molar_heat_burning_20_higher(6832.31);
    n_dean.set_molar_heat_burning_20_lower(6345.85);

    // Этилен
    Gas_component ethylene("Этилен", "Ethylene");
    array_gas_component.push_back(&ethylene);
    ethylene.set_molar_mass(28.054);
    ethylene.set_20_z_factor(0.9940);
    ethylene.set_20_sqrt_b(0.0775);
    ethylene.set_molar_heat_burning_20_higher(1411.65);
    ethylene.set_molar_heat_burning_20_lower(1323.20);

    // Пропилен
    Gas_component propylene("Пропилен", "Propylene");
    array_gas_component.push_back(&propylene);
    propylene.set_molar_mass(42.081);
    propylene.set_20_z_factor(0.985);
    propylene.set_20_sqrt_b(0.1225);
    propylene.set_molar_heat_burning_20_higher(2058.72);
    propylene.set_molar_heat_burning_20_lower(1926.05);

    // 1-Бутен
    Gas_component butene_1("1-Бутен", "1-Butene");
    array_gas_component.push_back(&butene_1);
    butene_1.set_molar_mass(56.108);
    butene_1.set_20_z_factor(0.972);
    butene_1.set_20_sqrt_b(0.1673);
    butene_1.set_molar_heat_burning_20_higher(2717.75);
    butene_1.set_molar_heat_burning_20_lower(2540.86);

    // цис-2-Бутен
    Gas_component cis_2_butene("цис-2-Бутен", "cis-2-Butene");
    array_gas_component.push_back(&cis_2_butene);
    cis_2_butene.set_molar_mass(56.108);
    cis_2_butene.set_20_z_factor(0.969);
    cis_2_butene.set_20_sqrt_b(0.1761);
    cis_2_butene.set_molar_heat_burning_20_higher(2711.0);
    cis_2_butene.set_molar_heat_burning_20_lower(2534.1);

    // транс-2-Бутен
    Gas_component trans_2_buten("транс-2-Бутен", "trans-2-Buten");
    array_gas_component.push_back(&trans_2_buten);
    trans_2_buten.set_molar_mass(56.108);
    trans_2_buten.set_20_z_factor(0.969);
    trans_2_buten.set_20_sqrt_b(0.1761);
    trans_2_buten.set_molar_heat_burning_20_higher(2707.4);
    trans_2_buten.set_molar_heat_burning_20_lower(2530.5);

    // 2-Метилпропен
    Gas_component methylpropene_2("2-Метилпропен", "2-Methylpropane");
    array_gas_component.push_back(&methylpropene_2);
    methylpropene_2.set_molar_mass(56.108);
    methylpropene_2.set_20_z_factor(0.972);
    methylpropene_2.set_20_sqrt_b(0.1673);
    methylpropene_2.set_molar_heat_burning_20_higher(2701.1);
    methylpropene_2.set_molar_heat_burning_20_lower(2524.2);

    // 1-Пентен
    Gas_component penten_1("1-Пентен", "1-Penten");
    array_gas_component.push_back(&penten_1);
    penten_1.set_molar_mass(70.134);
    penten_1.set_20_z_factor(0.952);
    penten_1.set_20_sqrt_b(0.2191);
    penten_1.set_molar_heat_burning_20_higher(3376.57);
    penten_1.set_molar_heat_burning_20_lower(3155.45);

    // Пропадиен
    Gas_component propadiene("Пропадиен", "Propadiene");
    array_gas_component.push_back(&propadiene);
    propadiene.set_molar_mass(40.065);
    propadiene.set_20_z_factor(0.984);
    propadiene.set_20_sqrt_b(0.1265);
    propadiene.set_molar_heat_burning_20_higher(1943.53);
    propadiene.set_molar_heat_burning_20_lower(1855.08);

    // 1,2-Бутадиен
    Gas_component butadiene_1_2("1,2-Бутадиен", "1,2-Butadiene");
    array_gas_component.push_back(&butadiene_1_2);
    butadiene_1_2.set_molar_mass(54.092);
    butadiene_1_2.set_20_z_factor(0.965);
    butadiene_1_2.set_20_sqrt_b(0.1871);
    butadiene_1_2.set_molar_heat_burning_20_higher(2594.45);
    butadiene_1_2.set_molar_heat_burning_20_lower(2461.78);

    // 1,3-Бутадиен
    Gas_component butadiene_1_3("1,3-Бутадиен", "1,3-Butadiene");
    array_gas_component.push_back(&butadiene_1_3);
    butadiene_1_3.set_molar_mass(54.092);
    butadiene_1_3.set_20_z_factor(0.973);
    butadiene_1_3.set_20_sqrt_b(0.1643);
    butadiene_1_3.set_molar_heat_burning_20_higher(2541.43);
    butadiene_1_3.set_molar_heat_burning_20_lower(2408.76);

    // Ацетилен
    Gas_component acethylene("Ацетилен", "Acetylene");
    array_gas_component.push_back(&acethylene);
    acethylene.set_molar_mass(26.038);
    acethylene.set_20_z_factor(0.993);
    acethylene.set_20_sqrt_b(0.0837);
    acethylene.set_molar_heat_burning_20_higher(1301.21);
    acethylene.set_molar_heat_burning_20_lower(1256.98);

    // Циклопентан
    Gas_component cyclopentane("Циклопентан", "Cyclopentane");
    array_gas_component.push_back(&cyclopentane);
    cyclopentane.set_molar_mass(70.134);
    cyclopentane.set_20_z_factor(0.950);
    cyclopentane.set_20_sqrt_b(0.2236);
    cyclopentane.set_molar_heat_burning_20_higher(3320.88);
    cyclopentane.set_molar_heat_burning_20_lower(3099.76);

    // Метилциклопентан
    Gas_component methylcyclopentane("Метилциклопентан", "Methylcyclopentane");
    array_gas_component.push_back(&methylcyclopentane);
    methylcyclopentane.set_molar_mass(84.161);
    methylcyclopentane.set_20_z_factor(0.927);
    methylcyclopentane.set_20_sqrt_b(0.2702);
    methylcyclopentane.set_molar_heat_burning_20_higher(3970.93);
    methylcyclopentane.set_molar_heat_burning_20_lower(3705.59);

    // Этилциклопентан
    Gas_component ethylcyclopentan("Этилциклопентан", "Ethylcyclopentan");
    array_gas_component.push_back(&ethylcyclopentan);
    ethylcyclopentan.set_molar_mass(98.188);
    ethylcyclopentan.set_20_z_factor(0.885);
    ethylcyclopentan.set_20_sqrt_b(0.3391);
    ethylcyclopentan.set_molar_heat_burning_20_higher(4630.19);
    ethylcyclopentan.set_molar_heat_burning_20_lower(4320.63);

    // Циклогексан
    Gas_component cyclohexane("Циклогексан", "Cyclohexane");
    array_gas_component.push_back(&cyclohexane);
    cyclohexane.set_molar_mass(84.161);
    cyclohexane.set_20_z_factor(0.924);
    cyclohexane.set_20_sqrt_b(0.2757);
    cyclohexane.set_molar_heat_burning_20_higher(3954.47);
    cyclohexane.set_molar_heat_burning_20_lower(3689.13);

    // Метилциклогексан
    Gas_component methylcyclohexane("Метилциклогексан", "Methylcyclohexane");
    array_gas_component.push_back(&methylcyclohexane);
    methylcyclohexane.set_molar_mass(98.188);
    methylcyclohexane.set_20_z_factor(0.894);
    methylcyclohexane.set_20_sqrt_b(0.3256);
    methylcyclohexane.set_molar_heat_burning_20_higher(4602.35);
    methylcyclohexane.set_molar_heat_burning_20_lower(4292.76);

    // Этилциклогексан
    Gas_component ethylcyclohexane("Этилциклогексан", "Ethylcyclohexane");
    array_gas_component.push_back(&ethylcyclohexane);
    ethylcyclohexane.set_molar_mass(112.215);
    ethylcyclohexane.set_20_z_factor(0.838);
    ethylcyclohexane.set_20_sqrt_b(0.4025);
    ethylcyclohexane.set_molar_heat_burning_20_higher(5264.98);
    ethylcyclohexane.set_molar_heat_burning_20_lower(4911.19);

    // Бензол
    Gas_component benzol("Бензол", "Benzol");
    array_gas_component.push_back(&benzol);
    benzol.set_molar_mass(78.114);
    benzol.set_20_z_factor(0.936);
    benzol.set_20_sqrt_b(0.2530);
    benzol.set_molar_heat_burning_20_higher(3302.15);
    benzol.set_molar_heat_burning_20_lower(3169.48);

    // Толуол
    Gas_component toluol("Толуол", "Toluol");
    array_gas_component.push_back(&toluol);
    toluol.set_molar_mass(92.141);
    toluol.set_20_z_factor(0.892);
    toluol.set_20_sqrt_b(0.3286);
    toluol.set_molar_heat_burning_20_higher(3948.84);
    toluol.set_molar_heat_burning_20_lower(3771.95);

    // Этилбензол
    Gas_component ethylbenzol("Этилбензол", "Ethylbenzol");
    array_gas_component.push_back(&ethylbenzol);
    ethylbenzol.set_molar_mass(106.167);
    ethylbenzol.set_20_z_factor(0.837);
    ethylbenzol.set_20_sqrt_b(0.4037);
    ethylbenzol.set_molar_heat_burning_20_higher(4608.32);
    ethylbenzol.set_molar_heat_burning_20_lower(4387.20);

    // о-Ксилол
    Gas_component xylol_o("о-Ксилол", "o-Xylol");
    array_gas_component.push_back(&xylol_o);
    xylol_o.set_molar_mass(106.167);
    xylol_o.set_20_z_factor(0.821);
    xylol_o.set_20_sqrt_b(0.4231);
    xylol_o.set_molar_heat_burning_20_higher(4597.46);
    xylol_o.set_molar_heat_burning_20_lower(4376.34);

    // Метанол
    Gas_component methanol("Метанол", "Methanol");
    array_gas_component.push_back(&methanol);
    methanol.set_molar_mass(32.042);
    methanol.set_20_z_factor(0.892);
    methanol.set_20_sqrt_b(0.3286);
    methanol.set_molar_heat_burning_20_higher(764.59);
    methanol.set_molar_heat_burning_20_lower(676.14);

    // Метантиол
    Gas_component methanethiol("Метантиол", "Methanethiol");
    array_gas_component.push_back(&methanethiol);
    methanethiol.set_molar_mass(48.109);
    methanethiol.set_20_z_factor(0.978);
    methanethiol.set_20_sqrt_b(0.1483);
    methanethiol.set_molar_heat_burning_20_higher(1239.83);
    methanethiol.set_molar_heat_burning_20_lower(1151.39);

    // Водород
    Gas_component hydrogen("Водород", "Hydrogen");
    array_gas_component.push_back(&hydrogen);
    hydrogen.set_molar_mass(2.0159);
    hydrogen.set_20_z_factor(1.0006);
    hydrogen.set_20_sqrt_b(-0.0051);
    hydrogen.set_molar_heat_burning_20_higher(285.99);
    hydrogen.set_molar_heat_burning_20_lower(241.76);

    // Вода
    Gas_component water("Вода", "Water");
    array_gas_component.push_back(&water);
    water.set_molar_mass(18.0153);
    water.set_20_z_factor(0.952);
    water.set_20_sqrt_b(0.2191);
    water.set_molar_heat_burning_20_higher(44.224);
    water.set_molar_heat_burning_20_lower(0.0);

    // Сульфид водорода
    Gas_component hydrogen_sulfide("Сульфид водорода", "Hydrogen sulfide");
    array_gas_component.push_back(&hydrogen_sulfide);
    hydrogen_sulfide.set_molar_mass(34.082);
    hydrogen_sulfide.set_20_z_factor(0.990);
    hydrogen_sulfide.set_20_sqrt_b(0.1000);
    hydrogen_sulfide.set_molar_heat_burning_20_higher(562.19);
    hydrogen_sulfide.set_molar_heat_burning_20_lower(517.97);

    // Аммиак
    Gas_component ammonia("Аммиак", "Ammonia");
    array_gas_component.push_back(&ammonia);
    ammonia.set_molar_mass(17.0306);
    ammonia.set_20_z_factor(0.989);
    ammonia.set_20_sqrt_b(0.1049);
    ammonia.set_molar_heat_burning_20_higher(383.16);
    ammonia.set_molar_heat_burning_20_lower(316.82);

    // Цианид водорода
    Gas_component hydrogen_cyanide("Цианид водорода", "Hydrogen cyanide");
    array_gas_component.push_back(&hydrogen_cyanide);
    hydrogen_cyanide.set_molar_mass(27.026);
    hydrogen_cyanide.set_20_z_factor(0.920);
    hydrogen_cyanide.set_20_sqrt_b(0.2828);
    hydrogen_cyanide.set_molar_heat_burning_20_higher(671.6);
    hydrogen_cyanide.set_molar_heat_burning_20_lower(649.5);

    // Монооксид углерода
    Gas_component carbon_monoxide("Монооксид углерода", "Carbon monoxide");
    array_gas_component.push_back(&carbon_monoxide);
    carbon_monoxide.set_molar_mass(28.010);
    carbon_monoxide.set_20_z_factor(0.9996);
    carbon_monoxide.set_20_sqrt_b(0.0200);
    carbon_monoxide.set_molar_heat_burning_20_higher(282.95);
    carbon_monoxide.set_molar_heat_burning_20_lower(282.95);

    // Карбонил сульфид
    Gas_component carbonyl_sulfide("Карбонил сульфид", "Carbonyl sulfide");
    array_gas_component.push_back(&carbonyl_sulfide);
    carbonyl_sulfide.set_molar_mass(60.076);
    carbonyl_sulfide.set_20_z_factor(0.988);
    carbonyl_sulfide.set_20_sqrt_b(0.1095);
    carbonyl_sulfide.set_molar_heat_burning_20_higher(548.19);
    carbonyl_sulfide.set_molar_heat_burning_20_lower(548.19);

    // Дисульфид углерода
    Gas_component carbon_disulfide("Дисульфид углерода", "Carbon disulfide");
    array_gas_component.push_back(&carbon_disulfide);
    carbon_disulfide.set_molar_mass(76.143);
    carbon_disulfide.set_20_z_factor(0.965);
    carbon_disulfide.set_20_sqrt_b(0.1871);
    carbon_disulfide.set_molar_heat_burning_20_higher(1104.41);
    carbon_disulfide.set_molar_heat_burning_20_lower(1104.41);

    // Гелий
    Gas_component helium("Гелий", "Helium");
    array_gas_component.push_back(&helium);
    helium.set_molar_mass(4.0026);
    helium.set_20_z_factor(1.0005);
    helium.set_20_sqrt_b(0.0000);
    helium.set_molar_heat_burning_20_higher(0.0);
    helium.set_molar_heat_burning_20_lower(0.0);

    // Неон
    Gas_component neon("Неон", "Neon");
    array_gas_component.push_back(&neon);
    neon.set_molar_mass(20.1797);
    neon.set_20_z_factor(1.0005);
    neon.set_20_sqrt_b(0.0000);
    neon.set_molar_heat_burning_20_higher(0.0);
    neon.set_molar_heat_burning_20_lower(0.0);

    // Аргон
    Gas_component argon("Аргон", "Argon");
    array_gas_component.push_back(&argon);
    argon.set_molar_mass(39.948);
    argon.set_20_z_factor(0.9993);
    argon.set_20_sqrt_b(0.0265);
    argon.set_molar_heat_burning_20_higher(0.0);
    argon.set_molar_heat_burning_20_lower(0.0);

    // Азот
    Gas_component nitrogen("Азот", "Nitrogen");
    array_gas_component.push_back(&nitrogen);
    nitrogen.set_molar_mass(28.0135);
    nitrogen.set_20_z_factor(0.9997);
    nitrogen.set_20_sqrt_b(0.0173);
    nitrogen.set_molar_heat_burning_20_higher(0.0);
    nitrogen.set_molar_heat_burning_20_lower(0.0);

    // Кислород
    Gas_component oxygen("Кислород", "Oxygen");
    array_gas_component.push_back(&oxygen);
    oxygen.set_molar_mass(31.9988);
    oxygen.set_20_z_factor(0.9993);
    oxygen.set_20_sqrt_b(0.0265);
    oxygen.set_molar_heat_burning_20_higher(0.0);
    oxygen.set_molar_heat_burning_20_lower(0.0);

    // Диоксид углерода
    Gas_component carbon_dioxide("Диоксид углерода", "Carbon dioxide");
    array_gas_component.push_back(&carbon_dioxide);
    carbon_dioxide.set_molar_mass(44.010);
    carbon_dioxide.set_20_z_factor(0.9947);
    carbon_dioxide.set_20_sqrt_b(0.0728);
    carbon_dioxide.set_molar_heat_burning_20_higher(0.0);
    carbon_dioxide.set_molar_heat_burning_20_lower(0.0);

    // Диоксид серы
    Gas_component sulfur_dioxide("Диоксид серы", "Sulfur dioxide");
    array_gas_component.push_back(&sulfur_dioxide);
    sulfur_dioxide.set_molar_mass(64.065);
    sulfur_dioxide.set_20_z_factor(0.980);
    sulfur_dioxide.set_20_sqrt_b(0.1414);
    sulfur_dioxide.set_molar_heat_burning_20_higher(0.0);
    sulfur_dioxide.set_molar_heat_burning_20_lower(0.0);

    // Монооксид диазота
    Gas_component nitrogen_monoxide("Монооксид диазота", "Nitrogen monoxide");
    array_gas_component.push_back(&nitrogen_monoxide);
    nitrogen_monoxide.set_molar_mass(44.0129);
    nitrogen_monoxide.set_20_z_factor(0.9997); // по азоту
    nitrogen_monoxide.set_20_sqrt_b(0.0173); // по азоту
    nitrogen_monoxide.set_molar_heat_burning_20_higher(0.0);
    nitrogen_monoxide.set_molar_heat_burning_20_lower(0.0);

    // Криптон
    Gas_component krypton("Криптон", "Krypton");
    array_gas_component.push_back(&krypton);
    krypton.set_molar_mass(83.80);
    krypton.set_20_z_factor(0.9997); // по азоту
    krypton.set_20_sqrt_b(0.0173); // по азоту
    krypton.set_molar_heat_burning_20_higher(0.0);
    krypton.set_molar_heat_burning_20_lower(0.0);

    // Ксенон
    Gas_component xenon("Ксенон", "Xenon");
    array_gas_component.push_back(&xenon);
    xenon.set_molar_mass(131.29);
    xenon.set_20_z_factor(0.9950); // его
    xenon.set_20_sqrt_b(0.0173); // по азоту
    xenon.set_molar_heat_burning_20_higher(0.0);
    xenon.set_molar_heat_burning_20_lower(0.0);

    // Воздух
    Gas_component air("Воздух", "Air");
    array_gas_component.push_back(&air);
    air.set_molar_mass(28.9626);
    air.set_20_z_factor(0.99963);
    air.set_20_sqrt_b(0.0);
    air.set_molar_heat_burning_20_higher(0.0);
    air.set_molar_heat_burning_20_lower(0.0);




    return 0;
}

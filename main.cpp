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
    ethan.set_mass_heat_burning_20_higher(51.93);
    ethan.set_mass_heat_burning_20_lower(47.51);
    ethan.set_volume_heat_burning_20_higher(64.91);
    ethan.set_volume_heat_burning_20_lower(59.39);
    ethan.set_critical_temperature(305.83);
    ethan.set_critical_pressure(4880.0);
    ethan.set_coefficient_acentricity(0.0908);

    // Пропан
    Gas_component propane("Пропан", "Propane");
    array_gas_component.push_back(&propane);
    propane.set_molar_mass(44.097);
    propane.set_20_z_factor(0.9834);
    propane.set_20_sqrt_b(0.1288);
    propane.set_molar_heat_burning_20_higher(2220.13);
    propane.set_molar_heat_burning_20_lower(2043.23);
    propane.set_mass_heat_burning_20_higher(50.35);
    propane.set_mass_heat_burning_20_lower(46.34);
    propane.set_volume_heat_burning_20_higher(92.29);
    propane.set_volume_heat_burning_20_lower(84.94);
    propane.set_critical_temperature(369.82);
    propane.set_critical_pressure(4250.0);
    propane.set_coefficient_acentricity(0.1454);

    // н-Бутан
    Gas_component n_butane("н-Бутан", "n-Butane");
    array_gas_component.push_back(&n_butane);
    n_butane.set_molar_mass(58.123);
    n_butane.set_20_z_factor(0.9682);
    n_butane.set_20_sqrt_b(0.1783);
    n_butane.set_molar_heat_burning_20_higher(2878.57);
    n_butane.set_molar_heat_burning_20_lower(2657.45);
    n_butane.set_mass_heat_burning_20_higher(49.53);
    n_butane.set_mass_heat_burning_20_lower(45.72);
    n_butane.set_volume_heat_burning_20_higher(119.66);
    n_butane.set_volume_heat_burning_20_lower(110.47);
    n_butane.set_critical_temperature(425.14);
    n_butane.set_critical_pressure(3784.0);
    n_butane.set_coefficient_acentricity(0.1928);

    // 2-Метилпропан
    Gas_component methylpropane_2("2-Метилпропан", "2-Methylpropane");
    array_gas_component.push_back(&methylpropane_2);
    methylpropane_2.set_molar_mass(58.123);
    methylpropane_2.set_20_z_factor(0.971);
    methylpropane_2.set_20_sqrt_b(0.1703);
    methylpropane_2.set_molar_heat_burning_20_higher(2869.38);
    methylpropane_2.set_molar_heat_burning_20_lower(2648.26);
    methylpropane_2.set_mass_heat_burning_20_higher(49.37);
    methylpropane_2.set_mass_heat_burning_20_lower(45.56);
    methylpropane_2.set_volume_heat_burning_20_higher(119.28);
    methylpropane_2.set_volume_heat_burning_20_lower(110.09);
    methylpropane_2.set_critical_temperature(408.13);
    methylpropane_2.set_critical_pressure(3648.0);
    methylpropane_2.set_coefficient_acentricity(0.1756);

    // н-Пентан
    Gas_component n_pentane("н-Пентан", "n-Pentane");
    array_gas_component.push_back(&n_pentane);
    n_pentane.set_molar_mass(72.150);
    n_pentane.set_20_z_factor(0.945);
    n_pentane.set_20_sqrt_b(0.2345);
    n_pentane.set_molar_heat_burning_20_higher(3537.17);
    n_pentane.set_molar_heat_burning_20_lower(3271.83);
    n_pentane.set_mass_heat_burning_20_higher(49.03);
    n_pentane.set_mass_heat_burning_20_lower(45.35);
    n_pentane.set_volume_heat_burning_20_higher(147.04);
    n_pentane.set_volume_heat_burning_20_lower(136.01);
    n_pentane.set_critical_temperature(469.69);
    n_pentane.set_critical_pressure(3364.0);
    n_pentane.set_coefficient_acentricity(0.2510);

    // 2-Метилбутан
    Gas_component methylbutane_2("2-Метилбутан", "2-Methylbutane");
    array_gas_component.push_back(&methylbutane_2);
    methylbutane_2.set_molar_mass(72.150);
    methylbutane_2.set_20_z_factor(0.953);
    methylbutane_2.set_20_sqrt_b(0.2168);
    methylbutane_2.set_molar_heat_burning_20_higher(3530.24);
    methylbutane_2.set_molar_heat_burning_20_lower(3264.89);
    methylbutane_2.set_mass_heat_burning_20_higher(48.93);
    methylbutane_2.set_mass_heat_burning_20_lower(45.25);
    methylbutane_2.set_volume_heat_burning_20_higher(146.76);
    methylbutane_2.set_volume_heat_burning_20_lower(135.72);
    methylbutane_2.set_critical_temperature(460.39);
    methylbutane_2.set_critical_pressure(3381.0);
    methylbutane_2.set_coefficient_acentricity(0.2273);

    // 2,2-Диметилпропан
    Gas_component dimethylpropane_2_2("2,2-Диметилпропан", "2,2-Dimethylpropane");
    array_gas_component.push_back(&dimethylpropane_2_2);
    dimethylpropane_2_2.set_molar_mass(72.150);
    dimethylpropane_2_2.set_20_z_factor(0.959);
    dimethylpropane_2_2.set_20_sqrt_b(0.2025);
    dimethylpropane_2_2.set_molar_heat_burning_20_higher(3516.01);
    dimethylpropane_2_2.set_molar_heat_burning_20_lower(3250.67);
    dimethylpropane_2_2.set_mass_heat_burning_20_higher(48.73);
    dimethylpropane_2_2.set_mass_heat_burning_20_lower(45.05);
    dimethylpropane_2_2.set_volume_heat_burning_20_higher(146.16);
    dimethylpropane_2_2.set_volume_heat_burning_20_lower(135.13);
    dimethylpropane_2_2.set_critical_temperature(433.75);
    dimethylpropane_2_2.set_critical_pressure(3199.0);
    dimethylpropane_2_2.set_coefficient_acentricity(0.1970);

    // н-Гексан
    Gas_component n_hexane("н-Гексан", "n-Hexane");
    array_gas_component.push_back(&n_hexane);
    n_hexane.set_molar_mass(86.177);
    n_hexane.set_20_z_factor(0.919);
    n_hexane.set_20_sqrt_b(0.2846);
    n_hexane.set_molar_heat_burning_20_higher(4196.58);
    n_hexane.set_molar_heat_burning_20_lower(3887.01);
    n_hexane.set_mass_heat_burning_20_higher(48.70);
    n_hexane.set_mass_heat_burning_20_lower(45.10);
    n_hexane.set_volume_heat_burning_20_higher(174.46);
    n_hexane.set_volume_heat_burning_20_lower(161.59);
    n_hexane.set_critical_temperature(506.4);
    n_hexane.set_critical_pressure(3030.0);
    n_hexane.set_coefficient_acentricity(0.2957);

    // 2-Метилпентан
    Gas_component methylpentane_2("2-Метилпентан", "2-Methylpentane");
    array_gas_component.push_back(&methylpentane_2);
    methylpentane_2.set_molar_mass(86.177);
    methylpentane_2.set_20_z_factor(0.926);
    methylpentane_2.set_20_sqrt_b(0.2720);
    methylpentane_2.set_molar_heat_burning_20_higher(4188.95);
    methylpentane_2.set_molar_heat_burning_20_lower(3879.38);
    methylpentane_2.set_mass_heat_burning_20_higher(48.61);
    methylpentane_2.set_mass_heat_burning_20_lower(45.02);
    methylpentane_2.set_volume_heat_burning_20_higher(174.14);
    methylpentane_2.set_volume_heat_burning_20_lower(161.27);
    methylpentane_2.set_critical_temperature(497.5);
    methylpentane_2.set_critical_pressure(3010.0);
    methylpentane_2.set_coefficient_acentricity(0.2791);

    // 3-Метилпентан
    Gas_component methylpentane_3("3-Метилпентан", "3-Methylpentane");
    array_gas_component.push_back(&methylpentane_3);
    methylpentane_3.set_molar_mass(86.177);
    methylpentane_3.set_20_z_factor(0.928);
    methylpentane_3.set_20_sqrt_b(0.2683);
    methylpentane_3.set_molar_heat_burning_20_higher(4191.54);
    methylpentane_3.set_molar_heat_burning_20_lower(3881.97);
    methylpentane_3.set_mass_heat_burning_20_higher(48.64);
    methylpentane_3.set_mass_heat_burning_20_lower(45.05);
    methylpentane_3.set_volume_heat_burning_20_higher(174.25);
    methylpentane_3.set_volume_heat_burning_20_lower(161.38);
    methylpentane_3.set_critical_temperature(504.4);
    methylpentane_3.set_critical_pressure(3120.0);
    methylpentane_3.set_coefficient_acentricity(0.2750);

    // 2,2-Диметилбутан
    Gas_component dimethylbutane_2_2("2,2-Диметилбутан", "2,2-Dimethylbutane");
    array_gas_component.push_back(&dimethylbutane_2_2);
    dimethylbutane_2_2.set_molar_mass(86.177);
    dimethylbutane_2_2.set_20_z_factor(0.935);
    dimethylbutane_2_2.set_20_sqrt_b(0.2550);
    dimethylbutane_2_2.set_molar_heat_burning_20_higher(4179.15);
    dimethylbutane_2_2.set_molar_heat_burning_20_lower(3869.59);
    dimethylbutane_2_2.set_mass_heat_burning_20_higher(48.49);
    dimethylbutane_2_2.set_mass_heat_burning_20_lower(44.90);
    dimethylbutane_2_2.set_volume_heat_burning_20_higher(173.73);
    dimethylbutane_2_2.set_volume_heat_burning_20_lower(160.86);
    dimethylbutane_2_2.set_critical_temperature(488.7);
    dimethylbutane_2_2.set_critical_pressure(3080.0);
    dimethylbutane_2_2.set_coefficient_acentricity(0.2310);

    // 2,3-Диметилбутан
    Gas_component dimethylbutane_2_3("2,3-Диметилбутан", "2,3-Dimethylbutane");
    array_gas_component.push_back(&dimethylbutane_2_3);
    dimethylbutane_2_3.set_molar_mass(86.177);
    dimethylbutane_2_3.set_20_z_factor(0.934);
    dimethylbutane_2_3.set_20_sqrt_b(0.2569);
    dimethylbutane_2_3.set_molar_heat_burning_20_higher(4186.93);
    dimethylbutane_2_3.set_molar_heat_burning_20_lower(3877.36);
    dimethylbutane_2_3.set_mass_heat_burning_20_higher(48.59);
    dimethylbutane_2_3.set_mass_heat_burning_20_lower(44.99);
    dimethylbutane_2_3.set_volume_heat_burning_20_higher(174.05);
    dimethylbutane_2_3.set_volume_heat_burning_20_lower(161.19);
    dimethylbutane_2_3.set_critical_temperature(499.9);
    dimethylbutane_2_3.set_critical_pressure(3130.0);
    dimethylbutane_2_3.set_coefficient_acentricity(0.2473);

    // н-Гептан
    Gas_component n_heptane("н-Гептан", "n-Heptane");
    array_gas_component.push_back(&n_heptane);
    n_heptane.set_molar_mass(100.204);
    n_heptane.set_20_z_factor(0.876);
    n_heptane.set_20_sqrt_b(0.3521);
    n_heptane.set_molar_heat_burning_20_higher(4855.29);
    n_heptane.set_molar_heat_burning_20_lower(4501.49);
    n_heptane.set_mass_heat_burning_20_higher(48.45);
    n_heptane.set_mass_heat_burning_20_lower(44.92);
    n_heptane.set_volume_heat_burning_20_higher(201.84);
    n_heptane.set_volume_heat_burning_20_lower(187.13);
    n_heptane.set_critical_temperature(539.2);
    n_heptane.set_critical_pressure(2740.0);
    n_heptane.set_coefficient_acentricity(0.3506);

    // н-Октан
    Gas_component n_octane("н-Октан", "n-Octane");
    array_gas_component.push_back(&n_octane);
    n_octane.set_molar_mass(114.231);
    n_octane.set_20_z_factor(0.817);
    n_octane.set_20_sqrt_b(0.4278);
    n_octane.set_molar_heat_burning_20_higher(5513.88);
    n_octane.set_molar_heat_burning_20_lower(5115.87);
    n_octane.set_mass_heat_burning_20_higher(48.27);
    n_octane.set_mass_heat_burning_20_lower(44.79);
    n_octane.set_volume_heat_burning_20_higher(229.22);
    n_octane.set_volume_heat_burning_20_lower(212.67);
    n_octane.set_critical_temperature(568.4);
    n_octane.set_critical_pressure(2490.0);
    n_octane.set_coefficient_acentricity(0.3942);

    // н-Нонан
    Gas_component n_nonan("н-Нонан", "n-Nonan");
    array_gas_component.push_back(&n_nonan);
    n_nonan.set_molar_mass(128.258);
    n_nonan.set_20_z_factor(0.735);
    n_nonan.set_20_sqrt_b(0.5148);
    n_nonan.set_molar_heat_burning_20_higher(6173.46);
    n_nonan.set_molar_heat_burning_20_lower(5731.22);
    n_nonan.set_mass_heat_burning_20_higher(48.13);
    n_nonan.set_mass_heat_burning_20_lower(44.69);
    n_nonan.set_volume_heat_burning_20_higher(256.64);
    n_nonan.set_volume_heat_burning_20_lower(238.25);
    n_nonan.set_critical_temperature(594.4);
    n_nonan.set_critical_pressure(2280.0);
    n_nonan.set_coefficient_acentricity(0.4437);

    // н-Декан
    Gas_component n_dean("н-Декан", "n-Dean");
    array_gas_component.push_back(&n_dean);
    n_dean.set_molar_mass(142.285);
    n_dean.set_20_z_factor(0.623);
    n_dean.set_20_sqrt_b(0.6140);
    n_dean.set_molar_heat_burning_20_higher(6832.31);
    n_dean.set_molar_heat_burning_20_lower(6345.85);
    n_dean.set_mass_heat_burning_20_higher(48.02);
    n_dean.set_mass_heat_burning_20_lower(44.60);
    n_dean.set_volume_heat_burning_20_higher(284.03);
    n_dean.set_volume_heat_burning_20_lower(263.80);
    n_dean.set_critical_temperature(617.8);
    n_dean.set_critical_pressure(2090.0);
    n_dean.set_coefficient_acentricity(0.4902);

    // Этилен
    Gas_component ethylene("Этилен", "Ethylene");
    array_gas_component.push_back(&ethylene);
    ethylene.set_molar_mass(28.054);
    ethylene.set_20_z_factor(0.9940);
    ethylene.set_20_sqrt_b(0.0775);
    ethylene.set_molar_heat_burning_20_higher(1411.65);
    ethylene.set_molar_heat_burning_20_lower(1323.20);
    ethylene.set_mass_heat_burning_20_higher(50.32);
    ethylene.set_mass_heat_burning_20_lower(47.17);
    ethylene.set_volume_heat_burning_20_higher(58.68);
    ethylene.set_volume_heat_burning_20_lower(55.01);
    ethylene.set_critical_temperature(282.35);
    ethylene.set_critical_pressure(5042.0);
    ethylene.set_coefficient_acentricity(0.0856);

    // Пропилен
    Gas_component propylene("Пропилен", "Propylene");
    array_gas_component.push_back(&propylene);
    propylene.set_molar_mass(42.081);
    propylene.set_20_z_factor(0.985);
    propylene.set_20_sqrt_b(0.1225);
    propylene.set_molar_heat_burning_20_higher(2058.72);
    propylene.set_molar_heat_burning_20_lower(1926.05);
    propylene.set_mass_heat_burning_20_higher(48.92);
    propylene.set_mass_heat_burning_20_lower(45.77);
    propylene.set_volume_heat_burning_20_higher(85.58);
    propylene.set_volume_heat_burning_20_lower(80.07);
    propylene.set_critical_temperature(364.85);
    propylene.set_critical_pressure(4601.0);
    propylene.set_coefficient_acentricity(0.1477);

    // 1-Бутен
    Gas_component butene_1("1-Бутен", "1-Butene");
    array_gas_component.push_back(&butene_1);
    butene_1.set_molar_mass(56.108);
    butene_1.set_20_z_factor(0.972);
    butene_1.set_20_sqrt_b(0.1673);
    butene_1.set_molar_heat_burning_20_higher(2717.75);
    butene_1.set_molar_heat_burning_20_lower(2540.86);
    butene_1.set_mass_heat_burning_20_higher(48.44);
    butene_1.set_mass_heat_burning_20_lower(45.29);
    butene_1.set_volume_heat_burning_20_higher(112.98);
    butene_1.set_volume_heat_burning_20_lower(105.63);
    butene_1.set_critical_temperature(419.53);
    butene_1.set_critical_pressure(4023.0);
    butene_1.set_coefficient_acentricity(0.1874);

    // цис-2-Бутен
    Gas_component cis_2_butene("цис-2-Бутен", "cis-2-Butene");
    array_gas_component.push_back(&cis_2_butene);
    cis_2_butene.set_molar_mass(56.108);
    cis_2_butene.set_20_z_factor(0.969);
    cis_2_butene.set_20_sqrt_b(0.1761);
    cis_2_butene.set_molar_heat_burning_20_higher(2711.0);
    cis_2_butene.set_molar_heat_burning_20_lower(2534.1);
    cis_2_butene.set_mass_heat_burning_20_higher(48.32);
    cis_2_butene.set_mass_heat_burning_20_lower(45.16);
    cis_2_butene.set_volume_heat_burning_20_higher(112.70);
    cis_2_butene.set_volume_heat_burning_20_lower(105.34);
    cis_2_butene.set_critical_temperature(435.58);
    cis_2_butene.set_critical_pressure(4220.0);
    cis_2_butene.set_coefficient_acentricity(0.2044);

    // транс-2-Бутен
    Gas_component trans_2_buten("транс-2-Бутен", "trans-2-Buten");
    array_gas_component.push_back(&trans_2_buten);
    trans_2_buten.set_molar_mass(56.108);
    trans_2_buten.set_20_z_factor(0.969);
    trans_2_buten.set_20_sqrt_b(0.1761);
    trans_2_buten.set_molar_heat_burning_20_higher(2707.4);
    trans_2_buten.set_molar_heat_burning_20_lower(2530.5);
    trans_2_buten.set_mass_heat_burning_20_higher(48.25);
    trans_2_buten.set_mass_heat_burning_20_lower(45.10);
    trans_2_buten.set_volume_heat_burning_20_higher(112.55);
    trans_2_buten.set_volume_heat_burning_20_lower(105.19);
    trans_2_buten.set_critical_temperature(428.63);
    trans_2_buten.set_critical_pressure(4050.0);
    trans_2_buten.set_coefficient_acentricity(0.2138);

    // 2-Метилпропен
    Gas_component methylpropene_2("2-Метилпропен", "2-Methylpropane");
    array_gas_component.push_back(&methylpropene_2);
    methylpropene_2.set_molar_mass(56.108);
    methylpropene_2.set_20_z_factor(0.972);
    methylpropene_2.set_20_sqrt_b(0.1673);
    methylpropene_2.set_molar_heat_burning_20_higher(2701.1);
    methylpropene_2.set_molar_heat_burning_20_lower(2524.2);
    methylpropene_2.set_mass_heat_burning_20_higher(48.14);
    methylpropene_2.set_mass_heat_burning_20_lower(44.99);
    methylpropene_2.set_volume_heat_burning_20_higher(112.29);
    methylpropene_2.set_volume_heat_burning_20_lower(104.93);
    methylpropene_2.set_critical_temperature(417.90);
    methylpropene_2.set_critical_pressure(4000.0);
    methylpropene_2.set_coefficient_acentricity(0.1898);

    // 1-Пентен
    Gas_component penten_1("1-Пентен", "1-Penten");
    array_gas_component.push_back(&penten_1);
    penten_1.set_molar_mass(70.134);
    penten_1.set_20_z_factor(0.952);
    penten_1.set_20_sqrt_b(0.2191);
    penten_1.set_molar_heat_burning_20_higher(3376.57);
    penten_1.set_molar_heat_burning_20_lower(3155.45);
    penten_1.set_mass_heat_burning_20_higher(48.14);
    penten_1.set_mass_heat_burning_20_lower(44.99);
    penten_1.set_volume_heat_burning_20_higher(140.37);
    penten_1.set_volume_heat_burning_20_lower(131.18);
    penten_1.set_critical_temperature(464.78);
    penten_1.set_critical_pressure(3526.0);
    penten_1.set_coefficient_acentricity(0.2450);

    // Пропадиен
    Gas_component propadiene("Пропадиен", "Propadiene");
    array_gas_component.push_back(&propadiene);
    propadiene.set_molar_mass(40.065);
    propadiene.set_20_z_factor(0.984);
    propadiene.set_20_sqrt_b(0.1265);
    propadiene.set_molar_heat_burning_20_higher(1943.53);
    propadiene.set_molar_heat_burning_20_lower(1855.08);
    propadiene.set_mass_heat_burning_20_higher(48.51);
    propadiene.set_mass_heat_burning_20_lower(46.30);
    propadiene.set_volume_heat_burning_20_higher(80.79);
    propadiene.set_volume_heat_burning_20_lower(77.12);
    propadiene.set_critical_temperature(393.0);
    propadiene.set_critical_pressure(5470.0);
    propadiene.set_coefficient_acentricity(0.149);

    // 1,2-Бутадиен
    Gas_component butadiene_1_2("1,2-Бутадиен", "1,2-Butadiene");
    array_gas_component.push_back(&butadiene_1_2);
    butadiene_1_2.set_molar_mass(54.092);
    butadiene_1_2.set_20_z_factor(0.965);
    butadiene_1_2.set_20_sqrt_b(0.1871);
    butadiene_1_2.set_molar_heat_burning_20_higher(2594.45);
    butadiene_1_2.set_molar_heat_burning_20_lower(2461.78);
    butadiene_1_2.set_mass_heat_burning_20_higher(47.96);
    butadiene_1_2.set_mass_heat_burning_20_lower(45.51);
    butadiene_1_2.set_volume_heat_burning_20_higher(107.85);
    butadiene_1_2.set_volume_heat_burning_20_lower(102.34);
    butadiene_1_2.set_critical_temperature(443.7);
    butadiene_1_2.set_critical_pressure(4500.0);
    butadiene_1_2.set_coefficient_acentricity(0.3394);

    // 1,3-Бутадиен
    Gas_component butadiene_1_3("1,3-Бутадиен", "1,3-Butadiene");
    array_gas_component.push_back(&butadiene_1_3);
    butadiene_1_3.set_molar_mass(54.092);
    butadiene_1_3.set_20_z_factor(0.973);
    butadiene_1_3.set_20_sqrt_b(0.1643);
    butadiene_1_3.set_molar_heat_burning_20_higher(2541.43);
    butadiene_1_3.set_molar_heat_burning_20_lower(2408.76);
    butadiene_1_3.set_mass_heat_burning_20_higher(46.98);
    butadiene_1_3.set_mass_heat_burning_20_lower(44.53);
    butadiene_1_3.set_volume_heat_burning_20_higher(105.65);
    butadiene_1_3.set_volume_heat_burning_20_lower(100.13);
    butadiene_1_3.set_critical_temperature(425.0);
    butadiene_1_3.set_critical_pressure(4330.0);
    butadiene_1_3.set_coefficient_acentricity(0.1814);

    // Ацетилен
    Gas_component acethylene("Ацетилен", "Acetylene");
    array_gas_component.push_back(&acethylene);
    acethylene.set_molar_mass(26.038);
    acethylene.set_20_z_factor(0.993);
    acethylene.set_20_sqrt_b(0.0837);
    acethylene.set_molar_heat_burning_20_higher(1301.21);
    acethylene.set_molar_heat_burning_20_lower(1256.98);
    acethylene.set_mass_heat_burning_20_higher(49.97);
    acethylene.set_mass_heat_burning_20_lower(48.28);
    acethylene.set_volume_heat_burning_20_higher(54.09);
    acethylene.set_volume_heat_burning_20_lower(52.25);
    acethylene.set_critical_temperature(308.33);
    acethylene.set_critical_pressure(6139.0);
    acethylene.set_coefficient_acentricity(0.1841);

    // Циклопентан
    Gas_component cyclopentane("Циклопентан", "Cyclopentane");
    array_gas_component.push_back(&cyclopentane);
    cyclopentane.set_molar_mass(70.134);
    cyclopentane.set_20_z_factor(0.950);
    cyclopentane.set_20_sqrt_b(0.2236);
    cyclopentane.set_molar_heat_burning_20_higher(3320.88);
    cyclopentane.set_molar_heat_burning_20_lower(3099.76);
    cyclopentane.set_mass_heat_burning_20_higher(47.35);
    cyclopentane.set_mass_heat_burning_20_lower(44.20);
    cyclopentane.set_volume_heat_burning_20_higher(138.05);
    cyclopentane.set_volume_heat_burning_20_lower(128.86);
    cyclopentane.set_critical_temperature(511.61);
    cyclopentane.set_critical_pressure(4502.0);
    cyclopentane.set_coefficient_acentricity(0.1923);

    // Метилциклопентан
    Gas_component methylcyclopentane("Метилциклопентан", "Methylcyclopentane");
    array_gas_component.push_back(&methylcyclopentane);
    methylcyclopentane.set_molar_mass(84.161);
    methylcyclopentane.set_20_z_factor(0.927);
    methylcyclopentane.set_20_sqrt_b(0.2702);
    methylcyclopentane.set_molar_heat_burning_20_higher(3970.93);
    methylcyclopentane.set_molar_heat_burning_20_lower(3705.59);
    methylcyclopentane.set_mass_heat_burning_20_higher(47.18);
    methylcyclopentane.set_mass_heat_burning_20_lower(44.03);
    methylcyclopentane.set_volume_heat_burning_20_higher(165.08);
    methylcyclopentane.set_volume_heat_burning_20_lower(154.04);
    methylcyclopentane.set_critical_temperature(532.73);
    methylcyclopentane.set_critical_pressure(3784.0);
    methylcyclopentane.set_coefficient_acentricity(0.2395);

    // Этилциклопентан
    Gas_component ethylcyclopentan("Этилциклопентан", "Ethylcyclopentan");
    array_gas_component.push_back(&ethylcyclopentan);
    ethylcyclopentan.set_molar_mass(98.188);
    ethylcyclopentan.set_20_z_factor(0.885);
    ethylcyclopentan.set_20_sqrt_b(0.3391);
    ethylcyclopentan.set_molar_heat_burning_20_higher(4630.19);
    ethylcyclopentan.set_molar_heat_burning_20_lower(4320.63);
    ethylcyclopentan.set_mass_heat_burning_20_higher(47.16);
    ethylcyclopentan.set_mass_heat_burning_20_lower(44.00);
    ethylcyclopentan.set_volume_heat_burning_20_higher(192.48);
    ethylcyclopentan.set_volume_heat_burning_20_lower(179.61);
    ethylcyclopentan.set_critical_temperature(569.46);
    ethylcyclopentan.set_critical_pressure(3397.0);
    ethylcyclopentan.set_coefficient_acentricity(0.2826);

    // Циклогексан
    Gas_component cyclohexane("Циклогексан", "Cyclohexane");
    array_gas_component.push_back(&cyclohexane);
    cyclohexane.set_molar_mass(84.161);
    cyclohexane.set_20_z_factor(0.924);
    cyclohexane.set_20_sqrt_b(0.2757);
    cyclohexane.set_molar_heat_burning_20_higher(3954.47);
    cyclohexane.set_molar_heat_burning_20_lower(3689.13);
    cyclohexane.set_mass_heat_burning_20_higher(46.99);
    cyclohexane.set_mass_heat_burning_20_lower(43.83);
    cyclohexane.set_volume_heat_burning_20_higher(164.39);
    cyclohexane.set_volume_heat_burning_20_lower(153.36);
    cyclohexane.set_critical_temperature(553.5);
    cyclohexane.set_critical_pressure(4074.0);
    cyclohexane.set_coefficient_acentricity(0.2144);

    // Метилциклогексан
    Gas_component methylcyclohexane("Метилциклогексан", "Methylcyclohexane");
    array_gas_component.push_back(&methylcyclohexane);
    methylcyclohexane.set_molar_mass(98.188);
    methylcyclohexane.set_20_z_factor(0.894);
    methylcyclohexane.set_20_sqrt_b(0.3256);
    methylcyclohexane.set_molar_heat_burning_20_higher(4602.35);
    methylcyclohexane.set_molar_heat_burning_20_lower(4292.76);
    methylcyclohexane.set_mass_heat_burning_20_higher(46.87);
    methylcyclohexane.set_mass_heat_burning_20_lower(43.72);
    methylcyclohexane.set_volume_heat_burning_20_higher(191.32);
    methylcyclohexane.set_volume_heat_burning_20_lower(178.45);
    methylcyclohexane.set_critical_temperature(572.12);
    methylcyclohexane.set_critical_pressure(3471.0);
    methylcyclohexane.set_coefficient_acentricity(0.2333);

    // Этилциклогексан
    Gas_component ethylcyclohexane("Этилциклогексан", "Ethylcyclohexane");
    array_gas_component.push_back(&ethylcyclohexane);
    ethylcyclohexane.set_molar_mass(112.215);
    ethylcyclohexane.set_20_z_factor(0.838);
    ethylcyclohexane.set_20_sqrt_b(0.4025);
    ethylcyclohexane.set_molar_heat_burning_20_higher(5264.98);
    ethylcyclohexane.set_molar_heat_burning_20_lower(4911.19);
    ethylcyclohexane.set_mass_heat_burning_20_higher(46.92);
    ethylcyclohexane.set_mass_heat_burning_20_lower(43.77);
    ethylcyclohexane.set_volume_heat_burning_20_higher(218.87);
    ethylcyclohexane.set_volume_heat_burning_20_lower(204.16);
    ethylcyclohexane.set_critical_temperature(609.0);
    ethylcyclohexane.set_critical_pressure(3040.0);
    ethylcyclohexane.set_coefficient_acentricity(0.2426);

    // Бензол
    Gas_component benzol("Бензол", "Benzol");
    array_gas_component.push_back(&benzol);
    benzol.set_molar_mass(78.114);
    benzol.set_20_z_factor(0.936);
    benzol.set_20_sqrt_b(0.2530);
    benzol.set_molar_heat_burning_20_higher(3302.15);
    benzol.set_molar_heat_burning_20_lower(3169.48);
    benzol.set_mass_heat_burning_20_higher(42.27);
    benzol.set_mass_heat_burning_20_lower(40.58);
    benzol.set_volume_heat_burning_20_higher(137.27);
    benzol.set_volume_heat_burning_20_lower(131.76);
    benzol.set_critical_temperature(562.16);
    benzol.set_critical_pressure(4898.0);
    benzol.set_coefficient_acentricity(0.2100);

    // Толуол
    Gas_component toluol("Толуол", "Toluol");
    array_gas_component.push_back(&toluol);
    toluol.set_molar_mass(92.141);
    toluol.set_20_z_factor(0.892);
    toluol.set_20_sqrt_b(0.3286);
    toluol.set_molar_heat_burning_20_higher(3948.84);
    toluol.set_molar_heat_burning_20_lower(3771.95);
    toluol.set_mass_heat_burning_20_higher(42.86);
    toluol.set_mass_heat_burning_20_lower(40.94);
    toluol.set_volume_heat_burning_20_higher(164.16);
    toluol.set_volume_heat_burning_20_lower(156.80);
    toluol.set_critical_temperature(591.80);
    toluol.set_critical_pressure(4106.0);
    toluol.set_coefficient_acentricity(0.2566);

    // Этилбензол
    Gas_component ethylbenzol("Этилбензол", "Ethylbenzol");
    array_gas_component.push_back(&ethylbenzol);
    ethylbenzol.set_molar_mass(106.167);
    ethylbenzol.set_20_z_factor(0.837);
    ethylbenzol.set_20_sqrt_b(0.4037);
    ethylbenzol.set_molar_heat_burning_20_higher(4608.32);
    ethylbenzol.set_molar_heat_burning_20_lower(4387.20);
    ethylbenzol.set_mass_heat_burning_20_higher(43.41);
    ethylbenzol.set_mass_heat_burning_20_lower(41.32);
    ethylbenzol.set_volume_heat_burning_20_higher(191.57);
    ethylbenzol.set_volume_heat_burning_20_lower(182.38);
    ethylbenzol.set_critical_temperature(617.20);
    ethylbenzol.set_critical_pressure(3606.0);
    ethylbenzol.set_coefficient_acentricity(0.3011);

    // о-Ксилол
    Gas_component xylol_o("о-Ксилол", "o-Xylol");
    array_gas_component.push_back(&xylol_o);
    xylol_o.set_molar_mass(106.167);
    xylol_o.set_20_z_factor(0.821);
    xylol_o.set_20_sqrt_b(0.4231);
    xylol_o.set_molar_heat_burning_20_higher(4597.46);
    xylol_o.set_molar_heat_burning_20_lower(4376.34);
    xylol_o.set_mass_heat_burning_20_higher(43.30);
    xylol_o.set_mass_heat_burning_20_lower(41.22);
    xylol_o.set_volume_heat_burning_20_higher(191.12);
    xylol_o.set_volume_heat_burning_20_lower(181.93);
    xylol_o.set_critical_temperature(630.33);
    xylol_o.set_critical_pressure(3734.0);
    xylol_o.set_coefficient_acentricity(0.3136);

    // Метанол
    Gas_component methanol("Метанол", "Methanol");
    array_gas_component.push_back(&methanol);
    methanol.set_molar_mass(32.042);
    methanol.set_20_z_factor(0.892);
    methanol.set_20_sqrt_b(0.3286);
    methanol.set_molar_heat_burning_20_higher(764.59);
    methanol.set_molar_heat_burning_20_lower(676.14);
    methanol.set_mass_heat_burning_20_higher(23.86);
    methanol.set_mass_heat_burning_20_lower(21.10);
    methanol.set_volume_heat_burning_20_higher(31.78);
    methanol.set_volume_heat_burning_20_lower(28.11);
    methanol.set_critical_temperature(512.64);
    methanol.set_critical_pressure(8092.0);
    methanol.set_coefficient_acentricity(0.556);

    // Метантиол
    Gas_component methanethiol("Метантиол", "Methanethiol");
    array_gas_component.push_back(&methanethiol);
    methanethiol.set_molar_mass(48.109);
    methanethiol.set_20_z_factor(0.978);
    methanethiol.set_20_sqrt_b(0.1483);
    methanethiol.set_molar_heat_burning_20_higher(1239.83);
    methanethiol.set_molar_heat_burning_20_lower(1151.39);
    methanethiol.set_mass_heat_burning_20_higher(25.77);
    methanethiol.set_mass_heat_burning_20_lower(23.93);
    methanethiol.set_volume_heat_burning_20_higher(51.54);
    methanethiol.set_volume_heat_burning_20_lower(47.86);
    methanethiol.set_critical_temperature(470.0);
    methanethiol.set_critical_pressure(7230.0);
    methanethiol.set_coefficient_acentricity(0.153);

    // Водород
    Gas_component hydrogen("Водород", "Hydrogen");
    array_gas_component.push_back(&hydrogen);
    hydrogen.set_molar_mass(2.0159);
    hydrogen.set_20_z_factor(1.0006);
    hydrogen.set_20_sqrt_b(-0.0051);
    hydrogen.set_molar_heat_burning_20_higher(285.99);
    hydrogen.set_molar_heat_burning_20_lower(241.76);
    hydrogen.set_mass_heat_burning_20_higher(141.87);
    hydrogen.set_mass_heat_burning_20_lower(119.93);
    hydrogen.set_volume_heat_burning_20_higher(11.889);
    hydrogen.set_volume_heat_burning_20_lower(10.050);
    hydrogen.set_critical_temperature(33.2);
    hydrogen.set_critical_pressure(1297.0);
    hydrogen.set_coefficient_acentricity(-0.218);

    // Вода
    Gas_component water("Вода", "Water");
    array_gas_component.push_back(&water);
    water.set_molar_mass(18.0153);
    water.set_20_z_factor(0.952);
    water.set_20_sqrt_b(0.2191);
    water.set_molar_heat_burning_20_higher(44.224);
    water.set_molar_heat_burning_20_lower(0.0);
    water.set_mass_heat_burning_20_higher(2.45);
    water.set_mass_heat_burning_20_lower(0.0);
    water.set_volume_heat_burning_20_higher(1.84);
    water.set_volume_heat_burning_20_lower(0.0);
    water.set_critical_temperature(647.14);
    water.set_critical_pressure(22064.0);
    water.set_coefficient_acentricity(0.328);

    // Сульфид водорода
    Gas_component hydrogen_sulfide("Сульфид водорода", "Hydrogen sulfide");
    array_gas_component.push_back(&hydrogen_sulfide);
    hydrogen_sulfide.set_molar_mass(34.082);
    hydrogen_sulfide.set_20_z_factor(0.990);
    hydrogen_sulfide.set_20_sqrt_b(0.1000);
    hydrogen_sulfide.set_molar_heat_burning_20_higher(562.19);
    hydrogen_sulfide.set_molar_heat_burning_20_lower(517.97);
    hydrogen_sulfide.set_mass_heat_burning_20_higher(16.50);
    hydrogen_sulfide.set_mass_heat_burning_20_lower(15.20);
    hydrogen_sulfide.set_volume_heat_burning_20_higher(23.37);
    hydrogen_sulfide.set_volume_heat_burning_20_lower(21.53);
    hydrogen_sulfide.set_critical_temperature(373.2);
    hydrogen_sulfide.set_critical_pressure(8940.0);
    hydrogen_sulfide.set_coefficient_acentricity(0.109);

    // Аммиак
    Gas_component ammonia("Аммиак", "Ammonia");
    array_gas_component.push_back(&ammonia);
    ammonia.set_molar_mass(17.0306);
    ammonia.set_20_z_factor(0.989);
    ammonia.set_20_sqrt_b(0.1049);
    ammonia.set_molar_heat_burning_20_higher(383.16);
    ammonia.set_molar_heat_burning_20_lower(316.82);
    ammonia.set_mass_heat_burning_20_higher(22.50);
    ammonia.set_mass_heat_burning_20_lower(18.60);
    ammonia.set_volume_heat_burning_20_higher(15.93);
    ammonia.set_volume_heat_burning_20_lower(13.17);
    ammonia.set_critical_temperature(405.5);
    ammonia.set_critical_pressure(11350.0);
    ammonia.set_coefficient_acentricity(0.250);

    // Цианид водорода
    Gas_component hydrogen_cyanide("Цианид водорода", "Hydrogen cyanide");
    array_gas_component.push_back(&hydrogen_cyanide);
    hydrogen_cyanide.set_molar_mass(27.026);
    hydrogen_cyanide.set_20_z_factor(0.920);
    hydrogen_cyanide.set_20_sqrt_b(0.2828);
    hydrogen_cyanide.set_molar_heat_burning_20_higher(671.6);
    hydrogen_cyanide.set_molar_heat_burning_20_lower(649.5);
    hydrogen_cyanide.set_mass_heat_burning_20_higher(24.85);
    hydrogen_cyanide.set_mass_heat_burning_20_lower(24.03);
    hydrogen_cyanide.set_volume_heat_burning_20_higher(27.92);
    hydrogen_cyanide.set_volume_heat_burning_20_lower(27.00);
    hydrogen_cyanide.set_critical_temperature(456.7);
    hydrogen_cyanide.set_critical_pressure(5390.0);
    hydrogen_cyanide.set_coefficient_acentricity(0.388);

    // Монооксид углерода
    Gas_component carbon_monoxide("Монооксид углерода", "Carbon monoxide");
    array_gas_component.push_back(&carbon_monoxide);
    carbon_monoxide.set_molar_mass(28.010);
    carbon_monoxide.set_20_z_factor(0.9996);
    carbon_monoxide.set_20_sqrt_b(0.0200);
    carbon_monoxide.set_molar_heat_burning_20_higher(282.95);
    carbon_monoxide.set_molar_heat_burning_20_lower(282.95);
    carbon_monoxide.set_mass_heat_burning_20_higher(10.10);
    carbon_monoxide.set_mass_heat_burning_20_lower(10.10);
    carbon_monoxide.set_volume_heat_burning_20_higher(11.76);
    carbon_monoxide.set_volume_heat_burning_20_lower(11.76);
    carbon_monoxide.set_critical_temperature(132.85);
    carbon_monoxide.set_critical_pressure(3494.0);
    carbon_monoxide.set_coefficient_acentricity(0.053);

    // Карбонил сульфид
    Gas_component carbonyl_sulfide("Карбонил сульфид", "Carbonyl sulfide");
    array_gas_component.push_back(&carbonyl_sulfide);
    carbonyl_sulfide.set_molar_mass(60.076);
    carbonyl_sulfide.set_20_z_factor(0.988);
    carbonyl_sulfide.set_20_sqrt_b(0.1095);
    carbonyl_sulfide.set_molar_heat_burning_20_higher(548.19);
    carbonyl_sulfide.set_molar_heat_burning_20_lower(548.19);
    carbonyl_sulfide.set_mass_heat_burning_20_higher(9.12);
    carbonyl_sulfide.set_mass_heat_burning_20_lower(9.12);
    carbonyl_sulfide.set_volume_heat_burning_20_higher(22.79);
    carbonyl_sulfide.set_volume_heat_burning_20_lower(22.79);
    carbonyl_sulfide.set_critical_temperature(378.8);
    carbonyl_sulfide.set_critical_pressure(6349.0);
    carbonyl_sulfide.set_coefficient_acentricity(0.096);

    // Дисульфид углерода
    Gas_component carbon_disulfide("Дисульфид углерода", "Carbon disulfide");
    array_gas_component.push_back(&carbon_disulfide);
    carbon_disulfide.set_molar_mass(76.143);
    carbon_disulfide.set_20_z_factor(0.965);
    carbon_disulfide.set_20_sqrt_b(0.1871);
    carbon_disulfide.set_molar_heat_burning_20_higher(1104.41);
    carbon_disulfide.set_molar_heat_burning_20_lower(1104.41);
    carbon_disulfide.set_mass_heat_burning_20_higher(14.50);
    carbon_disulfide.set_mass_heat_burning_20_lower(14.50);
    carbon_disulfide.set_volume_heat_burning_20_higher(45.91);
    carbon_disulfide.set_volume_heat_burning_20_lower(45.91);
    carbon_disulfide.set_critical_temperature(552.0);
    carbon_disulfide.set_critical_pressure(7900.0);
    carbon_disulfide.set_coefficient_acentricity(0.109);

    // Гелий
    Gas_component helium("Гелий", "Helium");
    array_gas_component.push_back(&helium);
    helium.set_molar_mass(4.0026);
    helium.set_20_z_factor(1.0005);
    helium.set_20_sqrt_b(0.0000);
    helium.set_molar_heat_burning_20_higher(0.0);
    helium.set_molar_heat_burning_20_lower(0.0);
    helium.set_mass_heat_burning_20_higher(0.0);
    helium.set_mass_heat_burning_20_lower(0.0);
    helium.set_volume_heat_burning_20_higher(0.0);
    helium.set_volume_heat_burning_20_lower(0.0);
    helium.set_critical_temperature(5.19);
    helium.set_critical_pressure(227.0);
    helium.set_coefficient_acentricity(-0.365);

    // Неон
    Gas_component neon("Неон", "Neon");
    array_gas_component.push_back(&neon);
    neon.set_molar_mass(20.1797);
    neon.set_20_z_factor(1.0005);
    neon.set_20_sqrt_b(0.0000);
    neon.set_molar_heat_burning_20_higher(0.0);
    neon.set_molar_heat_burning_20_lower(0.0);
    neon.set_mass_heat_burning_20_higher(0.0);
    neon.set_mass_heat_burning_20_lower(0.0);
    neon.set_volume_heat_burning_20_higher(0.0);
    neon.set_volume_heat_burning_20_lower(0.0);
    neon.set_critical_temperature(44.40);
    neon.set_critical_pressure(2760.0);
    neon.set_coefficient_acentricity(-0.029);

    // Аргон
    Gas_component argon("Аргон", "Argon");
    array_gas_component.push_back(&argon);
    argon.set_molar_mass(39.948);
    argon.set_20_z_factor(0.9993);
    argon.set_20_sqrt_b(0.0265);
    argon.set_molar_heat_burning_20_higher(0.0);
    argon.set_molar_heat_burning_20_lower(0.0);
    argon.set_mass_heat_burning_20_higher(0.0);
    argon.set_mass_heat_burning_20_lower(0.0);
    argon.set_volume_heat_burning_20_higher(0.0);
    argon.set_volume_heat_burning_20_lower(0.0);
    argon.set_critical_temperature(150.65);
    argon.set_critical_pressure(4866.0);
    argon.set_coefficient_acentricity(0.001);


    // Азот
    Gas_component nitrogen("Азот", "Nitrogen");
    array_gas_component.push_back(&nitrogen);
    nitrogen.set_molar_mass(28.0135);
    nitrogen.set_20_z_factor(0.9997);
    nitrogen.set_20_sqrt_b(0.0173);
    nitrogen.set_molar_heat_burning_20_higher(0.0);
    nitrogen.set_molar_heat_burning_20_lower(0.0);
    nitrogen.set_mass_heat_burning_20_higher(0.0);
    nitrogen.set_mass_heat_burning_20_lower(0.0);
    nitrogen.set_volume_heat_burning_20_higher(0.0);
    nitrogen.set_volume_heat_burning_20_lower(0.0);
    nitrogen.set_critical_temperature(126.2);
    nitrogen.set_critical_pressure(3390.0);
    nitrogen.set_coefficient_acentricity(0.039);

    // Кислород
    Gas_component oxygen("Кислород", "Oxygen");
    array_gas_component.push_back(&oxygen);
    oxygen.set_molar_mass(31.9988);
    oxygen.set_20_z_factor(0.9993);
    oxygen.set_20_sqrt_b(0.0265);
    oxygen.set_molar_heat_burning_20_higher(0.0);
    oxygen.set_molar_heat_burning_20_lower(0.0);
    oxygen.set_mass_heat_burning_20_higher(0.0);
    oxygen.set_mass_heat_burning_20_lower(0.0);
    oxygen.set_volume_heat_burning_20_higher(0.0);
    oxygen.set_volume_heat_burning_20_lower(0.0);
    oxygen.set_critical_temperature(154.58);
    oxygen.set_critical_pressure(5043.0);
    oxygen.set_coefficient_acentricity(0.025);

    // Диоксид углерода
    Gas_component carbon_dioxide("Диоксид углерода", "Carbon dioxide");
    array_gas_component.push_back(&carbon_dioxide);
    carbon_dioxide.set_molar_mass(44.010);
    carbon_dioxide.set_20_z_factor(0.9947);
    carbon_dioxide.set_20_sqrt_b(0.0728);
    carbon_dioxide.set_molar_heat_burning_20_higher(0.0);
    carbon_dioxide.set_molar_heat_burning_20_lower(0.0);
    carbon_dioxide.set_mass_heat_burning_20_higher(0.0);
    carbon_dioxide.set_mass_heat_burning_20_lower(0.0);
    carbon_dioxide.set_volume_heat_burning_20_higher(0.0);
    carbon_dioxide.set_volume_heat_burning_20_lower(0.0);
    carbon_dioxide.set_critical_temperature(304.20);
    carbon_dioxide.set_critical_pressure(7386.0);
    carbon_dioxide.set_coefficient_acentricity(0.239);

    // Диоксид серы
    Gas_component sulfur_dioxide("Диоксид серы", "Sulfur dioxide");
    array_gas_component.push_back(&sulfur_dioxide);
    sulfur_dioxide.set_molar_mass(64.065);
    sulfur_dioxide.set_20_z_factor(0.980);
    sulfur_dioxide.set_20_sqrt_b(0.1414);
    sulfur_dioxide.set_molar_heat_burning_20_higher(0.0);
    sulfur_dioxide.set_molar_heat_burning_20_lower(0.0);
    sulfur_dioxide.set_mass_heat_burning_20_higher(0.0);
    sulfur_dioxide.set_mass_heat_burning_20_lower(0.0);
    sulfur_dioxide.set_volume_heat_burning_20_higher(0.0);
    sulfur_dioxide.set_volume_heat_burning_20_lower(0.0);
    sulfur_dioxide.set_critical_temperature(430.8);
    sulfur_dioxide.set_critical_pressure(7884.0);
    sulfur_dioxide.set_coefficient_acentricity(0.256);

    // Монооксид диазота
    Gas_component nitrogen_monoxide("Монооксид диазота", "Nitrogen monoxide");
    array_gas_component.push_back(&nitrogen_monoxide);
    nitrogen_monoxide.set_molar_mass(44.0129);
    nitrogen_monoxide.set_20_z_factor(0.9997); // по азоту
    nitrogen_monoxide.set_20_sqrt_b(0.0173); // по азоту
    nitrogen_monoxide.set_molar_heat_burning_20_higher(0.0);
    nitrogen_monoxide.set_molar_heat_burning_20_lower(0.0);
    nitrogen_monoxide.set_mass_heat_burning_20_higher(0.0);
    nitrogen_monoxide.set_mass_heat_burning_20_lower(0.0);
    nitrogen_monoxide.set_volume_heat_burning_20_higher(0.0);
    nitrogen_monoxide.set_volume_heat_burning_20_lower(0.0);
    nitrogen_monoxide.set_critical_temperature(126.2); // по азоту
    nitrogen_monoxide.set_critical_pressure(3390.0); // по азоту
    nitrogen_monoxide.set_coefficient_acentricity(0.039); // по азоту

    // Криптон
    Gas_component krypton("Криптон", "Krypton");
    array_gas_component.push_back(&krypton);
    krypton.set_molar_mass(83.80);
    krypton.set_20_z_factor(0.9997); // по азоту
    krypton.set_20_sqrt_b(0.0173); // по азоту
    krypton.set_molar_heat_burning_20_higher(0.0);
    krypton.set_molar_heat_burning_20_lower(0.0);
    krypton.set_mass_heat_burning_20_higher(0.0);
    krypton.set_mass_heat_burning_20_lower(0.0);
    krypton.set_volume_heat_burning_20_higher(0.0);
    krypton.set_volume_heat_burning_20_lower(0.0);
    krypton.set_critical_temperature(126.2); // по азоту
    krypton.set_critical_pressure(3390.0); // по азоту
    krypton.set_coefficient_acentricity(0.039); // по азоту

    // Ксенон
    Gas_component xenon("Ксенон", "Xenon");
    array_gas_component.push_back(&xenon);
    xenon.set_molar_mass(131.29);
    xenon.set_20_z_factor(0.9950); // его
    xenon.set_20_sqrt_b(0.0173); // по азоту
    xenon.set_molar_heat_burning_20_higher(0.0);
    xenon.set_molar_heat_burning_20_lower(0.0);
    xenon.set_mass_heat_burning_20_higher(0.0);
    xenon.set_mass_heat_burning_20_lower(0.0);
    xenon.set_volume_heat_burning_20_higher(0.0);
    xenon.set_volume_heat_burning_20_lower(0.0);
    xenon.set_critical_temperature(126.2); // по азоту
    xenon.set_critical_pressure(3390.0); // по азоту
    xenon.set_coefficient_acentricity(0.039); // по азоту

    // Воздух
    Gas_component air("Воздух", "Air");
    array_gas_component.push_back(&air);
    air.set_molar_mass(28.9626);
    air.set_20_z_factor(0.99963);
    air.set_20_sqrt_b(0.0);
    air.set_molar_heat_burning_20_higher(0.0);
    air.set_molar_heat_burning_20_lower(0.0);
    air.set_mass_heat_burning_20_higher(0.0);
    air.set_mass_heat_burning_20_lower(0.0);
    air.set_volume_heat_burning_20_higher(0.0);
    air.set_volume_heat_burning_20_lower(0.0);
    air.set_critical_temperature(126.2); // по азоту
    air.set_critical_pressure(3390.0); // по азоту
    air.set_coefficient_acentricity(0.039); // по азоту




    return 0;
}

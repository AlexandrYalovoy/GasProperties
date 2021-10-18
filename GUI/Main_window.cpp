//
// Created by alexa on 17.10.2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Main_window.h" resolved

#include "Main_window.h"
#include "ui_Main_window.h"

namespace M_W {
    Main_window::Main_window(std::vector<Gas_component> &_array, QWidget *parent) :
            QWidget(parent), ui(new Ui::Main_window) {
        ui->setupUi(this);
        m_array = _array;
        connect(ui->calc_button, SIGNAL(clicked(bool)), this, SLOT(calculation()));
    }


    Main_window::~Main_window() {
        delete ui;
    }

    /**
     * Принимает _array и достает русские имена методом класса Gas_component
     * складывает их в комбобоксы интерфейса функцией add_item_in_cbox
     * @param _array вектор классов Gas_component
     */
    void Main_window::add_item_cbox_n() {
        add_item_in_cbox("N/A");
        for (Gas_component &item: m_array) {
            add_item_in_cbox(item.get_name_ru());
        }

        // вставка для тестов
        int spam_index{};
        spam_index = ui->item_cbox_1->findText("Метан");
        ui->item_cbox_1->setCurrentIndex(spam_index);

        spam_index = ui->item_cbox_2->findText("Этан");
        ui->item_cbox_2->setCurrentIndex(spam_index);

        spam_index = ui->item_cbox_3->findText("Пропан");
        ui->item_cbox_3->setCurrentIndex(spam_index);

        spam_index = ui->item_cbox_4->findText("н-Бутан");
        ui->item_cbox_4->setCurrentIndex(spam_index);

        spam_index = ui->item_cbox_5->findText("2-Метилпропан");
        ui->item_cbox_5->setCurrentIndex(spam_index);

        spam_index = ui->item_cbox_6->findText("н-Пентан");
        ui->item_cbox_6->setCurrentIndex(spam_index);

        spam_index = ui->item_cbox_7->findText("Азот");
        ui->item_cbox_7->setCurrentIndex(spam_index);

        spam_index = ui->item_cbox_8->findText("Диоксид углерода");
        ui->item_cbox_8->setCurrentIndex(spam_index);

        ui->item_mol_frac_1->insert("0.9247");
        ui->item_mol_frac_2->insert("0.035");
        ui->item_mol_frac_3->insert("0.0098");
        ui->item_mol_frac_4->insert("0.0022");
        ui->item_mol_frac_5->insert("0.0034");
        ui->item_mol_frac_6->insert("0.0006");
        ui->item_mol_frac_7->insert("0.0175");
        ui->item_mol_frac_8->insert("0.0068");

    }

    void Main_window::add_item_in_cbox(std::string _name) {
        QString spam_name_ru;
        spam_name_ru = QString::fromStdString(_name);
        ui->item_cbox_1->addItem(spam_name_ru);
        ui->item_cbox_2->addItem(spam_name_ru);
        ui->item_cbox_3->addItem(spam_name_ru);
        ui->item_cbox_4->addItem(spam_name_ru);
        ui->item_cbox_5->addItem(spam_name_ru);
        ui->item_cbox_6->addItem(spam_name_ru);
        ui->item_cbox_7->addItem(spam_name_ru);
        ui->item_cbox_8->addItem(spam_name_ru);
        ui->item_cbox_9->addItem(spam_name_ru);
        ui->item_cbox_10->addItem(spam_name_ru);
    }

    void Main_window::add_mol_frac_in_array() {
        QString spam_qstring_mol_frac_1 = ui->item_mol_frac_1->text();
        std::string spam_string_mol_frac_1 = ui->item_cbox_1->currentText().toStdString();
        double spam_double_mol_frac_1 = spam_qstring_mol_frac_1.toDouble();

        QString spam_qstring_mol_frac_2 = ui->item_mol_frac_2->text();
        std::string spam_string_mol_frac_2 = ui->item_cbox_2->currentText().toStdString();
        double spam_double_mol_frac_2 = spam_qstring_mol_frac_2.toDouble();

        QString spam_qstring_mol_frac_3 = ui->item_mol_frac_3->text();
        std::string spam_string_mol_frac_3 = ui->item_cbox_3->currentText().toStdString();
        double spam_double_mol_frac_3 = spam_qstring_mol_frac_3.toDouble();

        QString spam_qstring_mol_frac_4 = ui->item_mol_frac_4->text();
        std::string spam_string_mol_frac_4 = ui->item_cbox_4->currentText().toStdString();
        double spam_double_mol_frac_4 = spam_qstring_mol_frac_4.toDouble();

        QString spam_qstring_mol_frac_5 = ui->item_mol_frac_5->text();
        std::string spam_string_mol_frac_5 = ui->item_cbox_5->currentText().toStdString();
        double spam_double_mol_frac_5 = spam_qstring_mol_frac_5.toDouble();

        QString spam_qstring_mol_frac_6 = ui->item_mol_frac_6->text();
        std::string spam_string_mol_frac_6 = ui->item_cbox_6->currentText().toStdString();
        double spam_double_mol_frac_6 = spam_qstring_mol_frac_6.toDouble();

        QString spam_qstring_mol_frac_7 = ui->item_mol_frac_7->text();
        std::string spam_string_mol_frac_7 = ui->item_cbox_7->currentText().toStdString();
        double spam_double_mol_frac_7 = spam_qstring_mol_frac_7.toDouble();

        QString spam_qstring_mol_frac_8 = ui->item_mol_frac_8->text();
        std::string spam_string_mol_frac_8 = ui->item_cbox_8->currentText().toStdString();
        double spam_double_mol_frac_8 = spam_qstring_mol_frac_8.toDouble();

        QString spam_qstring_mol_frac_9 = ui->item_mol_frac_9->text();
        std::string spam_string_mol_frac_9 = ui->item_cbox_9->currentText().toStdString();
        double spam_double_mol_frac_9 = spam_qstring_mol_frac_9.toDouble();

        QString spam_qstring_mol_frac_10 = ui->item_mol_frac_10->text();
        std::string spam_string_mol_frac_10 = ui->item_cbox_10->currentText().toStdString();
        double spam_double_mol_frac_10 = spam_qstring_mol_frac_10.toDouble();


        for (Gas_component &item: m_array) {
            if (item.get_name_ru() == spam_string_mol_frac_1) {
                item.set_molar_fraction_component(spam_double_mol_frac_1);
                std::cout << spam_double_mol_frac_1 << std::endl;
            } else if (item.get_name_ru() == spam_string_mol_frac_2) {
                item.set_molar_fraction_component(spam_double_mol_frac_2);
                std::cout << spam_double_mol_frac_2 << std::endl;
            } else if (item.get_name_ru() == spam_string_mol_frac_3) {
                item.set_molar_fraction_component(spam_double_mol_frac_3);
                std::cout << spam_double_mol_frac_3 << std::endl;
            } else if (item.get_name_ru() == spam_string_mol_frac_4) {
                item.set_molar_fraction_component(spam_double_mol_frac_4);
                std::cout << spam_double_mol_frac_4 << std::endl;
            } else if (item.get_name_ru() == spam_string_mol_frac_5) {
                item.set_molar_fraction_component(spam_double_mol_frac_5);
                std::cout << spam_double_mol_frac_5 << std::endl;
            } else if (item.get_name_ru() == spam_string_mol_frac_6) {
                item.set_molar_fraction_component(spam_double_mol_frac_6);
                std::cout << spam_double_mol_frac_6 << std::endl;
            } else if (item.get_name_ru() == spam_string_mol_frac_7) {
                item.set_molar_fraction_component(spam_double_mol_frac_7);
                std::cout << spam_double_mol_frac_7 << std::endl;
            } else if (item.get_name_ru() == spam_string_mol_frac_8) {
                item.set_molar_fraction_component(spam_double_mol_frac_8);
                std::cout << spam_double_mol_frac_8 << std::endl;
            } else if (item.get_name_ru() == spam_string_mol_frac_9) {
                item.set_molar_fraction_component(spam_double_mol_frac_9);
                std::cout << spam_double_mol_frac_9 << std::endl;
            } else if (item.get_name_ru() == spam_string_mol_frac_10) {
                item.set_molar_fraction_component(spam_double_mol_frac_10);
                std::cout << spam_double_mol_frac_10 << std::endl;
            }
        }
    }

    void Main_window::calculation() {
        ui->molar_mass->clear();
        ui->flow_density_20->clear();
        ui->flow_del_air_20->clear();
        ui->flow_z_factor->clear();
        ui->molar_heat_burning_20_higher->clear();
        ui->molar_heat_burning_20_lower->clear();
        ui->mass_heat_burning_20_higher->clear();
        ui->mass_heat_burning_20_lower->clear();
        ui->volume_heat_burning_20_higher->clear();
        ui->volume_heat_burning_20_lower->clear();
        ui->wobbe_number_higher->clear();
        ui->wobbe_number_lower->clear();


        add_mol_frac_in_array();
        Gas_calculation calculation (m_array);
        QString spam_string{};
        spam_string = QString::number(calculation.get_molar_mass());
        ui->molar_mass->insert(spam_string);

        spam_string = QString::number(calculation.get_flow_density_20());
        ui->flow_density_20->insert(spam_string);

        spam_string = QString::number(calculation.get_flow_density_del_air_20());
        ui->flow_del_air_20->insert(spam_string);

        spam_string = QString::number(calculation.get_flow_z_factor());
        ui->flow_z_factor->insert(spam_string);

        spam_string = QString::number(calculation.get_molar_heat_burning_20_higher());
        ui->molar_heat_burning_20_higher->insert(spam_string);

        spam_string = QString::number(calculation.get_molar_heat_burning_20_lower());
        ui->molar_heat_burning_20_lower->insert(spam_string);

        spam_string = QString::number(calculation.get_mass_heat_burning_20_higher());
        ui->mass_heat_burning_20_higher->insert(spam_string);

        spam_string = QString::number(calculation.get_mass_heat_burning_20_lower());
        ui->mass_heat_burning_20_lower->insert(spam_string);

        spam_string = QString::number(calculation.get_volume_heat_burning_20_higher());
        ui->volume_heat_burning_20_higher->insert(spam_string);

        spam_string = QString::number(calculation.get_volume_heat_burning_20_lower());
        ui->volume_heat_burning_20_lower->insert(spam_string);

        spam_string = QString::number(calculation.get_wobbe_number_higher());
        ui->wobbe_number_higher->insert(spam_string);

        spam_string = QString::number(calculation.get_wobbe_number_lower());
        ui->wobbe_number_lower->insert(spam_string);
    }


} // M_W

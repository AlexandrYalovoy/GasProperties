//
// Created by alexa on 17.10.2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Main_window.h" resolved

#include "Main_window.h"
#include "ui_Main_window.h"

namespace M_W {
    Main_window::Main_window(QWidget *parent) :
            QWidget(parent), ui(new Ui::Main_window) {
        ui->setupUi(this);
    }


    Main_window::~Main_window() {
        delete ui;
    }

    void Main_window::add_item_cbox_n(std::vector<Gas_component> &_array) {
        add_item_in_cbox("N/A");
        for (Gas_component &item: _array) {
            add_item_in_cbox(item.get_name_ru());
        }
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

} // M_W

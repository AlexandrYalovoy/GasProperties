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
} // M_W

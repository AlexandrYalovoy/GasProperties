//
// Created by alexa on 17.10.2021.
//

#ifndef GASPROPERTIES_MAIN_WINDOW_H
#define GASPROPERTIES_MAIN_WINDOW_H

#include <QWidget>

#pragma once

#include "../Chemical_base/Gas_component.h"

namespace M_W {
    QT_BEGIN_NAMESPACE
    namespace Ui { class Main_window; }
    QT_END_NAMESPACE

    class Main_window : public QWidget {
    Q_OBJECT

    public:
        explicit Main_window(QWidget *parent = nullptr);

        void add_item_cbox_n(std::vector<Gas_component> &_array);

        ~Main_window() override;

    private:
        Ui::Main_window *ui;

        void add_item_in_cbox(std::string _name);
    };
} // M_W

#endif //GASPROPERTIES_MAIN_WINDOW_H

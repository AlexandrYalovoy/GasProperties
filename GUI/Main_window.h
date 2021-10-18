//
// Created by alexa on 17.10.2021.
//

#ifndef GASPROPERTIES_MAIN_WINDOW_H
#define GASPROPERTIES_MAIN_WINDOW_H

#include <QWidget>

#pragma once
#include "../Gas_calculation/Gas_calculation.h"
#include "../Chemical_base/Gas_component.h"


namespace M_W {
    QT_BEGIN_NAMESPACE
    namespace Ui { class Main_window; }
    QT_END_NAMESPACE

    class Main_window : public QWidget {
    Q_OBJECT

    public:
        explicit Main_window(std::vector<Gas_component> &_array, QWidget *parent = nullptr);

        // функция присваивает имена в комбобоксы из массива
        void add_item_cbox_n();

        // функция переноса значений из QLineEdit в рабочий массив
        void add_mol_frac_in_array();

//        void calculation();

        ~Main_window() override;

    private:

        std::vector<Gas_component> m_array;
        Ui::Main_window *ui;

        // функция пишет имя во все комбобоксы
        void add_item_in_cbox(std::string _name);

    public slots:
        void calculation();
    };
} // M_W

#endif //GASPROPERTIES_MAIN_WINDOW_H

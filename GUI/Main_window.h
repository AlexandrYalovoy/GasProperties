//
// Created by alexa on 17.10.2021.
//

#ifndef GASPROPERTIES_MAIN_WINDOW_H
#define GASPROPERTIES_MAIN_WINDOW_H

#include <QWidget>

namespace M_W {
    QT_BEGIN_NAMESPACE
    namespace Ui { class Main_window; }
    QT_END_NAMESPACE

    class Main_window : public QWidget {
    Q_OBJECT

    public:
        explicit Main_window(QWidget *parent = nullptr);

        ~Main_window() override;

    private:
        Ui::Main_window *ui;
    };
} // M_W

#endif //GASPROPERTIES_MAIN_WINDOW_H

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QMainWindow>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QFileInfo>

#include "settings.h"

namespace Ui {
class ui_main;
}

class ui_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit ui_main(QWidget *parent = 0);
    ~ui_main();

private:
    Ui::ui_main *ui;
};

#endif // UI_MAIN_H
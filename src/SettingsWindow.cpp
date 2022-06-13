#include "SettingsWindow.h"
#include "ui_SettingsWindow.h"

SettingsWindow::SettingsWindow(QWidget *parent) :
    QDialog(parent),
    _ui(new Ui::SettingsWindow)
{
    _ui->setupUi(this);
    setWindowTitle("Settings");
    setWindowIcon(QIcon(":/images/icon32"));
}

SettingsWindow::~SettingsWindow()
{
    delete _ui;
}

#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(SettingsWindow &settingsWindow, QWidget *parent)
    : QMainWindow(parent)
    , _settingsWindow(settingsWindow)
    , _ui(new Ui::MainWindow)
{
    _ui->setupUi(this);
    connect(_ui->settingsAction, &QAction::triggered, &_settingsWindow, &SettingsWindow::show);
}

MainWindow::~MainWindow()
{
    delete _ui;
}

#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(SettingsWindow &settingsWindow, QWidget *parent)
    : QMainWindow(parent)
    , _settingsWindow(settingsWindow)
    , _ui(new Ui::MainWindow)
{
    _ui->setupUi(this);
    connect(_ui->actionSettings, &QAction::triggered, &_settingsWindow, &SettingsWindow::show);
}

MainWindow::~MainWindow()
{
    delete _ui;
}

void MainWindow::on_actionGitHub_triggered()
{
    QMessageBox::about(this, "GitHub", "<a href='https://github.com/namespace-red/salary-calculator'>GitHub</a>");
}

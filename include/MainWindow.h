#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "SettingsWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(SettingsWindow &settingsWindow, QWidget *parent = nullptr);
    ~MainWindow();

private:
    SettingsWindow &_settingsWindow;
    Ui::MainWindow *_ui;
};
#endif // MAINWINDOW_H

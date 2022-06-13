#include "MainWindow.h"
#include "SettingsWindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QTime>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SettingsWindow settingsWindow;
    MainWindow mainWindow(settingsWindow);

    mainWindow.show();
    return a.exec();
}

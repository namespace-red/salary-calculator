#pragma once

#include <QDialog>

namespace Ui {
class SettingsWindow;
}

class SettingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsWindow(QWidget *parent = nullptr);
    ~SettingsWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::SettingsWindow *ui;
};


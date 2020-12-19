#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QApplication>
#include "loginpg_profilepg.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_privacy_policy_button_welcome_page_clicked();

    void on_privacy_policy_page_back_button_clicked();

    void on_contactus_button_welcome_page_clicked();

    void on_pushButton_clicked();

    void on_singin_button_welcome_page_clicked();


    void on_exit_button_welcome_page_clicked();

private:
    Ui::MainWindow *ui;
    loginPg_profilePg *log_profile_pg;
};
#endif // MAINWINDOW_H

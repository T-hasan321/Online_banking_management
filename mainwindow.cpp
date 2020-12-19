#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    //setStyleSheet("C:/Users/MAINUDDIN/Downloads/kamrul_bro.jpg");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//welcome page to privacy pol and back
void MainWindow::on_privacy_policy_button_welcome_page_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_privacy_policy_page_back_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

//welcome page to contactus page and back
void MainWindow::on_contactus_button_welcome_page_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


//welcome page to login page and back
void MainWindow::on_singin_button_welcome_page_clicked()
{
    hide();
    log_profile_pg = new loginPg_profilePg(this);
    log_profile_pg->show();
}

void MainWindow::on_exit_button_welcome_page_clicked()
{
    this->close();
}

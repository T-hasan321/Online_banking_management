#include "loginpg_profilepg.h"
#include "ui_loginpg_profilepg.h"
#include "mainwindow.h"
MainWindow *main_window;

loginPg_profilePg::loginPg_profilePg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginPg_profilePg)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/MAINUDDIN/Documents/New folder/bank_user_database.db");

    db.open();
    qDebug()<<db.isOpen();
}

loginPg_profilePg::~loginPg_profilePg()
{
    db.close();
    delete ui;
}


void loginPg_profilePg::on_login_button_clicked()
{
    login_username = ui->username_login_input->text();
    login_password = ui->password_login_input->text();

    QSqlQuery qurey;
    qDebug()<<qurey.exec("SELECT * FROM bank_user_data WHERE username = '"+login_username+"' AND password = '"+login_password+"'");

    if(qurey.next())
    {
        ui->stackedWidget->setCurrentIndex(2);

        ui->profile_name_level->setText(qurey.value(0).toString());
        ui->profile_address_level->setText(qurey.value(1).toString());
        ui->profile_gender_level->setText(qurey.value(7).toString());
        ui->profile_phone_level->setText(qurey.value(3).toString());
        ui->profile_nid_level->setText(qurey.value(2).toString());

    }
    else
    {
        QMessageBox::warning(this,"login","wrong username password!!!");
    }
    ui->username_login_input->clear();
    ui->password_login_input->clear();

}

void loginPg_profilePg::on_creat_account_loginpg_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void loginPg_profilePg::on_creat_button_clicked()
{
    creat_name = ui->creat_name_input->text();
    creat_address = ui->creat_address_input->text();
    creat_nid = ui->creat_nid_input->text();
    creat_phone = ui->creat_phone_input->text();
    creat_username = ui->creat_user_name_input->text();
    creat_password = ui->creat_password_input->text();
    creat_retype_pass = ui->creat_retype_pass_input->text();


    if(ui->male_button->isChecked())
    {
        creat_gender = "male";
    }
    else
    {
        creat_gender = "female";
    }


    QSqlQuery query;
    qDebug()<<query.exec("INSERT INTO bank_user_data (name, address, NID, phone, username, password, retype_pass, gender) VALUES ('"+creat_name+"' , '"+creat_address+"' , '"+creat_nid+"' , '"+creat_phone+"' , '"+creat_username+"' , '"+creat_password+"' , '"+creat_retype_pass+"' , '"+creat_gender+"')");
    QMessageBox::information(this,"creat","creat is successful,please login");

    ui->creat_name_input->clear();
    ui->creat_address_input->clear();
    ui->creat_nid_input->clear();
    ui->creat_phone_input->clear();
    ui->creat_user_name_input->clear();
    ui->creat_password_input->clear();
    ui->creat_retype_pass_input->clear();
}


//Back to mainwindow
void loginPg_profilePg::on_back_loginpg_button_clicked()
{
    hide();
    main_window = new MainWindow(this);
    main_window->show();
}

void loginPg_profilePg::on_back_login_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void loginPg_profilePg::on_profile_logout_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

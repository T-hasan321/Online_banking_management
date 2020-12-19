#ifndef LOGINPG_PROFILEPG_H
#define LOGINPG_PROFILEPG_H

#include <QDialog>
#include <QDebug>
#include<QMessageBox>
#include<QSqlDatabase>
#include <QSqlQuery>
namespace Ui {
class loginPg_profilePg;
}

class loginPg_profilePg : public QDialog
{
    Q_OBJECT

public:
    explicit loginPg_profilePg(QWidget *parent = nullptr);
    ~loginPg_profilePg();

private slots:
    void on_login_button_clicked();

    void on_creat_account_loginpg_button_clicked();


    void on_creat_button_clicked();





    void on_back_loginpg_button_clicked();

    void on_back_login_button_clicked();



    void on_profile_logout_button_clicked();

private:
    Ui::loginPg_profilePg *ui;
    QString login_username,login_password,creat_name,creat_address,creat_nid,creat_phone,creat_username,creat_password,creat_retype_pass,creat_gender;
    QSqlDatabase db;

};

#endif // LOGINPG_PROFILEPG_H

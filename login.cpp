#include "login.h"
#include "ui_login.h"
#include<QMessageBox>
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}
void Login::on_pushButton_submit_clicked()
{
    if(ui->lineEdit_password->text() == "test" && ui->lineEdit_username->text()  == "test"){
        QMessageBox::information(this,"Login","Login Successfull!!");
        teacherDashboard = new TeacherDashboard();
        teacherDashboard->show();
        this->hide();
    }
    else {
        QMessageBox::information(this,"Login","Login Faild!!\nPlease Try Again!!");
    }
}

#include "kuizu.h"
#include "ui_kuizu.h"
#include "login.h"
Kuizu::Kuizu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Kuizu)
{
    ui->setupUi(this);
}

Kuizu::~Kuizu()
{
    delete ui;
}

void Kuizu::on_actionExit_triggered()
{
    QApplication::exit();
}

void Kuizu::on_pushButton_teacher_clicked()
{
    login = new Login();
    this->hide();
    login->show();
}

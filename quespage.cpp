#include "quespage.h"
#include "ui_quespage.h"
QuesPage::QuesPage(QStackedWidget *mywidget,TeacherDashboard *parent) :
    QWidget(parent),
    ui(new Ui::QuesPage)
{
    this->parent = parent;
    QuesPage::tdb = mywidget;
    ui->setupUi(this);
    ui->radioButton_A->setChecked(true);
}
QuesPage::~QuesPage()
{
    delete ui;
}

void QuesPage::on_pushButton_addQues_clicked()
{
    QString quesdesc = ui->lineEdit_QuesDesc->text();
    QString ans_1 = ui->lineEdit_ans_1->text();
    QString ans_2 = ui->lineEdit_ans_2->text();
    QString ans_3 = ui->lineEdit_ans_3->text();
    QString ans_4 = ui->lineEdit_ans_4->text();
    char ans = 1;
    if(ui->radioButton_A->isChecked()){
        ans = 1;
    }
    else if (ui->radioButton_B->isChecked()) {
        ans = 2;
    }
    else if (ui->radioButton_C->isChecked()) {
        ans = 3;
    }
    else {
        ans = 4;
    }
    parent->addToQlist(quesdesc,ans_1,ans_2,ans_3,ans_4,ans);
    QuesPage::tdb->setCurrentIndex(2);
}

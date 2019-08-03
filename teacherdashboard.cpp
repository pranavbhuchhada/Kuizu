#include "teacherdashboard.h"
#include "ui_teacherdashboard.h"
#include "quespage.h"
#include <QtDebug>
TeacherDashboard::TeacherDashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeacherDashboard)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    this->ques_counter=0;
}

TeacherDashboard::~TeacherDashboard()
{
    delete ui;
}
void TeacherDashboard::on_pushButton_createQuiz_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void TeacherDashboard::on_pushButton_addQue_clicked()
{
    ui->stackedWidget->insertWidget(3 + ques_counter++ ,new QuesPage(ui->stackedWidget,this));
    ui->stackedWidget->setCurrentIndex(2+ques_counter);
}
void TeacherDashboard::on_pushButton_submitQuiz_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void TeacherDashboard::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void TeacherDashboard::on_pushButton_title_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void TeacherDashboard::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()+1);
}

void TeacherDashboard::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()-1);
}
void TeacherDashboard::addToQlist(QString ques_desc,QString ans1,QString ans2,QString ans3,QString ans4,char ans){
    myQueslist.push_back(new QuizQues(ques_desc,ans1,ans2,ans3,ans4,ans));
    refreshQuesList();
}
void TeacherDashboard::refreshQuesList(){
    QLayout* quesListLayout = ui->stackedWidget->widget(2)->layout();
    list <QuizQues*> :: iterator it;
    QVBoxLayout *Questions = new QVBoxLayout();
    QHBoxLayout *myQuestion;
    for (it = myQueslist.begin();it != myQueslist.end();it++) {
        myQuestion = new QHBoxLayout();
        myQuestion->addWidget(new QLabel((*it)->ques_desc));
        myQuestion->addWidget(new QLabel((*it)->ans1));
        myQuestion->addWidget(new QLabel((*it)->ans2));
        myQuestion->addWidget(new QLabel((*it)->ans3));
        myQuestion->addWidget(new QLabel((*it)->ans4));
        Questions->addItem(myQuestion);
    }
    quesListLayout->addWidget(new  QLabel("HELLO") );
    ui->stackedWidget->widget(2)->setLayout(quesListLayout);
}


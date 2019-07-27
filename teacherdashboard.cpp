#include "teacherdashboard.h"
#include "ui_teacherdashboard.h"
TeacherDashboard::TeacherDashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeacherDashboard)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
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
    this->addQueWidget();
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
void TeacherDashboard::on_pushButton_done(){

}

void TeacherDashboard::addQueWidget(){
    QWidget* queFrame = new QWidget();
    QVBoxLayout* myLayout = new QVBoxLayout();

    QLabel* quesDesc = new QLabel();
    quesDesc->setText("Question Description");
    myLayout->addWidget(quesDesc);
    QLineEdit * que = new QLineEdit();
    myLayout->addWidget(que);

    QLabel* answer1 = new QLabel();
    answer1->setText("Answer 1");
    myLayout->addWidget(answer1);
    QLineEdit * ans1 = new QLineEdit();
    myLayout->addWidget(ans1);

    QLabel* answer2 = new QLabel();
    answer2->setText("Answer 2");
    myLayout->addWidget(answer2);
    QLineEdit * ans2 = new QLineEdit();
    myLayout->addWidget(ans2);

    QLabel* answer3 = new QLabel();
    answer3->setText("Answer 3");
    myLayout->addWidget(answer3);
    QLineEdit * ans3 = new QLineEdit();
    myLayout->addWidget(ans3);

    QLabel* answer4 = new QLabel();
    answer4->setText("Answer 4");
    myLayout->addWidget(answer4);
    QLineEdit * ans4 = new QLineEdit();
    myLayout->addWidget(ans4);

    QPushButton* done = new QPushButton();
    done->setText("Add Question");
    connect(done,SIGNAL(clicked()),this,SLOT(on_pushButton_done()));
    queFrame->setLayout(myLayout);
    ui->stackedWidget->insertWidget(3,queFrame);
}

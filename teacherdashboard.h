#ifndef TEACHERDASHBOARD_H
#define TEACHERDASHBOARD_H

#include <QDialog>
#include <iostream>
#include <list>
#include <iterator>
#include <quizques.h>
using namespace std;
namespace Ui {
class TeacherDashboard;
}

class TeacherDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherDashboard(QWidget *parent = nullptr);
    ~TeacherDashboard();

    void addToQlist(QString ques_desc,QString ans1,QString ans2,QString ans3,QString ans4,char ans);

    void refreshQuesList();

private slots:
    void on_pushButton_createQuiz_clicked();

    void on_pushButton_addQue_clicked();

    void on_pushButton_submitQuiz_clicked();

    void on_pushButton_clicked();

    void on_pushButton_title_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::TeacherDashboard *ui;
    int ques_counter;
    list <QuizQues*> myQueslist;
};
#endif // TEACHERDASHBOARD_H

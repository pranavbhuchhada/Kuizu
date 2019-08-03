#ifndef QUIZQUES_H
#define QUIZQUES_H
#include<QString>
class QuizQues
{
public:
    QuizQues();
    QString ques_desc;
    QString ans1;
    QString ans2;
    QString ans3;
    QString ans4;
    char ans;
    QuizQues(QString ques_desc,QString ans1,QString ans2,QString ans3,QString ans4,char ans);
};

#endif // QUIZQUES_H

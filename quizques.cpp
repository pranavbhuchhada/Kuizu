#include "quizques.h"

QuizQues::QuizQues()
{

}
QuizQues::QuizQues(QString ques_desc,QString ans1,QString ans2,QString ans3,QString ans4,char ans)
{
    this->ques_desc = ques_desc;
    this->ans1 = ans1;
    this->ans2 = ans2;
    this->ans3 = ans3;
    this->ans4 = ans4;
    this->ans = ans;
}

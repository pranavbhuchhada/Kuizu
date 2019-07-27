#include "quizques.h"

QuizQues::QuizQues()
{

}
QuizQues::QuizQues(char* ques_desc,char* ans1,char* ans2,char* ans3,char* ans4,char** correct_answer)
{
    this->ques_desc = ques_desc;
    this->ans1 = ans1;
    this->ans2 = ans2;
    this->ans3 = ans3;
    this->ans4 = ans4;
    this->correct_answer = correct_answer;
}

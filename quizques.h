#ifndef QUIZQUES_H
#define QUIZQUES_H

class QuizQues
{
public:
    QuizQues();
    char* ques_desc;
    char* ans1;
    char* ans2;
    char* ans3;
    char* ans4;
    char** correct_answer;
    QuizQues(char* ques_desc,char* ans1,char* ans2,char* ans3,char* ans4,char** correct_answer);
};

#endif // QUIZQUES_H

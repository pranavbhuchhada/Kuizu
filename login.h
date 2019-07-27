#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "teacherdashboard.h"
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_submit_clicked();

private:
    Ui::Login *ui;
    TeacherDashboard *teacherDashboard;
};

#endif // LOGIN_H

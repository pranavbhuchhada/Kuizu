#ifndef TEACHERDASHBOARD_H
#define TEACHERDASHBOARD_H

#include <QDialog>
namespace Ui {
class TeacherDashboard;
}

class TeacherDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherDashboard(QWidget *parent = nullptr);
    ~TeacherDashboard();

private slots:
    void on_pushButton_createQuiz_clicked();

    void on_pushButton_addQue_clicked();

    void on_pushButton_submitQuiz_clicked();

    void on_pushButton_clicked();

    void on_pushButton_title_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void addQueWidget();

    void on_pushButton_done();
private:
    Ui::TeacherDashboard *ui;
};
#endif // TEACHERDASHBOARD_H

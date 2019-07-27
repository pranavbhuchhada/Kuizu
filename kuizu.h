#ifndef KUIZU_H
#define KUIZU_H

#include <QMainWindow>
namespace Ui {
class Kuizu;
}

class Kuizu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Kuizu(QWidget *parent = nullptr);
    ~Kuizu();

private slots:
    void on_actionExit_triggered();

    void on_pushButton_teacher_clicked();

private:
    Ui::Kuizu *ui;
    QDialog *login;
};

#endif // KUIZU_H

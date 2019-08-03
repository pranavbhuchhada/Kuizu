#ifndef QUESPAGE_H
#define QUESPAGE_H

#include <QWidget>
#include <QStackedWidget>
#include<teacherdashboard.h>
namespace Ui {
class QuesPage;
}

class QuesPage : public QWidget
{
    Q_OBJECT

public:
    QStackedWidget *tdb;
    TeacherDashboard *parent;
    explicit QuesPage(QStackedWidget *mywidget,TeacherDashboard *parent = nullptr);
    ~QuesPage();

private slots:
    void on_pushButton_addQues_clicked();

private:
    Ui::QuesPage *ui;
};

#endif // QUESPAGE_H

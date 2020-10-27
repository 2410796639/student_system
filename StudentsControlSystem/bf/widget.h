#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "class.h"
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QTimer>
#include <QTimerEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT


public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    Class myclass;
    QFile file_begin;
    QFile file_end;
    QString defaultCode;


    //学生端学生姓名
    QString stu_name;
    //学生端获取学生姓名的对话框
    QDialog *Get_information;
    //管理端获取密码的对话框
    QDialog *Get_code;

    //管理端修改密码的对话框
    QDialog *Change_Code;

 /*   //学生端基本信息查询的对话框
    QDialog *Search_student;
    //学生端班级信息查询的对话框
    QDialog *Search_class;
    //学生端课程信息查询的对话框
    QDialog *Search_subject;
    //学生端成绩信息查询的对话框
    QDialog *Search_score;
    //学生端奖惩信息查询的对话框
    QDialog *Search_pride;
    //管理端学生信息管理的对话框
    QDialog *Manage_student;
    //管理端班级信息管理的对话框
    QDialog *Manage_class;
    //管理端课程信息管理的对话框
    QDialog *Manage_subject;
    //管理端成绩信息管理的对话框
    QDialog *Manage_score;
    //管理端奖惩信息管理的对话框
    QDialog *Manage_pride;*/
    //重写关闭事件
    void closeEvent(QCloseEvent *event);

protected:

    void timerEvent(QTimerEvent*);

    void paintEvent(QPaintEvent*);

private slots:

/*    void on_back_1_clicked();

    void on_back_2_clicked();

    void on_basicinformation_clicked();

    void on_student_information_manage_clicked();

//    void on_class_information_manage_clicked();

    void on_subject_information_manage_clicked();

    void on_score_information_manage_clicked();

    void on_pride_information_manage_clicked();

//   void on_classinformation_clicked();

    void on_subject_search_clicked();

    void on_score_search_clicked();

    void on_pride_search_clicked();*/

    int judge_pride(QString detail);
    int judge_punishment(QString detail);
    QString change_pride(int count);
    QString change_punishment(int count);
    void on_student_information_manage_clicked();

    void on_subject_information_manage_clicked();

    void on_score_information_manage_clicked();

    void on_pride_information_manage_clicked();

    void on_back_1_clicked();

    void on_basicinformation_clicked();

    void on_subject_search_clicked();

    void on_score_search_clicked();

    void on_delete_page_clicked();

    void on_pride_search_clicked();

    void on_back_2_clicked();

    void on_add_page_clicked();

    int samename(QString Name);

private:
    Students *samename_inf[100];

    int timeID;

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H

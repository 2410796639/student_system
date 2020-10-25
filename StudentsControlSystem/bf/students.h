#ifndef STUDENTS_H
#define STUDENTS_H

#include <QObject>
#include "course.h"
#include <QString>

class Students : public QObject
{
    Q_OBJECT

private:
    //名字
    QString Name;
    //序号
    int ID_number;
    //电话号码
    QString Phone_number;
    //性别
    QString Gender;
    //籍贯
    QString Place;
    //出生年月
    QString Birthday;


    //奖励情况
    int Pride[8] = {0};
    //惩罚情况
    int Punishment[8] = {0};






public:
    explicit Students(QObject *parent = nullptr);
    //课程情况
    Course Mycourse[15];
    //链表连接指针
    Students *next = NULL;
    Students *front = NULL;

    void setName(QString other);
    void setID_number(int other);
    void setPhone_number(QString other);
    void setGender(QString other);
    void setPlace(QString other);
    void setBirthday(QString other);
    void setPride(int count,int detail);
    void setPunishment(int count,int detail);

    QString getName();
    int getID_number();
    QString getPhone_number();
    QString getGender();
    QString getPlace();
    QString getBirthday();
    int getPride(int count);
    int getPunishment(int count);

signals:

};

#endif // STUDENTS_H

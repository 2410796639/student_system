#ifndef COURSE_H
#define COURSE_H

#include <QObject>

class Course : public QObject
{
    Q_OBJECT

private:
    //课程基本信息
    //课程名
    QString Course_name;
//    //课程学分
//    float Credit;
    //课程获得分数
    float Grade;

public:
    explicit Course(QObject *parent = nullptr);

    void setCourse_name(QString other);
//    void setCredit(float other);
    void setGrade(float other);

    QString getCourse_name();
//    float getCredit();
    float getGrade();



signals:

};

#endif // COURSE_H

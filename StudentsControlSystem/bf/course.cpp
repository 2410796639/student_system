#include "course.h"

Course::Course(QObject *parent) : QObject(parent)
{

}

void Course::setCourse_name(QString other)
{
    Course_name.clear();
    Course_name += other;
}

void Course::setCredit(int other)
{
    Credit = other;
}

void Course::setGrade(float other)
{
    Grade = other;
}

QString Course::getCourse_name()
{
    return Course_name;
}

int Course::getCredit()
{
    return Credit;
}

float Course::getGrade()
{
    return Grade;
}

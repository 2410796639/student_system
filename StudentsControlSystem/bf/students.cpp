#include "students.h"

Students::Students(QObject *parent) : QObject(parent)
{

}



void Students::setName(QString other)
{
    Name.clear();
    Name += other;
}

void Students::setID_number(int other)
{
    ID_number = other;
}

void Students::setPhone_number(QString other)
{
    Phone_number.clear();
    Phone_number += other;
}

void Students::setGender(QString other)
{
    Gender = other;
}

void Students::setPlace(QString other)
{
    Place.clear();
    Place += other;
}

void Students::setBirthday(QString other)
{
    Birthday.clear();
    Birthday += other;
}

void Students::setPride(int count, int detail)
{
    if(count > 8)
    {
        return;
    }
    Pride[count-1] = detail;
}

void Students::setPunishment(int count, int detail)
{
    if(count > 8)
    {
        return;
    }
    Punishment[count-1] = detail;
}

QString Students::getName()
{
    return Name;
}

int Students::getID_number()
{
    return ID_number;
}

QString Students::getPhone_number()
{
    return Phone_number;
}

QString Students::getGender()
{
    return Gender;
}

QString Students::getPlace()
{
    return Place;
}

QString Students::getBirthday()
{
    return Birthday;
}

int Students::getPride(int count)
{
    if(count > 8)
    {
        return 0;
    }
    return Pride[count-1];
}

int Students::getPunishment(int count)
{
    if(count > 8)
    {
        return 0;
    }
    return Punishment[count-1];
}

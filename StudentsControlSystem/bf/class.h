#ifndef CLASS_H
#define CLASS_H

#include "students.h"


class Class
{

private:

    //班级学生数量
    int Students_sum = 0;

    //学生序号
    int Students_id = 0;



public:
    Class();

    //学生链表头尾
    Students *start = NULL;
    Students *end = NULL;




    void addStudents(QString Name1,QString Phone_number1,QString Gender1,QString Place1,QString Birthday1);
    void moveStudents(QString Name1);
    void moveStudents(int ID_number1);
    Students* selectStudents(QString Name1);
    Students* selectStudents(int ID_number1);
    int getStudents_rand(int ID_number1);
    int getStudents_rand(QString Name1);

    int getStudents_sum();

};

#endif // CLASS_H

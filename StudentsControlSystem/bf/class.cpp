#include "class.h"

Class::Class()
{

}

void Class::addStudents(QString Name1, QString Phone_number1, QString Gender1, QString Place1, QString Birthday1)
{
    if(start == NULL)
    {
        Students *p1 = new Students;
        start = p1;
        end = p1;
        start->front = NULL;
        end->next = NULL;
        Students_sum++;
        Students_id++;
        p1->setName(Name1);
        p1->setPhone_number(Phone_number1);
        p1->setGender(Gender1);
        p1->setPlace(Place1);
        p1->setBirthday(Birthday1);
        p1->setID_number(Students_id);

    }
    else
    {
        Students *p1 = new Students;
        end->next = p1;
        p1->front = end;
        end = p1;
        end->next = NULL;
        Students_sum++;
        Students_id++;
        p1->setName(Name1);
        p1->setPhone_number(Phone_number1);
        p1->setGender(Gender1);
        p1->setPlace(Place1);
        p1->setBirthday(Birthday1);
        p1->setID_number(Students_id);

    }
}

void Class::moveStudents(QString Name1)
{
    Students *p1 = start;

    //寻找要剔除的学生
    for(;;)
    {
        if(p1->getName() == Name1)
        {
            break;
        }
        p1 = p1->next;
        //如果没有，则结束
        if(p1 == NULL)
        {
            return;
        }
    }
    if(p1 == start)
    {
        if(start == end)
        {
            start = NULL;
            end = NULL;
        }
        else
        {
            start = p1->next;
            start->front = NULL;
        }
        delete p1;
        Students_sum--;
    }
    else if(p1 == end)
    {
        end = p1->front;
        end->next = NULL;
        delete  p1;
        Students_sum--;
    }
    else
    {
        p1->front->next = p1->next;
        delete p1;
        Students_sum--;
    }
}

void Class::moveStudents(int ID_number1)
{
    Students *p1 = start;

    //寻找要剔除的学生
    for(;;)
    {
        if(p1->getID_number() == ID_number1)
        {
            break;
        }
        p1 = p1->next;
        //如果没有，则结束
        if(p1 == NULL)
        {
            return;
        }
    }
    if(p1 == start)
    {
        if(start == end)
        {
            start = NULL;
            end = NULL;
        }
        else
        {
            start = p1->next;
            start->front = NULL;
        }
        delete p1;
        Students_sum--;
    }
    else if(p1 == end)
    {
        end = p1->front;
        end->next = NULL;
        delete  p1;
        Students_sum--;
    }
    else
    {
        p1->front->next = p1->next;
        delete p1;
        Students_sum--;
    }
}

Students* Class::selectStudents(QString Name1)
{
    Students *p1 = start;
    //寻找要剔除的学生
    for(;;)
    {
        if(p1->getName() == Name1)
        {
            return p1;
        }
        p1 = p1->next;
        //如果没有，则结束
        if(p1 == NULL)
        {
            return NULL;
        }
    }

}

Students* Class::selectStudents(int ID_number1)
{
    Students *p1 = start;
    //寻找要剔除的学生
    for(;;)
    {
        if(p1->getID_number() == ID_number1)
        {
            return p1;
        }
        p1 = p1->next;
        //如果没有，则结束
        if(p1 == NULL)
        {
            return NULL;
        }
    }
}


int Class::getStudents_sum()
{
    return Students_sum;
}
int Class::getStudents_rand(int ID_number1)
{
    Students* p1 = start;
    for(;;)
    {
        if(p1->getID_number() == ID_number1)
        {
            break;
        }
        p1 = p1->next;
        if(p1 == NULL)
        {
            return -1;
        }
    }
    int rand = 1;
    Students* p2 = start;
    for(int i=0;i<Students_sum;i++)
    {
        if(p2 == p1)
        {
            p2 = p2->next;
            continue;
        }
        if(p2->getAverageGrade() > p1->getAverageGrade())
        {
            rand++;
        }
        p2 = p2->next;

    }
    return rand;

}
int Class::getStudents_rand(QString Name1)
{
    Students* p1 = start;
       for(;;)
       {
           if(p1->getName() == Name1)
           {
               break;
           }
           p1 = p1->next;
           if(p1 == NULL)
           {
               return -1;
           }
       }
       int rand = 1;
       Students* p2 = start;
       for(int i=0;i<Students_sum;i++)
       {
           if(p2 == p1)
           {
               p2 = p2->next;
               continue;
           }
           if(p2->getAverageGrade() > p1->getAverageGrade())
           {
               rand++;
           }
           p2 = p2->next;

       }
       return rand;

}

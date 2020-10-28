#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>
#include <QCloseEvent>
#include <QFile>
#include <QTextCodec>
#include <QFileDevice>
#include <QLineEdit>
#include <QPaintEvent>
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    file_begin.setFileName("../file/code.txt");
    file_begin.open(QIODevice::ReadOnly);
    defaultCode.clear();
    defaultCode += file_begin.readLine();
    file_begin.close();
    file_begin.setFileName("../file/MyclassStu1.txt");
            file_begin.open(QIODevice::ReadOnly);
            for (;;)
            {

                QString str = file_begin.readLine();
                if(str == "") break;
                QString tName = "";
                QString tPhone = "";
                QString tGender = "";
                QString tPlace = "";
                QString tBirthday = "";
                int kong = 0;
                int tPride[8];
                int tPunishment[8];

                for(int i = kong;;i++)
                {
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    tName += str[i];

                }
                for(int i =kong;;i++)
                {
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    tPhone += str[i];
                }
                for(int i =kong;;i++)
                {
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    tGender += str[i];
                }
                for(int i= kong;;i++)
                {
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    tPlace += str[i];
                }
                for(int i= kong ;; i++)
                {
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    tBirthday += str[i];
                }
                myclass.addStudents(tName,tPhone,tGender,tPlace,tBirthday);
                Students *p1 = myclass.selectStudents(tName);
                for(int i=kong ;; i++)
                {
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    QString tstr = "";
                    tstr += str[i];
                    tPride[i-kong] = tstr.toInt();
                    p1->setPride(i-kong+1,tPride[i-kong]);
                }
                for(int i =kong;;i++)
                {
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    QString tstr = "";
                    tstr +=str[i];
                    tPunishment[i-kong] = tstr.toInt();
                    p1->setPunishment(i-kong +1,tPunishment[i-kong]);
                }
                QString Tcourse_cre = "";
                QString Tcourse_nam = "";
                QString Tcourse_sum = "";
                for(int i=kong ;; i++)
                {
                    if(i - kong ==0)
                    {
                        Tcourse_cre += str[i];
                        continue;
                    }
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    if(i-kong<5)
                    {
                        Tcourse_nam += str[i];
                        continue;
                    }
                    Tcourse_sum += str[i];

                }
                p1->Mycourse[0].setCredit(Tcourse_cre.toInt());
                p1->Mycourse[0].setCourse_name(Tcourse_nam);
                p1->Mycourse[0].setGrade(Tcourse_sum.toFloat());
                Tcourse_cre.clear();
                Tcourse_nam.clear();
                Tcourse_sum.clear();
                for(int i=kong ;; i++)
                {
                    if(i - kong ==0)
                    {
                        Tcourse_cre += str[i];
                        continue;
                    }
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    if(i-kong<5)
                    {
                        Tcourse_nam += str[i];
                        continue;
                    }
                    Tcourse_sum += str[i];

                }
                p1->Mycourse[1].setCredit(Tcourse_cre.toInt());
                p1->Mycourse[1].setCourse_name(Tcourse_nam);
                p1->Mycourse[1].setGrade(Tcourse_sum.toFloat());
                Tcourse_cre.clear();
                Tcourse_nam.clear();
                Tcourse_sum.clear();
                for(int i=kong ;; i++)
                {
                    if(i - kong ==0)
                    {
                        Tcourse_cre += str[i];
                        continue;
                    }
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    if(i-kong<5)
                    {
                        Tcourse_nam += str[i];
                        continue;
                    }
                    Tcourse_sum += str[i];

                }
                p1->Mycourse[2].setCredit(Tcourse_cre.toInt());
                p1->Mycourse[2].setCourse_name(Tcourse_nam);
                p1->Mycourse[2].setGrade(Tcourse_sum.toFloat());
                Tcourse_cre.clear();
                Tcourse_nam.clear();
                Tcourse_sum.clear();
                for(int i=kong ;; i++)
                {
                    if(i - kong ==0)
                    {
                        Tcourse_cre += str[i];
                        continue;
                    }
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    if(i-kong<5)
                    {
                        Tcourse_nam += str[i];
                        continue;
                    }
                    Tcourse_sum += str[i];

                }
                p1->Mycourse[3].setCredit(Tcourse_cre.toInt());
                p1->Mycourse[3].setCourse_name(Tcourse_nam);
                p1->Mycourse[3].setGrade(Tcourse_sum.toFloat());
                Tcourse_cre.clear();
                Tcourse_nam.clear();
                Tcourse_sum.clear();
                for(int i=kong ;; i++)
                {
                    if(i - kong ==0)
                    {
                        Tcourse_cre += str[i];
                        continue;
                    }
                    if(str[i] == '\t')
                    {
                        kong = i+1;
                        break;
                    }
                    if(i-kong<5)
                    {
                        Tcourse_nam += str[i];
                        continue;
                    }
                    Tcourse_sum += str[i];

                }
                p1->Mycourse[4].setCredit(Tcourse_cre.toInt());
                p1->Mycourse[4].setCourse_name(Tcourse_nam);
                p1->Mycourse[4].setGrade(Tcourse_sum.toFloat());
                Tcourse_cre.clear();
                Tcourse_nam.clear();
                Tcourse_sum.clear();


            }
            file_begin.close();
//    myclass.addStudents("张三","13515128683","男","上海","2000/02");
//    Students *p2=myclass.selectStudents("张三");
/*    p2->Mycourse[0].setCourse_name("");
    p2->Mycourse[1].setCourse_name("");
    p2->Mycourse[2].setCourse_name("");
    p2->Mycourse[3].setCourse_name("");
    p2->Mycourse[4].setCourse_name("");
    p2->Mycourse[0].setGrade(1);
    p2->Mycourse[1].setGrade(1);
    p2->Mycourse[2].setGrade(1);
    p2->Mycourse[3].setGrade(1);
    p2->Mycourse[4].setGrade(1);*/
            qDebug() << myclass.getStudents_rand("顾芷瑜");

    //为welcome页面实现功能
        //Students
        Get_information = new QDialog(this);
        QLabel *label_tip = new QLabel(Get_information);
        Get_information->setFixedSize(800,400);
        label_tip->setText("输入你的姓名:");
        label_tip->setGeometry(100,20,200,200);
        QLineEdit *line_name = new QLineEdit(Get_information);
        line_name->setGeometry(400,90,300,50);
        QPushButton *Getinformation_pb = new QPushButton(Get_information);
        Getinformation_pb->setGeometry(350,200,150,50);
        Getinformation_pb->setText("确认");
        connect(Getinformation_pb,&QPushButton::clicked,
                [=]()
        {
           stu_name.clear();
           stu_name += line_name->text();

           //判断是否输入字符串
           if(stu_name == "")
           {
               QMessageBox::warning(Get_information,"错误","未输入姓名");
               return;
           }


           //判断输入学生是否存在
           bool Exsit = 0;
           Students *p1 = myclass.start;
           for(;;)
           {

               if(p1 == NULL)
                   break;
               if(p1->getName() == stu_name)
               {
                   Exsit = 1;
                   break;
               }
               p1 = p1->next;
           }
           if(Exsit == 0)
           {
               QMessageBox::warning(Get_information,"错误","无此学生");
               return;
           }


           Get_information->close();
           ui->stackedWidget->setCurrentWidget(ui->StudentsPage);
           return;
        });
        connect(ui->StudentsTO,&QPushButton::clicked,
                [=]()
        {
            Get_information->exec();
            line_name->clear();

        });
        /*
         * 该过程将学生输入的姓名传递到了STU_NAME字符串中，便于后续操作
        */


        //Control
        Get_code = new QDialog(this);
        QLabel *label_tip1 = new QLabel(Get_code);
        Get_code->setFixedSize(800,400);
        label_tip1->setText("输入密码:");
        label_tip1->setGeometry(100,20,200,200);
        QLineEdit *line_code = new QLineEdit(Get_code);
        line_code->setEchoMode(QLineEdit::Password);
        line_code->setGeometry(400,90,300,50);
        QPushButton *Getcode_pb = new QPushButton(Get_code);
        Getcode_pb->setGeometry(350,200,150,50);
        Getcode_pb->setText("确认");


        //此处往下为修改密码功能:
        QPushButton *Changecode = new QPushButton(Get_code);
        Changecode->setGeometry(660,350,70,30);
        Changecode->setText("修改密码");

        connect(Changecode,&QPushButton::clicked,
                [=]()
        {
            Change_Code = new QDialog(Get_code);
            Change_Code->setFixedSize(800,400);

            QLabel *change_tip1 = new QLabel(Change_Code);
            change_tip1->setText("请输入原密码：");
            change_tip1->setGeometry(100,30,100,100);

            QLineEdit *primCode = new QLineEdit(Change_Code);
            primCode->setEchoMode(QLineEdit::Password);
            primCode->setGeometry(350,50,300,40);

            QLabel *change_tip2 = new QLabel(Change_Code);
            change_tip2->setText("修改后密码：");
            change_tip2->setGeometry(100,75,100,100);

            QLineEdit *newCode = new QLineEdit(Change_Code);
            newCode->setEchoMode(QLineEdit::Password);
            newCode->setGeometry(350,100,300,40);

            QLabel *change_tip3 = new QLabel(Change_Code);
            change_tip3->setText("再次输入新密码：");
            change_tip3->setGeometry(100,120,120,100);

            QLineEdit *reCode = new QLineEdit(Change_Code);
            reCode->setEchoMode(QLineEdit::Password);
            reCode->setGeometry(350,150,300,40);

            QPushButton *ChangeSure = new QPushButton(Change_Code);
            ChangeSure->setGeometry(360,250,100,30);
            ChangeSure->setText("确定");

            QPushButton *ChangeCancel = new QPushButton(Change_Code);
            ChangeCancel->setGeometry(500,250,100,30);
            ChangeCancel->setText("取消");

            connect(ChangeSure,&QPushButton::clicked,
                    [=]()
            {
                QString PrimCodeText;
                PrimCodeText.clear();
                PrimCodeText+=primCode->text();

                QString NewCodeText;
                NewCodeText.clear();
                NewCodeText+=newCode->text();

                QString ReCodeText;
                ReCodeText.clear();
                ReCodeText+=reCode->text();

                if(PrimCodeText==""||ReCodeText==""||defaultCode=="")
                {
                    QMessageBox::warning(Change_Code,"错误","请不要留空！");
                }

                else
                {
                    if(PrimCodeText!=defaultCode)
                    {
                        QMessageBox::warning(Change_Code,"错误","原密码输入错误！");
                    }
                    else if(NewCodeText!=ReCodeText)
                    {
                        QMessageBox::warning(Change_Code,"错误","两次新密码不一致！");
                    }
                    else {
                        defaultCode.clear();
                        defaultCode += NewCodeText;

                        QMessageBox::about(Change_Code,"提示","修改成功！");

                        Change_Code->close();
                    }
                }
            });


            connect(ChangeCancel,&QPushButton::clicked,
                    [=]()
            {
                Change_Code->close();
            });
        });

        connect(Getcode_pb,&QPushButton::clicked,
                [=]()
        {
           QString codestr;
           codestr.clear();
           codestr += line_code->text();
           if(codestr == defaultCode)
           {
               Get_code->close();
               ui->stackedWidget->setCurrentWidget(ui->ControlPage);
           }
           else
           {
               QMessageBox::warning(Get_code,"错误","密码错误！");
               return;
           }

        });
        connect(ui->ControlTO,&QPushButton::clicked,
                [=]()
        {
           Get_code->exec();
           line_code->clear();
        });

        connect(Changecode,&QPushButton::clicked,
                [=]()
        {
            Change_Code->exec();
        });

        //时间函数，每1000毫秒即每秒刷新1次
        timeID = startTimer(1000);



}

Widget::~Widget()
{
    file_end.setFileName("../file/MyclassStu1.txt");
            bool isok = file_end.open(QIODevice::WriteOnly);
            if( isok )
            {
                QTextStream stream(&file_end);
                stream.setCodec(QTextCodec::codecForName("utf-8"));

                Students *p2 = myclass.start;
                for(int i=0;i<myclass.getStudents_sum();i++)
                {
                    stream << p2->getName() << '\t';
                    stream << p2->getPhone_number() << '\t';
                    stream << p2->getGender() << '\t';
                    stream << p2->getPlace() << '\t';
                    stream << p2->getBirthday() << '\t';
                    QString tpri = "";
                    for(int j =0 ;j<8;j++)
                    {
                        tpri += QString::number(p2->getPride(j+1));
                    }
                    stream << tpri << '\t';
                    QString tpun = "";
                    for(int j = 0;j<8;j++)
                    {
                        tpun += QString::number(p2->getPunishment(j+1));
                    }
                    stream << tpun << '\t';
                    stream << p2->Mycourse[0].getCredit() << p2->Mycourse[0].getCourse_name() << p2->Mycourse[0].getGrade() << '\t';
                    stream << p2->Mycourse[1].getCredit() << p2->Mycourse[1].getCourse_name() << p2->Mycourse[1].getGrade() << '\t';
                    stream << p2->Mycourse[2].getCredit() << p2->Mycourse[2].getCourse_name() << p2->Mycourse[2].getGrade() << '\t';
                    stream << p2->Mycourse[3].getCredit() << p2->Mycourse[3].getCourse_name() << p2->Mycourse[3].getGrade() << '\t';
                    stream << p2->Mycourse[4].getCredit() << p2->Mycourse[4].getCourse_name() << p2->Mycourse[4].getGrade() << '\t' << '\n';
                    p2 = p2->next;
                }
            }
            file_end.close();
    file_end.setFileName("../file/code.txt");
    file_end.open(QIODevice::WriteOnly);
    QTextStream stream1(&file_end);
    stream1 << defaultCode;
    file_end.close();
    delete ui;
}

int Widget::judge_pride(QString detail)
{
    if(detail=="三好学生")
    {
        return 1;
    }else if(detail=="优秀干部")
        {
        return 2;
    }else if(detail=="进步之星")
        {
        return 3;
    }else if(detail=="学习积极分子")
        {
        return 4;
    }else if(detail=="社会积极分子")
    {
        return 5;
    }
    return 0;
}

int Widget::judge_punishment(QString detail)
{
    if(detail=="警告")
    {
        return 1;
    }else if(detail=="处分")
    {
        return 2;
    }else if(detail=="留校察看")
    {
        return 3;
    }else if(detail=="通报批评")
    {
        return 4;
    }else if(detail=="休学")
    {
        return 5;
    }
    return 0;
}

QString Widget::change_pride(int count)
{
    QString str;
    if(count==1)
    {
        str="三好学生";

    }else if(count==2)
    {
        str="优秀干部";

    }else if(count==3)
    {
        str="进步之星";

    }else if(count==4)
    {
        str="学习积极分子";

    }else if(count==5)
    {
        str="社会积极分子";
    }
    return str;
}

QString Widget::change_punishment(int count)
{
    QString str;
    if(count==1)
    {
        str="警告";
    }else if(count==2)
    {
        str="处分";
    }else if(count==3)
    {
        str="留校察看";
    }else if(count==4)
    {
        str="通报批评";
    }else if(count==5)
    {
        str="休学";
    }
    return str;
}

void Widget::closeEvent(QCloseEvent *event)
{
    int ret=QMessageBox::question(this,"关闭","是否需要关闭窗口");
    if(ret==QMessageBox::Yes)
    {
        //处理关闭窗口事件，接受事件，终止事件传递
        event->accept();
    }else
    {
        //忽略事件，事件继续给父组件传递
        event->ignore();
    }

}





//学生信息管理
void Widget::on_student_information_manage_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->manage_infomation);
    ui->student_name_read->setReadOnly(true);
    ui->student_number_read->setReadOnly(true);
    ui->student_place_read->setReadOnly(true);
    ui->student_birth_read->setReadOnly(true);
    ui->student_gender_read->setReadOnly(true);
    ui->student_phone_read->setReadOnly(true);
    ui->manage_alter_information->hide();
    ui->manage_confirm_information->hide();
    ui->get_student_name_information->clear();
    ui->student_name_read->clear();
    ui->student_number_read->clear();
    ui->student_place_read->clear();
    ui->student_birth_read->clear();
    ui->student_gender_read->clear();
    ui->student_phone_read->clear();
    connect(ui->manage_search_information,&QPushButton::clicked,
            [=]()
    {
        if(ui->get_student_name_information->text()=="")
        {
            QMessageBox::warning(ui->get_student_name_information,"错误","未输入姓名");
            return ;
        }else
        {

            bool Exsit = 0;
            Students *p2 = myclass.start;
            for(;;)
            {

                if(p2 == NULL)
                    break;
                if(p2->getName() == ui->get_student_name_information->text())
                {
                    Exsit = 1;
                    break;
                }
                p2 = p2->next;
            }
            if(Exsit == 0)
            {
                QMessageBox::warning(ui->get_student_name_information,"错误","无此学生");
                return;
            }
            Students *p1 = myclass.selectStudents(ui->get_student_name_information->text());
            ui->student_name_read->setText(p1->getName());
            ui->student_number_read->setText(QString ("%1").arg(p1->getID_number()));
            ui->student_place_read->setText(p1->getPlace());
            ui->student_gender_read->setText(p1->getGender());
            ui->student_phone_read->setText(p1->getPhone_number());
            ui->student_birth_read->setText(p1->getBirthday());
            ui->manage_alter_information->show();
            return ;
        }
    });
    connect(ui->manage_alter_information,&QPushButton::clicked,
            [=]()
    {
        ui->student_name_read->setReadOnly(false);
        ui->student_number_read->setReadOnly(false);
        ui->student_place_read->setReadOnly(false);
        ui->student_birth_read->setReadOnly(false);
        ui->student_gender_read->setReadOnly(false);
        ui->student_phone_read->setReadOnly(false);
        ui->manage_confirm_information->show();
    });
    connect(ui->manage_confirm_information,&QPushButton::clicked,
            [=]()
    {
        ui->student_name_read->setReadOnly(true);
        ui->student_number_read->setReadOnly(true);
        ui->student_place_read->setReadOnly(true);
        ui->student_birth_read->setReadOnly(true);
        ui->student_gender_read->setReadOnly(true);
        ui->student_phone_read->setReadOnly(true);
        Students *p1=myclass.selectStudents(ui->get_student_name_information->text());
        p1->setName(ui->student_name_read->text());
        p1->setBirthday(ui->student_birth_read->text());
        p1->setPhone_number(ui->student_phone_read->text());
        p1->setPlace(ui->student_place_read->text());
        p1->setGender(ui->student_gender_read->text());
        p1->setID_number(ui->student_number_read->text().toInt());
        ui->manage_confirm_information->hide();

    });
    connect(ui->back_information,&QPushButton::clicked,
            [=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->ControlPage);
    });
}
//课程信息管理
void Widget::on_subject_information_manage_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->manage_subject);
    ui->first_subject->setReadOnly(true);
    ui->second_subject->setReadOnly(true);
    ui->third_subject->setReadOnly(true);
    ui->forth_subject->setReadOnly(true);
    ui->fifth_subject->setReadOnly(true);
    ui->credit1->setReadOnly(true);
    ui->credit2->setReadOnly(true);
    ui->credit3->setReadOnly(true);
    ui->credit4->setReadOnly(true);
    ui->credit5->setReadOnly(true);
    ui->manage_alter_subject->hide();
    ui->manage_confirm_subject->hide();
    ui->get_student_name_subject->clear();
    ui->first_subject->clear();
    ui->second_subject->clear();
    ui->third_subject->clear();
    ui->forth_subject->clear();
    ui->fifth_subject->clear();
    ui->credit1->clear();
    ui->credit2->clear();
    ui->credit3->clear();
    ui->credit4->clear();
    ui->credit5->clear();
    connect(ui->manage_search_subject,&QPushButton::clicked,
            [=]()
    {
        if(ui->get_student_name_subject->text()=="")
        {
            QMessageBox::warning(ui->get_student_name_subject,"错误","未输入姓名");
            return ;
        }else
        {
            bool Exsit = 0;
            Students *p2 = myclass.start;
            for(;;)
            {

                if(p2 == NULL)
                    break;
                if(p2->getName() == ui->get_student_name_subject->text())
                {
                    Exsit = 1;
                    break;
                }
                p2 = p2->next;
            }
            if(Exsit == 0)
            {
                QMessageBox::warning(ui->get_student_name_subject,"错误","无此学生");
                return;
            }

            Students *p1 = myclass.selectStudents(ui->get_student_name_subject->text());
            ui->first_subject->setText(p1->Mycourse[0].getCourse_name());
            ui->second_subject->setText(p1->Mycourse[1].getCourse_name());
            ui->third_subject->setText(p1->Mycourse[2].getCourse_name());
            ui->forth_subject->setText(p1->Mycourse[3].getCourse_name());
            ui->fifth_subject->setText(p1->Mycourse[4].getCourse_name());
            ui->credit1->setText(QString("%1").arg(p1->Mycourse[0].getCredit()));
            ui->credit2->setText(QString("%1").arg(p1->Mycourse[1].getCredit()));
            ui->credit3->setText(QString("%1").arg(p1->Mycourse[2].getCredit()));
            ui->credit4->setText(QString("%1").arg(p1->Mycourse[3].getCredit()));
            ui->credit5->setText(QString("%1").arg(p1->Mycourse[4].getCredit()));
            ui->manage_alter_subject->show();
            return ;
        }
    });
    connect(ui->manage_alter_subject,&QPushButton::clicked,
            [=]()
    {
        ui->first_subject->setReadOnly(false);
        ui->second_subject->setReadOnly(false);
        ui->third_subject->setReadOnly(false);
        ui->forth_subject->setReadOnly(false);
        ui->fifth_subject->setReadOnly(false);
        ui->credit1->setReadOnly(false);
        ui->credit2->setReadOnly(false);
        ui->credit3->setReadOnly(false);
        ui->credit4->setReadOnly(false);
        ui->credit5->setReadOnly(false);
        ui->manage_confirm_subject->show();
    });
    connect(ui->manage_confirm_subject,&QPushButton::clicked,
            [=]()
    {
        ui->first_subject->setReadOnly(true);
        ui->second_subject->setReadOnly(true);
        ui->third_subject->setReadOnly(true);
        ui->forth_subject->setReadOnly(true);
        ui->fifth_subject->setReadOnly(true);
        ui->credit1->setReadOnly(true);
        ui->credit2->setReadOnly(true);
        ui->credit3->setReadOnly(true);
        ui->credit4->setReadOnly(true);
        ui->credit5->setReadOnly(true);
        Students *p1=myclass.selectStudents(ui->get_student_name_subject->text());
        p1->Mycourse[0].setCourse_name(ui->first_subject->text());
        p1->Mycourse[1].setCourse_name(ui->second_subject->text());
        p1->Mycourse[2].setCourse_name(ui->third_subject->text());
        p1->Mycourse[3].setCourse_name(ui->forth_subject->text());
        p1->Mycourse[4].setCourse_name(ui->fifth_subject->text());
        p1->Mycourse[0].setCredit(ui->credit1->text().toInt());
        p1->Mycourse[1].setCredit(ui->credit1->text().toInt());
        p1->Mycourse[2].setCredit(ui->credit1->text().toInt());
        p1->Mycourse[3].setCredit(ui->credit1->text().toInt());
        p1->Mycourse[4].setCredit(ui->credit1->text().toInt());
        ui->manage_confirm_subject->hide();

    });
    connect(ui->back_subject,&QPushButton::clicked,
            [=]()

    {
        ui->stackedWidget->setCurrentWidget(ui->ControlPage);
    });
}

void Widget::on_score_information_manage_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->manage_score);
    ui->first_subject_score->setReadOnly(true);
    ui->second_subject_score->setReadOnly(true);
    ui->third_subject_score->setReadOnly(true);
    ui->forth_subject_score->setReadOnly(true);
    ui->fifth_subject_score->setReadOnly(true);
    ui->average->setReadOnly(true);
    ui->rank->setReadOnly(true);
    ui->manage_alter_score->hide();
    ui->manage_confirm_score->hide();
    ui->get_student_name_score->clear();
    ui->first_subject_score->clear();
    ui->second_subject_score->clear();
    ui->third_subject_score->clear();
    ui->forth_subject_score->clear();
    ui->fifth_subject_score->clear();
    ui->average->clear();
    /*ui->first_subject_name->clear();
    ui->second_subject_name->clear();
    ui->third_subject_name->clear();
    ui->forth_subject_name->clear();
    ui->fifth_subject_name->clear();
    */
    connect(ui->manage_search_score,&QPushButton::clicked,
            [=]()
    {
        if(ui->get_student_name_score->text()=="")
        {
            QMessageBox::warning(ui->get_student_name_score,"错误","未输入姓名");
            return ;
        }else
        {
            bool Exsit = 0;
            Students *p2 = myclass.start;
            for(;;)
            {

                if(p2 == NULL)
                    break;
                if(p2->getName() == ui->get_student_name_score->text())
                {
                    Exsit = 1;
                    break;
                }
                p2 = p2->next;
            }
            if(Exsit == 0)
            {
                QMessageBox::warning(ui->get_student_name_score,"错误","无此学生");
                return;
            }



            Students *p1 = myclass.selectStudents(ui->get_student_name_score->text());
            ui->first_subject_name->setText(p1->Mycourse[0].getCourse_name());
            ui->second_subject_name->setText(p1->Mycourse[1].getCourse_name());
            ui->third_subject_name->setText(p1->Mycourse[2].getCourse_name());
            ui->forth_subject_name->setText(p1->Mycourse[3].getCourse_name());
            ui->fifth_subject_name->setText(p1->Mycourse[4].getCourse_name());
            ui->first_subject_score->setText(QString("%1").arg(p1->Mycourse[0].getGrade()));
            ui->second_subject_score->setText(QString("%1").arg(p1->Mycourse[1].getGrade()));
            ui->third_subject_score->setText(QString("%1").arg( p1->Mycourse[2].getGrade()));
            ui->forth_subject_score->setText(QString("%1").arg( p1->Mycourse[3].getGrade()));
            ui->fifth_subject_score->setText(QString("%1").arg( p1->Mycourse[4].getGrade()));
            ui->average->setText(QString("%1").arg(p1->getAverageGrade()));
            ui->rank->setText(QString("%1").arg(myclass.getStudents_rand(ui->get_student_name_score->text())));
            ui->manage_alter_score->show();
            return ;
        }
    });
    connect(ui->manage_alter_score,&QPushButton::clicked,
            [=]()
    {
        ui->first_subject_score->setReadOnly(false);
        ui->second_subject_score->setReadOnly(false);
        ui->third_subject_score->setReadOnly(false);
        ui->forth_subject_score->setReadOnly(false);
        ui->fifth_subject_score->setReadOnly(false);
        ui->manage_confirm_score->show();
    });
    connect(ui->manage_confirm_score,&QPushButton::clicked,
            [=]()
    {
        ui->first_subject_score->setReadOnly(true);
        ui->second_subject_score->setReadOnly(true);
        ui->third_subject_score->setReadOnly(true);
        ui->forth_subject_score->setReadOnly(true);
        ui->fifth_subject_score->setReadOnly(true);
        Students *p1=myclass.selectStudents(ui->get_student_name_score->text());
        p1->Mycourse[0].setGrade(ui->first_subject_score->text().toFloat());
        p1->Mycourse[1].setGrade(ui->second_subject_score->text().toFloat());
        p1->Mycourse[2].setGrade(ui->third_subject_score->text().toFloat());
        p1->Mycourse[3].setGrade(ui->forth_subject_score->text().toFloat());
        p1->Mycourse[4].setGrade(ui->fifth_subject_score->text().toFloat());

        ui->manage_confirm_score->hide();

    });
    connect(ui->back_score,&QPushButton::clicked,
            [=]()

    {
        ui->stackedWidget->setCurrentWidget(ui->ControlPage);
    });
}

void Widget::on_pride_information_manage_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->manage_pide_punish);
    ui->first_reward->setReadOnly(true);
    ui->second_reward->setReadOnly(true);
    ui->third_reward->setReadOnly(true);
    ui->forth_reward->setReadOnly(true);
    ui->fifth_reward->setReadOnly(true);
    ui->sixth_reward->setReadOnly(true);
    ui->seventh_reward->setReadOnly(true);
    ui->eighth_reward->setReadOnly(true);
    ui->first_punishment->setReadOnly(true);
    ui->second_punishment->setReadOnly(true);
    ui->third_punishment->setReadOnly(true);
    ui->forth_punishment->setReadOnly(true);
    ui->fifth_punishment->setReadOnly(true);
    ui->sixth_punishment->setReadOnly(true);
    ui->seventh_punishment->setReadOnly(true);
    ui->eighth_punishment->setReadOnly(true);
    ui->manage_alter_rewardsandpunishment->hide();
    ui->manage_confirm_rewardsandpunishment->hide();
    ui->get_student_name_rewardsandpunishment->clear();
    ui->first_reward->clear();
    ui->second_reward->clear();
    ui->third_reward->clear();
    ui->forth_reward->clear();
    ui->fifth_reward->clear();
    ui->sixth_reward->clear();
    ui->seventh_reward->clear();
    ui->eighth_reward->clear();
    ui->first_punishment->clear();
    ui->second_punishment->clear();
    ui->third_punishment->clear();
    ui->forth_punishment->clear();
    ui->fifth_punishment->clear();
    ui->sixth_punishment->clear();
    ui->seventh_punishment->clear();
    ui->eighth_punishment->clear();
    connect(ui->manage_search_rewardsandpunishment,&QPushButton::clicked,
            [=]()
    {
        if(ui->get_student_name_rewardsandpunishment->text()=="")
        {
            QMessageBox::warning(ui->get_student_name_rewardsandpunishment,"错误","未输入姓名");
            return ;
        }else
        {
            bool Exsit = 0;
            Students *p2 = myclass.start;
            for(;;)
            {

                if(p2 == NULL)
                    break;
                if(p2->getName() == ui->get_student_name_rewardsandpunishment->text())
                {
                    Exsit = 1;
                    break;
                }
                p2 = p2->next;
            }
            if(Exsit == 0)
            {
                QMessageBox::warning(ui->get_student_name_rewardsandpunishment,"错误","无此学生");
                return;
            }
            Students *p1 = myclass.selectStudents(ui->get_student_name_rewardsandpunishment->text());
            ui->first_reward->setText(change_pride(p1->getPride(1)));
            ui->second_reward->setText(change_pride(p1->getPride(2)));
            ui->third_reward->setText(change_pride(p1->getPride(3)));
            ui->forth_reward->setText(change_pride(p1->getPride(4)));
            ui->fifth_reward->setText(change_pride(p1->getPride(5)));
            ui->sixth_reward->setText(change_pride(p1->getPride(6)));
            ui->seventh_reward->setText(change_pride(p1->getPride(7)));
            ui->eighth_reward->setText(change_pride(p1->getPride(8)));
            ui->first_punishment->setText(change_punishment(p1->getPunishment(1)));
            ui->second_punishment->setText(change_punishment(p1->getPunishment(2)));
            ui->third_punishment->setText(change_punishment(p1->getPunishment(3)));
            ui->forth_punishment->setText(change_punishment(p1->getPunishment(4)));
            ui->fifth_punishment->setText(change_punishment(p1->getPunishment(5)));
            ui->sixth_punishment->setText(change_punishment(p1->getPunishment(6)));
            ui->seventh_punishment->setText(change_punishment(p1->getPunishment(7)));
            ui->eighth_punishment->setText(change_punishment(p1->getPunishment(8)));

            ui->manage_alter_rewardsandpunishment->show();
            return ;
        }
    });
    connect(ui->manage_alter_rewardsandpunishment,&QPushButton::clicked,
            [=]()
    {
        ui->first_reward->setReadOnly(false);
        ui->second_reward->setReadOnly(false);
        ui->third_reward->setReadOnly(false);
        ui->forth_reward->setReadOnly(false);
        ui->fifth_reward->setReadOnly(false);
        ui->sixth_reward->setReadOnly(false);
        ui->seventh_reward->setReadOnly(false);
        ui->eighth_reward->setReadOnly(false);
        ui->first_punishment->setReadOnly(false);
        ui->second_punishment->setReadOnly(false);
        ui->third_punishment->setReadOnly(false);
        ui->forth_punishment->setReadOnly(false);
        ui->fifth_punishment->setReadOnly(false);
        ui->sixth_punishment->setReadOnly(false);
        ui->seventh_punishment->setReadOnly(false);
        ui->eighth_punishment->setReadOnly(false);
        ui->manage_confirm_rewardsandpunishment->show();
    });
    connect(ui->manage_confirm_rewardsandpunishment,&QPushButton::clicked,
            [=]()
    {
        ui->first_reward->setReadOnly(true);
        ui->second_reward->setReadOnly(true);
        ui->third_reward->setReadOnly(true);
        ui->forth_reward->setReadOnly(true);
        ui->fifth_reward->setReadOnly(true);
        ui->sixth_reward->setReadOnly(true);
        ui->seventh_reward->setReadOnly(true);
        ui->eighth_reward->setReadOnly(true);
        ui->first_punishment->setReadOnly(true);
        ui->second_punishment->setReadOnly(true);
        ui->third_punishment->setReadOnly(true);
        ui->forth_punishment->setReadOnly(true);
        ui->fifth_punishment->setReadOnly(true);
        ui->sixth_punishment->setReadOnly(true);
        ui->seventh_punishment->setReadOnly(true);
        ui->eighth_punishment->setReadOnly(true);
        Students *p1=myclass.selectStudents(ui->get_student_name_rewardsandpunishment->text());
        p1->setPride(1,judge_pride(ui->first_reward->text()));
        p1->setPride(2,judge_pride(ui->second_reward->text()));
        p1->setPride(3,judge_pride(ui->third_reward->text()));
        p1->setPride(4,judge_pride(ui->forth_reward->text()));
        p1->setPride(5,judge_pride(ui->fifth_reward->text()));
        p1->setPride(6,judge_pride(ui->sixth_reward->text()));
        p1->setPride(7,judge_pride(ui->seventh_reward->text()));
        p1->setPride(8,judge_pride(ui->eighth_reward->text()));
        p1->setPunishment(1,judge_punishment(ui->first_punishment->text()));
        p1->setPunishment(2,judge_punishment(ui->second_punishment->text()));
        p1->setPunishment(3,judge_punishment(ui->third_punishment->text()));
        p1->setPunishment(4,judge_punishment(ui->forth_punishment->text()));
        p1->setPunishment(5,judge_punishment(ui->fifth_punishment->text()));
        p1->setPunishment(6,judge_punishment(ui->sixth_punishment->text()));
        p1->setPunishment(7,judge_punishment(ui->seventh_punishment->text()));
        p1->setPunishment(8,judge_punishment(ui->eighth_punishment->text()));

        ui->manage_confirm_rewardsandpunishment->hide();

    });
    connect(ui->back_rewardsandpunishment,&QPushButton::clicked,
            [=]()

    {
        ui->stackedWidget->setCurrentWidget(ui->ControlPage);
    });
}

void Widget::on_back_1_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Welcome);
}

void Widget::on_basicinformation_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->student_information);
    Students *p1=myclass.selectStudents(stu_name);
    ui->student_name->setText(p1->getName());
    ui->student_number->setText(QString("%1").arg(p1->getID_number()));
    ui->student_birth->setText(p1->getBirthday());
    ui->student_place->setText(p1->getPlace());
    ui->student_phone->setText(p1->getPhone_number());
    ui->student_gender->setText(p1->getGender());
    connect(ui->back_student_information,&QPushButton::clicked,
            [=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->StudentsPage);
    });


}


void Widget::on_subject_search_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->student_subject);
    Students *p1=myclass.selectStudents(stu_name);
    ui->first_name->setText(p1->Mycourse[0].getCourse_name());
    ui->second_name->setText(p1->Mycourse[1].getCourse_name());
    ui->third_name->setText(p1->Mycourse[2].getCourse_name());
    ui->forth_name->setText(p1->Mycourse[3].getCourse_name());
    ui->fifth_name->setText(p1->Mycourse[4].getCourse_name());
    ui->search_credit1->setText(QString("%1学分").arg(p1->Mycourse[0].getCredit()));
    ui->search_credit2->setText(QString("%1学分").arg(p1->Mycourse[1].getCredit()));
    ui->search_credit3->setText(QString("%1学分").arg(p1->Mycourse[2].getCredit()));
    ui->search_credit4->setText(QString("%1学分").arg(p1->Mycourse[3].getCredit()));
    ui->search_credit5->setText(QString("%1学分").arg(p1->Mycourse[4].getCredit()));
    connect(ui->back_student_subject,&QPushButton::clicked,
            [=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->StudentsPage);
    });
}

void Widget::on_score_search_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->student_score);
    Students *p1=myclass.selectStudents(stu_name);
    ui->first_subject_name_2->setText(QString("%1:").arg( p1->Mycourse[0].getCourse_name()));
    ui->second_subject_name_2->setText(QString("%1:").arg( p1->Mycourse[1].getCourse_name()));
    ui->third_subject_name_2->setText(QString("%1:").arg( p1->Mycourse[2].getCourse_name()));
    ui->forth_subject_name_2->setText(QString("%1:").arg( p1->Mycourse[3].getCourse_name()));
    ui->fifth_subject_name_2->setText(QString("%1:").arg( p1->Mycourse[4].getCourse_name()));
    ui->average_name->setText(QString("平均分："));
    ui->average_score->setText(QString("%1").arg(p1->getAverageGrade()));
    ui->first_score->setText(QString("%1").arg( p1->Mycourse[0].getGrade()));
    ui->second_score->setText(QString("%1").arg( p1->Mycourse[1].getGrade()));
    ui->third_score->setText(QString("%1").arg( p1->Mycourse[2].getGrade()));
    ui->forth_score->setText(QString("%1").arg( p1->Mycourse[3].getGrade()));
    ui->fifth_score->setText(QString("%1").arg( p1->Mycourse[4].getGrade()));
    connect(ui->back_student_score,&QPushButton::clicked,
            [=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->StudentsPage);
    });

}


void Widget::on_pride_search_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->student_pride_punishment);
    Students *p1=myclass.selectStudents(stu_name);
    ui->student_reward1->setText(change_pride(p1->getPride(1)));
    ui->student_reward2->setText(change_pride(p1->getPride(2)));
    ui->student_reward3->setText(change_pride(p1->getPride(3)));
    ui->student_reward4->setText(change_pride(p1->getPride(4)));
    ui->student_reward5->setText(change_pride(p1->getPride(5)));
    ui->student_reward6->setText(change_pride(p1->getPride(6)));
    ui->student_reward7->setText(change_pride(p1->getPride(7)));
    ui->student_reward8->setText(change_pride(p1->getPride(8)));
    ui->student_punishment1->setText(change_punishment(p1->getPunishment(1)));
    ui->student_punishment2->setText(change_punishment(p1->getPunishment(2)));
    ui->student_punishment3->setText(change_punishment(p1->getPunishment(3)));
    ui->student_punishment4->setText(change_punishment(p1->getPunishment(4)));
    ui->student_punishment5->setText(change_punishment(p1->getPunishment(5)));
    ui->student_punishment6->setText(change_punishment(p1->getPunishment(6)));
    ui->student_punishment7->setText(change_punishment(p1->getPunishment(7)));
    ui->student_punishment8->setText(change_punishment(p1->getPunishment(8)));
    connect(ui->back_rewardsandpunish,&QPushButton::clicked,
            [=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->StudentsPage);
    });

}


void Widget::on_back_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Welcome);
}

void Widget::on_delete_page_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->delete_2);
    connect(ui->pushButton,&QPushButton::clicked,
            [=]()
    {
        myclass.moveStudents(ui->lineEdit->text());
        QMessageBox::about(this,"提示","已成功删除！");
        ui->lineEdit->clear();
    });
    connect(ui->pushButton_2,&QPushButton::clicked,
            [=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->ControlPage);
    });
}

void Widget::on_add_page_clicked()
{
    //进入添加学生页面
    ui->stackedWidget->setCurrentWidget(ui->addstudent);

    //清空输入框
    ui->addstudent_name->clear();
    ui->addstudent_birth->clear();
    ui->addstudent_phone->clear();
    ui->addstudent_place->clear();
    ui->addstudent_gender->clear();

    connect(ui->add_sure,&QPushButton::clicked,//当点击确认按钮（add_sure）时
            [=]()
    {
        //获取输入的学生的各项信息
        QString Name1=ui->addstudent_name->text();
        QString Phone_number1=ui->addstudent_phone->text();
        QString Gender1=ui->addstudent_gender->text();
        QString Place1=ui->addstudent_place->text();
        QString Birthday1=ui->addstudent_birth->text();

        //调用添加学生函数
        myclass.addStudents(Name1,Phone_number1,Gender1,Place1,Birthday1);

        //判断最基础的信息是否填写完整
        if(Name1==""||Phone_number1==""||Gender1==""||Place1==""||Birthday1=="")
        {
            QMessageBox::warning(this,"错误！","未输入全该同学的基础信息！");
        }

        else {
            //返回工作状态
            QMessageBox::about(this,"提示","已成功添加！");
        }

        //每次填写完成关闭弹窗需把文本框中内容清空，来方便下一次填写
        ui->addstudent_name->clear();//清空
        ui->addstudent_birth->clear();
        ui->addstudent_phone->clear();
        ui->addstudent_place->clear();
        ui->addstudent_gender->clear();
    });

    connect(ui->add_back,&QPushButton::clicked,
            [=]()
    {
        ui->stackedWidget->setCurrentWidget(ui->ControlPage);
    });
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter pic(this);
    //pic.begin(ui->back_1);
    pic.drawPixmap(0,0,width(),height(),QPixmap("../image/leaf.jpg"));
    //pic.end();
}

int Widget::samename(QString Name)
{
    Students *fp = myclass.start;

    int num = 0;

    for (;;) {
        if (fp==NULL)
            break;
        if(fp -> getName() == Name)
            {
            samename_inf[num] = fp;
            num++;
        }
        fp = fp->next;
    };

    return num;
}

//时间函数，用于实时更新Control界面上显示的班级当前人数
void Widget::timerEvent(QTimerEvent *)
{
    ui->lcdNumber->display(myclass.getStudents_sum());
}

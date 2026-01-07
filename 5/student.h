#pragma once
//student.h                (这是头文件，在此文件中进行类的声明)
class Student              //类声明
{
    public:                   //公用成员函数原型声明
        void display();
        void set_value(int Num,const char* Name,char Sex);
    private:
        int num;
        char name[20];
        char sex;//m是男的(man) w是女的(woman)
};
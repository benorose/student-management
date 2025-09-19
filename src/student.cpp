#include<iostream>
#include"student.hpp"
using namespace std;
student::student(string name,int number,int age,int chinese,int math,int english)
{
    this->student_name=name;
    this->student_mark=number;
    this->student_age=age;
    this->goal[0]=chinese;
    this->goal[1]=math;
    this->goal[2]=english;
    return;
};
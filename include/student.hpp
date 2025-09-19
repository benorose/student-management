#pragma once
#include<iostream>
using namespace std;

class student {
public:
    string student_name;
    int student_age;
    int student_mark;
    int goal[3];
    
    student(string name, int number, int age, int chinese, int math, int english);
    void get_number();
    void get_name();
};
#pragma once
#ifndef STUDENT_MANAGEMENT_HPP
#define STUDENT_MANAGEMENT_HPP

#include<iostream>
#include<vector>
#include"student.hpp"
using namespace std;

class student_management
{
public:
    vector<student> student_system;
    void revealinfo(student &STU);
    float get_averagegoal(student &STU);
    student* searchStudent(int number);
    void add_student(student STU);
    void show_menu();
};

#endif
#include<iostream>
#include"Student_Management.hpp"
using namespace std;
void student_management::revealinfo(student &STU)
{
    cout<<"name:"<<STU.student_name<<'\t';
    cout<<"number:"<<STU.student_mark<<'\t';
    cout<<"age:"<<STU.student_age<<'\t'<<endl;
    cout<<"chinese_goal:"<<STU.goal[0]<<'\t';
    cout<<"math_goal:"<<STU.goal[1]<<'\t';
    cout<<"english_goal:"<<STU.goal[2]<<endl;
};
float student_management::get_averagegoal(student &STU)
{
    return float((STU.goal[0]+STU.goal[1]+STU.goal[2])/3);
}

void student_management::add_student(student STU)
{
    student_system.push_back(STU);
    return;
}
student* student_management::searchStudent(int number)
{
    for(auto it = student_system.rbegin(); it != student_system.rend(); ++it) {
        if(it->student_mark == number)
            return &(*it);
    }
    return nullptr;
}
void student_management::show_menu()
{
    cout<<"##############################"<<endl;
    cout<<"##############################"<<endl;
    cout<<"##########input number##########"<<endl;
    cout<<"choice[1]:add student"<<endl;
    cout<<"choice[2]:reveal student information"<<endl;
    cout<<"choice[3]:search student"<<endl;
    cout<<"choice[4]:get student average goal"<<endl;
    cout<<"choice[0]:exit"<<endl;
    cout<<"##############################"<<endl;
    cout<<"##############################"<<endl;
    cout<<"##############################"<<endl;
    return;
}
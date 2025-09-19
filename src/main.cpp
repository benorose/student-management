#include<iostream>
#include"Student_Management.hpp"

using namespace std;
int main()
{
    int choice;
    student_management sm;
    while(true)
    {
        sm.show_menu();
        cin>>choice;
        switch (choice)
        {
            case 1:
            {
                string name;
                int number, age, chinese, math, english;
                cout << "请输入学生姓名: ";
                cin >> name;
                cout << "请输入学号: ";
                cin >> number;
                cout << "请输入年龄: ";
                cin >> age;
                cout << "请输入语文成绩: ";
                cin >> chinese;
                cout << "请输入数学成绩: ";
                cin >> math;
                cout << "请输入英语成绩: ";
                cin >> english;
                
                student newStudent(name, number, age, chinese, math, english);
                sm.add_student(newStudent);
                cout << "学生添加成功!" << endl;
                break;
            }
            case 2:
            {
                if(sm.student_system.empty()) {
                    cout << "暂无学生信息!" << endl;
                } else {
                    cout << "========== 学生信息列表 ==========" << endl;
                    for(auto &stu : sm.student_system) {
                        cout << "姓名: " << stu.student_name << endl;
                        cout << "学号: " << stu.student_mark << endl;
                        cout << "年龄: " << stu.student_age << endl;
                        cout << "成绩(语文/数学/英语): " 
                             << stu.goal[0] << "/" 
                             << stu.goal[1] << "/" 
                             << stu.goal[2] << endl;
                        cout << "-----------------------------" << endl;
                    }
                }
                break;
            }
            case 3:
            {
                int searchNumber;
                cout << "请输入要搜索的学生学号: ";
                cin >> searchNumber;
                student* result = sm.searchStudent(searchNumber);
                if(result == nullptr) {
                    cout << "未找到学号为 " << searchNumber << " 的学生" << endl;
                } else {
                    cout << "找到学生: " << result->student_name << endl;
                }
                break;
            }
            case 4:
            {
                int searchNumber;
                cout << "请输入要查询的学生学号: ";
                cin >> searchNumber;
                student* result = sm.searchStudent(searchNumber);
                if(result == nullptr) {
                    cout << "未找到学号为 " << searchNumber << " 的学生" << endl;
                } else {
                    cout << "找到学生: " << result->student_name << endl;
                    cout << "学生的平均成绩为："<<sm.get_averagegoal(*result)<<endl;
                }
                break;

            }
            case 0:
            {
                cout << "感谢使用学生管理系统，再见!" << endl;
                break;
            }
            default:
            break;
        }
        if(choice==0)
        break;
    }
    return 0;
}
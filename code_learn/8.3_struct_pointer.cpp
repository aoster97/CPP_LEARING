#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};

int
main()
{
    struct Student s = {"小王", 30, 120};
    Student *p = &s;
    // 成员的访问
    cout << "姓名:" << p->name << "年龄:" << p->age << "成绩" << p->score << endl;
}
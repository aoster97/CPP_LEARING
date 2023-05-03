#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};

// 值传递
void PrintStudent1(struct Student s)
{   
    s.name = "改名了";
    cout << "姓名:" << s.name << " 年龄:" << s.age << " 成绩:" << s.score << endl;
}

void PrintStudent2(struct Student *s)
{   
    s->name = "cc";
    cout << "子函数2中打印 姓名:" << s->name << " 年龄:" << s->age << " 成绩:" << s->score << endl;
}
int main()
{
    Student s1;
    s1.name = "小明";
    s1.age = 34;
    s1.score = 100;

    //值传递不修改成员变量的值
    PrintStudent1(s1);
    cout << "姓名:" << s1.name << " 年龄:" << s1.age << " 成绩:" << s1.score << endl;

    //传地址可以改变成员的值
    PrintStudent2(&s1);
    cout << "姓名:" << s1.name << " 年龄:" << s1.age << " 成绩:" << s1.score << endl;
}
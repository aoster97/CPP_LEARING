#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};

//将函数中的形参变为指针,可以减少内存空间的使用,而且不会复制新的副本出来
void PrintStudent(const struct Student *s)
{
    //s->age = 1;
    cout << "姓名:" << s->name << " 年龄:" << s->age << " 分数" << s->score << endl;
}

int main()
{
    Student s1 = {"张三", 20, 30};
    Student *sp = &s1;
    PrintStudent(sp);
}
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    float score;
} stu, *pstu;

int main()
{
    // 初始化结构体
    struct Student s1;

    s1.name = "张三";
    s1.age = 18;
    s1.score = 300;

    cout << "姓名:" << s1.name << "年龄:" << s1.age << "成绩:" << s1.score << endl;
}
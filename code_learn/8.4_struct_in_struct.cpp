#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name; // 姓名
    int age;     // 年龄
    int score;   // 分数
};

struct teacher
{
    int id;             // 教师的编号
    string name;        // 教师的姓名
    int age;            // 教师的年龄
    struct student stu; // 辅导的学生
};

int main()
{
    teacher t1;
    // 结构体嵌套结构体
    t1.id = 10000;
    t1.name = "田瑞";
    t1.age = 20;
    t1.stu.name = "小敖";
    t1.stu.age = 39;
    t1.stu.score = 300;
    cout << "老师姓名:" << t1.name << "老师年龄:" << t1.age << "老师编号:" << t1.id << "学生的姓名"
         << t1.stu.name << "学生的年龄" << t1.stu.age << "学生的成绩" << t1.stu.score << endl;
}
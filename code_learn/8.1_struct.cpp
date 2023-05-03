#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    float score;
} s3;

int main()
{
    // 初始化结构体方法1
    struct Student s1;

    s1.name = "张三";
    s1.age = 18;
    s1.score = 300;

    cout << "姓名:" << s1.name << "年龄:" << s1.age << "成绩:" << s1.score << endl;

    // 初始化结构体方法2
    struct Student s2 = {"王五", 20, 39};
    cout << "姓名:" << s2.name << "年龄:" << s2.age << "成绩:" << s2.score << endl;

    // 初始化结构体方法3
    s3.name = "小罗";
    s3.age = 29;
    s3.score = 43;
    cout << "姓名:" << s3.name << "年龄:" << s3.age << "成绩:" << s3.score << endl;

}
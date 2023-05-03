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
    // 创建结构体数组
    Student StuArr[3] = {
        {"小明", 29, 199},
        {"小李", 18, 133},
        {"小明", 22, 144}
    };

    // 给结构体中的元素赋值
    StuArr[2].name = "赵六";
    StuArr[2].age = 80;
    StuArr[2].score = 90;

    // 遍历结构体数组
    for (int i = 0; i < 3; i++)
    {
        cout << "姓名:" << StuArr[i].name << "年龄:" << StuArr[i].age << "成绩:" << StuArr[i].score << endl;
    }
}
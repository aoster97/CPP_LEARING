#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
案例描述：
学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
最终打印出老师数据以及老师所带的学生数据。
*/
struct Student
{
    string sName;
    int score;
};

struct Teacher
{
    string tName;
    struct Student SArr[5];
};

void allocateSpace(struct Teacher Tarr[], int len)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {

        Tarr[i].tName = "Teacher_";
        Tarr[i].tName += nameSeed[i];

        for (int j = 0; j < 5; j++)
        {
            Tarr[i].SArr[j].sName = "Student_";
            Tarr[i].SArr[j].sName += nameSeed[j];
            int random = rand() % 61 + 40;
            Tarr[i].SArr[j].score = random;
        }
    }
}

void printInfo(struct Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师姓名: " << tArray[i].tName << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "学生姓名: " << tArray[i].SArr[j].sName
                 << " 学生成绩: " << tArray[i].SArr[j].sName << endl;

            cout << "学生姓名: " << tArray[i].SArr[j].sName
                 << " 学生成绩: " << tArray[i].SArr[j].score << endl;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    struct Teacher Tarr[3];
    int len = sizeof(Tarr) / sizeof(Tarr[0]);
    allocateSpace(Tarr, len);
    printInfo(Tarr, len);
}
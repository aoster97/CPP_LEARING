#include <iostream>
#include <string>
using namespace std;

/*
案例描述：
设计一个英雄的结构体，包措成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
{"刘备",23,"男"},
{"关羽",22,“男"},
{"张飞",20, "男"},
{"赵云",21,"男"},
{"貂蝉",19,"女"}
*/

struct Hero
{
    string name;
    int age;
    string gender;
};

void bubblesort1(struct Hero Array[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        struct Hero *hp = Array;
        while (hp < hp + len - i - 1)
        {
            if (hp->age < (hp + 1)->age)
            {
                struct Hero temp;
                temp.name = hp->name;
                temp.age = hp->age;
                temp.gender = hp->gender;
                hp->name = (hp + 1)->name;
                hp->age = (hp + 1)->age;
                hp->gender = (hp + 1)->gender;
                (hp + 1)->name = temp.name;
                (hp + 1)->age = temp.age;
                (hp + 1)->gender = temp.gender;
            }
            hp++;
        }
    }
}


void bubblesort2(struct Hero Array[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        struct Hero *hp = Array;
        while (hp < hp + len - i - 1)
        {
            if (hp->age < (hp + 1)->age)
            {
                struct Hero temp;
                temp.name = hp->name;
                temp.age = hp->age;
                temp.gender = hp->gender;
                hp->name = (hp + 1)->name;
                hp->age = (hp + 1)->age;
                hp->gender = (hp + 1)->gender;
                (hp + 1)->name = temp.name;
                (hp + 1)->age = temp.age;
                (hp + 1)->gender = temp.gender;
            }
            hp++;
        }
    }
}

void bubblesort3(struct Hero Array[], int len)
{
    for (int i = len - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (Array[j].age > Array[j + 1].age)
            {
                struct Hero temp = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = temp;
            }
        }
    }
}

void printHeroArray(struct Hero Array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "姓名:" << Array[i].name << " 年龄:" << Array[i].age
             << " 性别:" << Array[i].gender << endl;
    }
}

int main()
{
    struct Hero HeroArray[5] =
        {
            {"刘备", 23, "男"},
            {"关羽", 22, "男"},
            {"张飞", 20, "男"},
            {"赵云", 21, "男"},
            {"貂蝉", 19, "女"}};
    int len = sizeof(HeroArray) / sizeof(HeroArray[0]);
    bubblesort3(HeroArray, len);
    printHeroArray(HeroArray, len);
}
#include <iostream>
using namespace std;

// break的作用
int main()
{
    cout << "请选择副本难度" << endl;
    cout << "1、普通" << endl;
    cout << "2、中等" << endl;
    cout << "3、困难" << endl;

    // 在switch ... case ... 语句中
    int select;
    cin >> select;

    switch (select)
    {
    case 1:
        cout << "您选择的是困难难度" << endl;
        break;
    case 2:
        cout << "您选择的是困难难度" << endl;
        break;
    case 3:
        cout << "您选择的是困难难度" << endl;
        break;
    default:
        cout << "输出有误" << endl;
        break;
    }

    // 循环语句中使用
    for (int a = 0; a < 10; a++)
    {
        if (a == 5)
        {
            break;
        }
        cout << a << endl;
    }

    // 跳转语句中
    for (int b = 1; b < 10; b++)
    {
        for (int c = 1; c < 10; c++)
        {
            if (c == 5)
            {
                break;
            }
            cout << "* ";
        }
        cout << endl;
    }
}
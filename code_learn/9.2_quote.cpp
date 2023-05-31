#include <iostream>
using namespace std;

int main()
{
    // 引用的本质就是取别名
    int a = 10;
    // 起别名的语法是  数据类型 &别名 = 原名;
    int &b = a;
    cout << "原名:" << a << endl;
    cout << "别名:" << b << endl;

    // a和b都是使用的同一块内存
    // 修改b的值也会改变a变量指向内存空间的值
    b = 20;
    cout << "原名:" << a << endl;
    cout << "别名:" << b << endl;
}
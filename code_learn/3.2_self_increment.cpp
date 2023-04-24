#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    ++a;
    cout << "a=" << a << endl;

    int b = 10;
    b++;
    cout << "b=" << b << endl;

    // 前置递增和后置递增之间的区别
    // 前置
    // 前置递增 ,先让变量+1,然后进行表达式的运算
    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << "a2=" << a2 << endl;
    cout << "b2=" << b2 << endl;

    // 后置
    // 后置递增,先进行表达式运算,后让变量+1
    int a3 = 10;
    int b3 = a3++ * 10;
    cout << "a3=" << a3 << endl;
    cout << "b3=" << b3 << endl;

    system("pause");
}
#include <iostream>
using namespace std;

int main()
{
    int a1 = 10;
    int b1 = 3;
    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl; // 两个整数做相除的运算结果依然是一个整数,将会把小数去除掉

    int a2 = 50;
    int b2 = 100;
    cout << a2 / b2 << endl; // 0

    /*
    int a3 = 10;
    int b3 = 0;

    cout <<  a3 / b3 << endl;
    */

    double d1 = 0.5;
    double d2 = 0.222;
    cout << d1 / d2 << endl;

    system("pause");
}
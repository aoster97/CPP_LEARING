#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    b = (a > b ? a : b); // 20
    cout << b << endl;
    cout << "========================================================" << endl;

    // 三目运算符既可以作为左值,也可以作为右值 ,作为左值的时候就充当一个变量
    (a > b ? a : b) = 100;
    cout << a << endl;
    cout << b << endl;
}
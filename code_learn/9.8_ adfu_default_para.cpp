#include <iostream>
using namespace std;

/*默认参数:
1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
*/

// 1
int fun1(int a, int b, int c = 10, int d = 10)
{
    return a + b + c + d;
}

int fun2(int a, int b = 10, int c = 20)
{
    // missing default argument on parameter 'c'int fun2(int a, int b = 10,int c)
    return a + b + c;
}

int main()
{
    int ref1 = fun1(10, 10);
    int ref2 = fun2(10);
    cout << ref1 << endl;
    cout << ref2 << endl;
}
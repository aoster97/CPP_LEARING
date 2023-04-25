#include <iostream>
using namespace std;

int main()
{

    // 逻辑运算符 非!
    int a = 10;
    int b = 10;
    // 在C++中,除了0,都为真
    cout << !a << endl;  // 0
    cout << !!a << endl; // 1

    // 逻辑运算符 与&&
    b = 0;
    cout << (a && b) << endl;
    // 逻辑运算符 与||
    cout << (a || b) << endl;

}
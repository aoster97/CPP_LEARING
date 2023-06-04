#include <iostream>
using namespace std;

int main()
{
    // 1,引用必须初始化
    // requires an initializer int &b ;
    int a = 10;
    int &b = a;

    // 2,引用一旦初始化之后,就不能更改
    int c = 20;
    b = c;//这相当于对于b别名的内存地址进行复制,并不是更改别名
    cout << "a的值:" << a << endl;
    cout << "b的值:" << b << endl;
    cout << "c的值:" << c << endl;

    
}
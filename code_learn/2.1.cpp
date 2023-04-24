#include <iostream>
using namespace std;

int main()
{
    //整型: short 2字节 int 4字节 long 4字节 long long 8字节
    //可以利用sizeof求出数据类型占用的大小
    //语法 sizeof(数据类型/变量)
    short num1 = 10;
    cout << "short占用的内存空间:" << sizeof(short) << endl;
    cout << "short占用的内存空间:" << sizeof(num1) << endl;
    cout << "int占用的内存空间:" << sizeof(int) << endl;
    cout << "long占用的内存空间:" << sizeof(long) << endl;
    cout << "long long占用的内存空间:" << sizeof(long long) << endl;
}
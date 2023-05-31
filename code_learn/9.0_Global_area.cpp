#include <iostream>
using namespace std;

// 全局变量
int g_a = 10;
int g_b = 10;

// 全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int *function1()
{
    int a = 10;
    return &a;
}

int *function2()
{   
    //使用new关键字来在堆区开辟一个空间
    int *a = new int(10);
    return a;
}

int main()
{

    // 内存四区
    // 代码区
    // 特点是共享和只读

    // 全局区
    // int *p = &a;
    // cout << "指针的大小是:" << sizeof(*p) << endl;
    // cout << "int的大小是:" << sizeof(int) << endl;

    cout << "全局变量g_a地址为: " << (uintptr_t)&g_a << endl;
    cout << "全局变量g_b地址为: " << (uintptr_t)&g_b << endl;

    // 静态变量
    static int s_a = 10;
    static int s_b = 10;

    cout << "静态变量a的地址:" << (uintptr_t)&s_a << endl;
    cout << "静态变量a的地址:" << (uintptr_t)&s_b << endl;
    // 全局变量,静态变量,常量(字符串常量,const修饰的全局常量)
    // 字符串常量
    cout << "字符串常量的地址为:" << (uintptr_t) & "hello world" << endl;
    cout << "字符串常量的地址为:" << (uintptr_t) & "hello world1" << endl;

    // 栈区(局部变量和局部常量都存放在栈区)
    int a = 10;
    int b = 10;
    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "局部变量a地址为: " << (uintptr_t)&a << endl;
    cout << "局部变量b地址为: " << (uintptr_t)&b << endl;
    cout << "字符串常量的地址为:" << (uintptr_t)&c_l_a << endl;
    cout << "字符串常量的地址为:" << (uintptr_t)&c_l_b << endl;

    // 不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
    int *ret = function1();
    cout << "栈区返回的值" << *ret << endl;
    cout << "栈区返回的值" << *ret << endl;

    // 堆区
    // 堆区数据利用new关键字进行开辟内存
    int *p = function2();
    cout << "堆区开辟的空间内的值" << *p << endl;

    // 创建一个普通的局部变量
}
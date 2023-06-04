#include <iostream>
using namespace std;

// 1,值传递
void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "值传递" << endl;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
}

// 2,地址传递
void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "地址传递" << endl;
    cout << "a =" << *a << endl;
    cout << "b =" << *b << endl;
}

// 3,引用传递
void swap3(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "引用传递" << endl;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
}

int main()
{
    // 传参的三种方式:1,值传递 2,引用传递(简化指针的使用) 3,地址传递
    int a = 3;
    int b = 4;
    int *p_a = &a;
    int *p_b = &b;

    swap1(a, b);
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;

    swap2(p_a,p_b);

    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
    
    swap3(a, b);
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
}
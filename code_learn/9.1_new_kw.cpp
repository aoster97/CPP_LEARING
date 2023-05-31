#include <iostream>
using namespace std;

int *func()
{ // 在堆区new出来一个整型的空间
    int *p = new int(10);
    return p;
}

void test01()
{
    int *ret = func();
    cout << "new出来的整型是:" << *ret << endl;
    cout << "new出来的整型是:" << *ret << endl;
    cout << "new出来的整型是:" << *ret << endl;
    cout << "new出来的整型是:" << *ret << endl;

    // 堆区的数据是程序员管理开辟的,由程序员来管理和释放
    // 如果想要释放掉堆区的数据,使用关键字delete
    delete ret;

    cout << "new出来的整型是:" << *ret << endl;
    cout << "new出来的整型是:" << *ret << endl;
    cout << "new出来的整型是:" << *ret << endl;
}

// 2,在堆区创建一个数组
void test02()
{
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++)
    { 
        cout << arr[i] << endl;
    }

    //delete释放掉一个堆区的数组
    //释放数组需要加上[]
    delete [] arr;
}

int main()
{
    // 1.new的基本语法
    test01();
    // 2.在堆区利用new开辟数组
    test02();
    return 0;
}
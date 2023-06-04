#include <iostream>
using namespace std;

// 引用做函数的返回值
// 1,不要返回局部变量的引用
int &test01()
{
    int a = 10;
    return a;
}
// 2,函数的调用可以作为左值
int &test02()
{
    static int b = 10; // 将局部变量从栈区移动全局区,全局区上的数据在程序结束后系统释放
    return b;
}
int main()
{
    int &ret = test01();
    cout << "ret = " << ret << endl;

    int &b_ret = test02();
    cout << "b_ret = " << b_ret << endl;
    cout << "b_ret = " << b_ret << endl;
    cout << "b_ret = " << b_ret << endl;
    //如果函数的返回值是一个引用,那么这个函数可以作为左值,实际上就是给静态指针赋值的过程
    test02() = 1000;
    cout << "b_ret = " << b_ret << endl;
    cout << "b_ret = " << b_ret << endl;

}
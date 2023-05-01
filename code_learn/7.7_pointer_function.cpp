#include <iostream>
using namespace std;
// 实现两个数字进行交换的代码
void swap(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "swap a =" << num1 << endl;
    cout << "swap b =" << num2 << endl;
}

int main()
{
    int a = 10;
    int b = 20;
    // 指针和函数
    // 1,值传递
    swap(a, b);

    cout << "a =" << a << endl;
    cout << "b =" << b << endl;

    cout << "--------------------------------------------------------" << endl;
    // 2,地址传递
    







}
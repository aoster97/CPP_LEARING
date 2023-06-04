#include <iostream>
using namespace std;
// 常量引用主要就是来修饰形参,防止形参改变实参

void showValue(int &val)
{
    // 因为引用是一个指针,我们如果改变了val的值,实际上也改变了实际参数的值
    val = 1000;
    cout << "val = " << val << endl;
}

void showValue2(const int &val)
{
    // 我们使用const修饰之后,在函数中就不能修改引用的值
    // val = 1000;
    // variable 'val' declared const here
    cout << "val = " << val << endl;
}

int main()
{
    int c = 10;
    int &c_qu = c;
    //使用引用的时候,只能为变量取别名,产量取别名是不对的,但加上const修饰之后就可以
    const int &d = 10;
    cout << d << endl;
    //编译器做了以下的事情:
    //找一个临时的变量名 int temp = 10;
    //const int &d = temp
    //引用本来就是一个指针常量,加上了const修饰之后,本质上就变成一个常数指针


    int a = 10;
    cout << "a在函数使用前: " << a << endl;
    showValue(a);
    cout << "a在函数使用后: " << a << endl;

    int b = 10;
    cout << "b在函数使用前: " << b << endl;
    showValue2(b);
    cout << "b在函数使用前: " << b << endl;
}

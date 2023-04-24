#include <iostream>
using namespace std;

int main(){
    //字符的声明变量
    char c = 'a';
    cout << "输出的字符是" << c << endl;
    //字符的占用
    cout << "字符占用" << sizeof(c) << endl;
    //字符常见的错误
    //不能用双引号
    //char a = "v";
    //不能在单引号里面写很多字符
    char v = 'asddsfsadas';
    cout << v << endl;

    //字符在底层是用ascii码储存的
    //a --> 97
    //A --> 65
    char s = 'a';
    cout << "a的ASCII码是" <<(int)s << endl;
}
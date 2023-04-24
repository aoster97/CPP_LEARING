#include <iostream>
//需要使用string的时候需要
#include <string> 
using namespace std;

int main (){
    //C语言风格
    //注意事项 : char 字符串名[] 
    char str[] = "hello world\n";
    cout << "C语言风格" << str;
    //C++语言风格
    string str2 = "hello world";
    cout << "C++语言风格" << str;


}
#include <iostream>
#include <string>
using namespace std;

int main(){
    //整型
    int a = 0;
    cout << "请给整型赋值" << endl;
    cin >> a;
    cout << "整型a = " << a << endl;
    
    //浮点型
    float b = 0;
    cout << "请给浮点型数据赋值" << endl;
    cin >> b;
    cout << "浮点型数据b = " << b << endl;
    
    //字符型
    char c = 'a';
    cout << "请给字符型数据赋值" << endl;
    cin >> c;
    cout << "字符型数据c = " << c << endl;
    
    //字符串型 
    string st = "hello world";
    cout << "请给字符串型数据赋值" << endl;
    cin >> st;
    cout << "字符串型数据st = " << st << endl;

    //bool类型
    //除0为否,其他都是1
    bool z = true;
    cout << "请给bool型数据赋值" << endl;
    cin >> z;
    cout << "bool类型数据z = " << z << endl;
}
#include <iostream>
#include <string>
using namespace std;

//无参无返
void test01()
{
    cout << "this is test01" << endl;
}

//无参有返
int test03()
{
    cout << "this is test03" << endl;
    return 1000;
}

//有参无返
void test02(string a)
{
    cout << a << endl;
}

//有参有返
int test04(int a){
    cout << "a=" << a << endl;
    return 1000;
}

int main()
{
    test01();
    test02("caonima");
    int c = test03();
    cout << c << endl;
    int d = test04(1);
    cout << "test04的返回值" << d << endl;

    return 0;
}
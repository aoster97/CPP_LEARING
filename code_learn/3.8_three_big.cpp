#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "输入三只小猪的体重" << endl;
    cin >> a >> b >> c;
    cout << "小猪a的体重是" << a << endl;
    cout << "小猪b的体重是" << b << endl;
    cout << "小猪c的体重是" << c << endl;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a小猪最重" << endl;
        }
        else
        {
            cout << "c小猪最重" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b小猪最重" << endl;
        }
        else
        {
            cout << "c小猪最重" << endl;
        }
    }
}
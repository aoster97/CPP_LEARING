#include <iostream>
using namespace std;

int main()
{
    for (int a = 1; a <= 100; a++)
    {
        if (a % 10 == 7 || a / 10 == 7 || a % 7 == 0)
        {
            cout << "敲桌子" << endl;
        }
        cout << a << endl;
    }
}
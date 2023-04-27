#include <iostream>
using namespace std;

int main()
{
    for (int a = 0; a < 10; a++)
    {
        cout << a << endl;
    }

    int b = 0;
    for (;;)
    {
        if (b >= 10)
        {
            break;
        }
        cout << b << endl;
        b++;
    }
}
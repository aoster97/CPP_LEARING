#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int num = 100;
    do
    {
        a = num / 100;
        b = (num % 100) / 10;
        c = num % 10;
        if ((a * a * a + b * b * b + c * c * c) == num)
        {
            cout << num << endl;
        }
        num++;
    } while (num <= 999);
}
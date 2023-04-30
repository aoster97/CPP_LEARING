#include <iostream>
using namespace std;

int main()
{
    cout << "1,xxxx" << endl;
    goto FLAG;
    cout << "2,xxxx" << endl;
    cout << "3,xxxx" << endl;
    FLAG:
    cout << "4,xxxx" << endl;
    cout << "5,xxxx" << endl;
}
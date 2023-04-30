#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {300, 350, 200, 400, 250};
    int max;

        for (int a = 0; a < 5; a++)
    {
        if (arr[a] < arr[a + 1])
        {
            max = arr[a + 1];
        }
        else
        {
            continue;
        }
    }
    cout << max << endl;
}
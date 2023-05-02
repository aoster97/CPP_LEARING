#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    int *p = arr;
    // for (int i = 9; i > 0; i--)
    //{
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (p[j] > p[j + 1])
    //         {
    //             int temp = p[j];
    //             p[j] = p[j + 1];
    //             p[j + 1] = temp;
    //         }
    //     }
    // }

    for (int i = 9; i > 0; i--)
    {
        p = arr;
        while (p < arr + i)
        {
            if (*p > *(p + 1))
            {
                int temp = *p;
                *p = *(p + 1);
                *(p + 1) = temp;
            }
            p++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int temp;
    // 冒泡排序
    for (int a = 9 - 1; a > 0; a--)
    {

        for (int b = 0; b < a; b++)
        {
            if (arr[b + 1] < arr[b])
            {
                temp = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << endl;    
    }   
}
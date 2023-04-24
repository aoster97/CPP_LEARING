#include <iostream>
#include <ctime>
using namespace std;

int main(){
    //二元元组定义的第一种方式
    //int arr[2][3];
    //arr[0][0] = 1;
    //arr[0][1] = 2;
    //arr[0][2] = 3;
    //arr[1][0] = 4;
    //arr[1][1] = 5;
    //arr[1][2] = 6;
//
    //cout <<  arr[0][0]  << endl;
    //cout <<  arr[0][1]  << endl;
    //cout <<  arr[0][2]  << endl;
    //cout <<  arr[1][0]  << endl;
    //cout <<  arr[1][1]  << endl;
    //cout <<  arr[1][2]  << endl; 
    /*
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0;j < 3; i++)
        {   
            srand ((unsigned int)time(NULL));
            int num = rand()%0100 + 1;
            arr[i][j] = num;
        }
    }
     */   

    //for(int i = 0; i < 2; i++)
    //{
    //    for(int j = 0; j < 3; j++)
    //    {   
    //        cout << arr[i][j] <<endl;
    //    }
    //}

    //定义二维数组的第二种方式
    // int arr2[2][3] = 
    // {
    //     {1,2,3},
    //     {4,5,6}
    // };
    // for(int i = 0; i < 2; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {   
    //         cout << arr2[i][j];
    //     }
    //     cout << endl;
    // }

    //二维数组定义的第三种方式
    // int arr3[2][3] = {1,2,3,4,5,6};
    // for(int i = 0; i < 2; i++)
    // {
    // for(int j = 0; j < 3; j++)
    // {   
    //     cout << arr3[i][j];
    // }
    // cout << endl;
    // }

    //二维数组定义的第四种方式
    int arr4[][3] = {1,2,3,4,5,6}; 

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {   
            cout << arr4[i][j];
        }
        cout << endl;
    }

}
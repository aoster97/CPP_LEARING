#include <iostream>
using namespace std;

int main(){
    int arr[9] = {4,2,8,0,5,7,1,3,9};

    cout << "排序前: " << endl;
    for(int i = 0; i < 9; i++)
    {
        cout <<  arr[i] << " ";
    }
    cout << endl;

    int temp = 0;
    cout << "冒泡排序开启:" << endl;
    for(int i = 0; i < 9 -1  ; i++ )
    {
     for(int j= 0 ;j < 9-i-1 ; j++)
     {
        if(arr[j] > arr[j+1])
        {
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
     }
    }
    cout << "冒泡排序的结果:" << endl;
    
    for( int z = 0; z < 9 ;z++)
        cout << arr[z] << endl;

}
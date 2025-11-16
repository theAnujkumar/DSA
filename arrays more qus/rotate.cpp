#include<iostream>
using namespace std;

void rotate(int arr[] , int n , int k)
{
    int temp[n];

    for(int i=0 ; i<n ; i++)
    {
        temp[(i+k)%n] = arr[i];
    }

    cout << "\nnew form\n";
    for(int i=0 ; i<n ; i++)
    {
        cout << temp[i] << " ";
    }
    // copy 
    //arr = temp;
}


/*
void printArray(int temp[] , int n , int k)
{
    for(int i=0 ; i<n ; i++)
    {
        cout << temp[i] << " ";
    }
}
*/
int main()
{
    int arr[4] = {9,11,1,7};

    cout << "original array\n";
    for(int i=0 ; i<4 ; i++)
    {
        cout << arr[i] << " ";
    }

    rotate(arr,4,2);

    cout << "\nnew form\n";
    //printArray(arr,4,2);
}
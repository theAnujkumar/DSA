#include<iostream>
using namespace std;

void moveZero(int arr[],int n)
{
    int nonzero = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[nonzero]);
            nonzero++;
        }
    }
}

void print(int arr[],int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {0,1,5,0,3,0};

    print(arr,6);

    moveZero(arr,6);
    cout << endl;

    print(arr,6);
}
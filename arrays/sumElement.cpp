#include<iostream>
using namespace std;

int sumElement(int arr[], int size)
{
    int sum = 0;

    for(int i = 0 ; i<size ; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
    
}

int main() 
{
    int arr[5] = {1,3,6,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "sum is :" << sumElement(arr,size);

    return 0;
}
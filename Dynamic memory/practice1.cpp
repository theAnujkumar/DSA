#include <iostream>
using namespace std;

void print(int arr[] , int size ,int start=0)
{
    for(int i=start ; i<size ; i++)
    {
        cout << arr[i] << endl;
    }
}

void print1(int arr[] , int n , int s=0)
{
    for(int i=s ; i<n ; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int i = 5;
    int arr[5] ={1,4,6,8,9};
    int size = 5;
    
    print(arr , size);
    cout << endl;
    print1(arr , size , 2);

    {
        int i = 4;
        cout << " ans is " << i << endl;
    }

    cout << " ans is " << i << endl;
}
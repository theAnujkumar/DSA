#include <iostream>
using namespace std;

// right to left use default args 
void print(int arr[] , int size ,int start=0)
{
    for(int i=start ; i<size ; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[5] ={1,4,6,8,9};
    int size = 5;
    
    print(arr , size);
    cout << endl;
    print(arr , size , 2);
    
}

// constant variable
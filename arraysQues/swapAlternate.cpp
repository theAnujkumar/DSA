#include<iostream>
using namespace std;

int swapAlternate(int arr[] , int size)
{
    for(int i=0 ; i<size ; i=i+2)
    {
        if(i+1 < size)
        {
            swap(arr[i] , arr[i+1]);
        }
    }
}

int printArray(int arr[] , int size)
{
    for(int i=0 ; i<size ; i++)
    {
        cout <<" " << arr[i]; 
    }
}

main()
{
    int even[6] = {3,5,6,8,9,4};
    int odd[5] = {1,6,3,9,2};

    printArray(even,6);
    cout << endl;
    printArray(odd,5);
    cout << endl;

    swapAlternate(even,6);
    swapAlternate(odd,5);

    printArray(even,6);
    cout << endl;
    printArray(odd,5);
}
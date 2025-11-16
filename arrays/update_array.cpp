#include<iostream>
using namespace std;

void update(int arr[], int n)
{

    cout << "inside function";

    // updating array
    arr[0] = 100;
    
    for(int i=0 ; i<3 ; i++)
    {
        cout << "\nthe value is " << arr[i];
    }

    cout << "going back to function";
}

int main() {
    
    int arr[3]={2,3,4};

    /*
    int size;

    cout << "enter the number ";
    cin >> size;


    for(int i=0 ; i<3 ; i++)
    {
        cin >> arr[i];
    }
    */

    update(arr , 3);
    
    // printing array

    for(int i=0 ; i<3 ; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}
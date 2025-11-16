#include<iostream>
#include<array>

using namespace std;

int main()
{
    int basic[3] = {1,2,3};

    array<int,4> arr = {1,2,3,4};

    int size = arr.size();

    for(int i=0 ; i<size ; i++)
    {
        cout << arr[i] <<" ";
    }

    cout << "\nelement at 2nd index is " << arr[2];

    cout << "\nempty or not" << arr.empty();

    cout << "\nfirst element " << arr.front();
    
    cout << "\nlast element " << arr.back();
}
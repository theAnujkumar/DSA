#include<iostream>
using namespace std;

bool search(int arr[] , int size , int key) 
{
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i] == key)
        {
            cout << "key present at " << i+1 ;
            return 1;
        }
        
    }
    return 0;
}

int main() {
    
    int arr[5] = {2 ,-5 ,4 ,8 ,-7};

    cout << "enter the element to be search ";
    int key;
    cin >> key;

    bool found = search(arr , 5 ,key);

    if(found) {
        cout << "\nkey is present";
    }

    else
    {
        cout << "\nkey is absent";
    }

    return 0;
}
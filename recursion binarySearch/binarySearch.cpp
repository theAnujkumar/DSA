#include<iostream>
using namespace std;

void print(int arr[] , int s , int e , int key)
{
    for(int i=s ; i<=e ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[] , int s ,int e , int key)
{

    print(arr,s,e,key);
    // base case
    // element not found
    if(s>e)
    return false;

    int mid = s + (e-s)/2;
    cout << "value of arr mid is " << arr[mid] << endl;

    // element found
    if(arr[mid] == key)
    {
        return true;
        return mid;
    }

    
        // move to right part
        if(arr[mid] < key)
        {
            return binarySearch(arr , mid+1 , e , key);
        }

        // move to right part
        else{
            return binarySearch(arr , s , mid-1 , key);
        }
    
}

int main()
{
    int arr[5] = {2,4,6,9,10};
    int size = 5;
    int key = 9;

    bool ans = binarySearch(arr , 0 , size-1 ,key);

    if(ans)
    {
        cout << "present" << endl;
    }
    //cout << binarySearch(arr , 0 , size-1 ,key) << endl;
    else 
    {
        cout << "absent" << endl;
    }
}

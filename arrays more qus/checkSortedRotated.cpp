#include<iostream>
using namespace std;

void check(int arr[] , int n)
{
    int count = 0;

    for(int i=1 ; i<n ; i++)
    {
        if(arr[i-1] > arr[i])
        {
            count++;
        }
    }

    if(arr[n-1] > arr[0])
    {
        count++;
    }

    //return count;

    if(count <= 1)
    {
        cout << "True";
    }

    else{
        cout << "false";
    }
}

int main()
{
    //int arr[5] = {3,4,5,1,2};
    int arr[5] = {1,2,3,4,5};
    //int arr[5] = {3,5,7,1,6};

    check(arr,5);

    return 0;

}
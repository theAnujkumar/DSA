#include<iostream>
using namespace std;

int getPivot(int arr[] , int n)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid] >= arr[0])
        // first line so move to next line
        {
            s = mid + 1;
        }

        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

main()
{
    int arr[6]={8,10,18,20,1,5};

    cout << "the pivot minimum element index is at " << getPivot(arr , 6);
}
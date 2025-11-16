#include<iostream>
using namespace std;

int peakMaximum(int arr[] , int n)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid] < arr[mid+1])
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
    int arr[6]={2,4,8,9,7,1};

    cout << "the peak maximum is at index is " << peakMaximum(arr , 6);

}
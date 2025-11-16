#include<iostream>
using namespace std;

int getSum(int arr[] , int size)
{
    // base case
    if(size == 0)
    return 0;

    if(size == 1)
    {
        return arr[0];
    }

    else{
        // isme array ke pointer ko ek ek agee badate ja rhe hai
        int remainingPart = getSum(arr+1 , size-1);
        int ans = arr[0] + remainingPart;
        return ans; 
    }
}

int arraySum(int arr[], int n) {
    // base case
    if(n == 0)
        return 0;

    // recursive case
    return arr[n-1] + arraySum(arr, n-1);
}

int main()
{
    int arr[5] = {2,4,6,9,10};
    int size = 5;

    int sum = getSum(arr,size);
    cout << "sum is " << sum << endl;
}
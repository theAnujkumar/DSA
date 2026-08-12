#include<iostream>
using namespace std;
#include<vector>

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

int sum(int index , vector<int> &arr)
{
    if(index >= arr.size())
    {
        return 0;
    }
    else{
        return arr[index] + sum(index+1,arr);
        // f(0,arr) = arr[0] + f(1,arr)
    }
}

int sumArrayRecursion(vector<int> &arr , int size , int index=0)
{
    if(index == size)
    {
        return 0;
    }

    return arr[index] + sumArrayRecursion(arr,size,index+1);
}


int main()
{
    int arr[5] = {2,4,6,9,10};
    int size = 5;

    int sum = getSum(arr,size);
    cout << "sum is " << sum << endl;

    vector<int> arr1 = {1,2,3,4,5};
    int n1 = arr1.size();
    int ans = sumArrayRecursion(arr1,n1);
    cout << "sum is " << ans << endl;
}
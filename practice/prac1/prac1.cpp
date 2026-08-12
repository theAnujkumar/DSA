#include<iostream>
using namespace std;
#include<vector>

int getSum(int *arr , int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    else{
        int remainingPart = getSum(arr+1,n-1);
        int ans = arr[0] + remainingPart;
        return ans;
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
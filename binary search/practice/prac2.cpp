#include<iostream>
using namespace std;

bool isPossible(int arr[] , int n , int m ,int mid)
{
    int pagesum = 0;
    int studentcnt = 1;

    for(int i=0 ; i<n ; i++){
        if(pagesum + arr[i] < mid)
        {
            pagesum += arr[i];
        }
       
        else{
            studentcnt++;
            if(studentcnt > m || arr[i]>mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[] , int n , int m)
{
    int s = 0;
    int sum = 0;

    for(int i=0 ; i<n ; i++)
    {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e)
    {
        if(isPossible(arr,n,m,mid))
        {
        ans = mid;
        e = mid - 1;
        }
        else{
        s = mid + 1;
        }

        mid = s + (e-s)/2;

    }
    return ans;
}

int main() 
{
    int arr[4] = {10,20,30,40};

    cout << "the answer is " << allocateBooks(arr , 4 , 2);

    return 0;
}
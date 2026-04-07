#include<iostream>
using namespace std;

bool isPossible(int arr[] , int n ,int m ,int mid)
{
    int pageSum =0;
    int studentcnt = 0;

    for(int i=0 ; i<n ; i++)
    {
        if(pageSum + arr[i] < mid)
        {
            pageSum += arr[i];
        }
        else{
            studentcnt++;
            if(studentcnt >m || arr[i]>mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
        
    }
}

int allocateBooks(int arr[] , int n , int m)
{
    // m = student , n = no. of pages
    int s=0;
    int sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    while(s<e)
    {
        int mid = s+(e-s)/2;
        if(isPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid +1;
        }
    }
    return ans;
}

int sqrtInteger(int num)
{
    int s=0;
    int e=num;
    int ans = -1;
    while(s<e)
    {
        int mid = s+(e-s)/2 ;
        if(mid*mid == num)
        {
            return mid;
        }
        else if(mid*mid < num)
        {
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}


int morePrecision(int n,int precision , int firstPart)
{
    long ans = firstPart;
    long factor = 1;
    for(int i=0 ; i<precision ; i++)
    {
        factor = factor/10;
        for(double j=firstPart ; j*j<n ; j=j+factor)
        {
            ans = j;
        }
    }
}

main()
{
    int arr[4] = {10,20,30,40};

    cout << "the answer is " << allocateBooks(arr , 4 , 2);

    int n = 37;
    //int n = 1000000;

    int firstPart = sqrtInteger(n);
    cout << "square root is " << firstPart;
    cout << "square root is " << morePrecision(n,3,firstPart);
}
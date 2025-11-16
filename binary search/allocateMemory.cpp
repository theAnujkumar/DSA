#include<iostream>
using namespace std;

bool isPossible(int arr[] , int n ,int m ,int mid)
{
    int studentCount = 1;
    int pagesum = 0;

    for(int i=0 ; i<n ; i++)
    {
        // for student 1 how many pages alocated
        if(pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i]>mid)
            {
                return false;
            }

            pagesum = arr[i];
        }

        if(studentCount > m) {
            return false;
        }
        cout << " for i " << i << " Student "<< studentCount << " pageSum " << pagesum << endl;
    }
    
    return true;
}
int allocateBooks(int arr[] , int n , int m)
{
    int s = 0;
    int sum = 0;

    for(int i=0 ; i<n ; i++)
    {
        sum = sum + arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

main()
{
    int arr[4] = {10,20,30,40};

    cout << "the answer is " << allocateBooks(arr , 4 , 2);
}
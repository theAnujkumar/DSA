#include <bits/stdc++.h> 
#include<iostream>
#include<algorithm>
using namespace std;

int firstMissing(int arr[], int n)
{
    // // Write your code here.
    // int num = 1;
    // //bool found = false;

    // for(int i=0 ; i<n ; i++)
    // {
    //     if(arr[i] == num)
    //     {
    //         cout << num << " " << arr[i] << endl;
    //         num++;
    //         cout << num << " " << arr[i] << endl;
    //         //break;
    //         //found = true;
    //     }
    // }
    // return num;

    sort(arr , arr+n);

    int cnt = 1;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == cnt)
        {
            cnt++;
        }
        else if(arr[i] > cnt)
        {
            break;
        }
        // ignore
        //if(arr[i] <= 0)
    }
    return cnt;
}

// tc = O(Nlogn)
// sc = (n) == O(1) if inplace sort

int main()
{
    //int arr[4] = {3,4,-1,1};
    int arr[5] = {3,2,-6,1,0};

    // cout << "original array\n";
    // for(int i=0 ; i<4 ; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //cout << " first missing no. is "<< firstMissing(arr,4) << endl;
    cout << " first missing no. is "<< firstMissing(arr,5) << endl;
    return 0;
}

/*
Why duplicates automatically handle ho jate hain?

Example:

[1,1,2,2]

Sorted:

[1,1,2,2]

1 mila → smallest = 2

Next 1 → ignore

2 mila → smallest = 3

Answer = 3
*/
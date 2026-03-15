#include <bits/stdc++.h> 
#include<iostream>
#include<algorithm>
using namespace std;

int firstMissing(int arr[], int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        bool found = false;
        for(int j=0 ; j<n ; j++)
        {
            if(arr[j] == i)
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
            return i;
        }
    }
    
}

// tc = O(n2)
// sc = O(1)

int main()
{
    int arr[4] = {3,4,-1,1};
    //int arr[4] = {1,1,2,2};
    //int arr[5] = {3,2,-6,1,0};

    // cout << "original array\n";
    // for(int i=0 ; i<4 ; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //cout << " first missing no. is "<< firstMissing(arr,4) << endl;
    cout << " first missing no. is "<< firstMissing(arr,4) << endl;
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
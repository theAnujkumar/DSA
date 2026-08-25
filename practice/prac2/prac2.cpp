#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {2,7,11,15};
    int n = arr.size();
    int k = 13;

    unordered_set<int> seen;
    for(int i=0 ; i<n ; i++)
    {
        int diff = k-arr[i];
        if(seen.count(diff))
        {
            cout << diff << " " << arr[i] << endl;
            break;
        }
        seen.insert(arr[i]);
    }
    // else{
    //     cout << "no pair found " << endl;
    // }
    return 0;
}
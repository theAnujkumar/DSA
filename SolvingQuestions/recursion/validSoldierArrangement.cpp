#include <bits/stdc++.h> 
#include <iostream>
#include<vector>
using namespace std;

void solve(int index , vector<int> &arr , vector<int> &values , int &cnt , int n)
{
    // base case  last index
    if(index == n-1)
    {
        // check condition
        if(arr[index] != arr[index-1])
        {
            cnt++;
        }
        return ;
    }
    
    // try all allowed values so traverse in values arr to find out which no. can be put 
    // between start and end
    for(int i=0 ; i<values.size() ; i++)
    {
        int val = values[i];

        // here index is 1   so arr[0] == 1 true so i++
        // check immediately
        if(val != arr[index-1])
        {
            arr[index] = val;
            solve(index+1,arr,values,cnt,n);
        }
    }
}

int coutArrangements(int n , vector<int> &values , int &end)
{
    vector<int> arr(n);

    int cnt = 0;

    // fix first and last
    arr[0] = values[0];
    arr[n-1] = end;
    cout << "arr[0] & arr[n-1] is " << arr[0] << arr[n-1] << endl;

    // start filling from index 1
    
    solve(1,arr,values,cnt,n);

    return cnt;
}

int main()
{
    int n = 4;
    vector<int> values = {1,2,3,4};
    int end = 3;

    int ans = coutArrangements(n,values,end);
    cout << "ans is " << ans << endl;
    return 0;
}
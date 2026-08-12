#include <bits/stdc++.h> 
#include <iostream>
#include<vector>
using namespace std;

// find max. no. of people that can fly in ballon
// such that total weight does not exceed y

int maxPeople(int n , vector<int> &arr , int total)
{
    sort(arr.begin(),arr.end());

    int cnt = 0;
    int sum = 0;

    for(int i=0 ; i<n ; i++)
    {
        if(sum+arr[i] <= total)
        {
            cnt++;
            sum+= arr[i];
        }
        else{
            // can't add more
            break;
        }
    }
    cout << "total sum is " << sum << endl;
    return cnt;
}

int main()
{
    int n = 5;
    // weight of people
    vector<int> W = {40,50,60,30,20};
    int y = 100;

    int ans = maxPeople(n,W,y);

    cout << "maximum people are " << ans << endl;
    return 0;
}
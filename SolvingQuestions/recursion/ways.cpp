#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
#include<map>

// find no. of ways to reach the end (#)

int paths(int i, int j ,int n)
{
    // base case
    if(i<0 || j<0 || i>=n || j>=n)   // out of bound
        return 0;
    if(i==n-1 && j==n-1)    // reach our destination
        return 1;

    int ways = 0;
    ways+= paths(i+1,j,n);      // go to next row / down
    ways+= paths(i,j+1,n);      // go to next col / right

    return ways;
}

int main()
{
    int n = 3;
    int ans = paths(0,0,n);
    cout << "no. of ways are " << ans << endl;
    return 0;
}
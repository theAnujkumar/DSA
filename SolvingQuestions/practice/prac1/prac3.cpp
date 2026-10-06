#include <bits/stdc++.h> 
#include <iostream>
#include<vector>
using namespace std;
#include<map>

// find no. of ways to reach the end (#)

int path(int i, int j ,int n)
{
    if(i<0 || j<0 || i>=n || j>=n)
    {
        return 0;
    }
    if(i==n-1 && j==n-1)
    {
        return 1;
    }

    int ways = 0;
    ways+= path(i+1,j,n);
    ways+= path(i,j+1,n);

    return ways;
}

int paths(int i, int j ,vector<vector<bool>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    if(i<0 || j<0 || i>=n || j>=m || mat[i][j]==1)
    {
        return 0;
    }

    if(i==n-1 && j==m-1)
    {
        return 1;
    }

    int ways = 0;
    ways+= paths(i+1,j,mat);
    ways+= paths(i,j+1,mat);

    return ways;

}

int main()
{
    // if n<=2 then n++
    int n=4;
    int m=4;
    int a=2,b=2;
    vector<vector<bool>> mat(n,vector<bool>(m,false));
    vector<vector<int>> dp(n,vector<int>(m,-1));

    vector<vector<bool>> mate(n,vector<bool>(m,false));
    for(int i=0 ; i<a ; i++)
    {
        for(int j=m-1 ; j>m-1-b ; j--)
        {
            mat[i][j] = 1;
        }
    }

    for(int i=0 ; i<a ; i++)
    {
        for(int j=m-1 ; j>m-1-b ; j--)
        {
            mat[i][j] = 1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


    int ans = paths(0,0,mat);
    //int ans2 = pathDp(0,0,mat,dp);
    cout << "no. of ways are " << ans << endl;
    return 0;
}
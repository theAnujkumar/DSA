#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
#include<map>

// find no. of ways to reach the end (#)

int pathDp(int i, int j ,vector<vector<bool>> &mat , vector<vector<int>> &dp)
{
    // base case
    if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size() || mat[i][j] == 1)   
    // out of bound
        return 0;
    if(i==mat.size()-1 && j==mat[0].size()-1)    // reach our destination
        return 1;

    if(dp[i][j] != -1)
        return dp[i][j];

    int down = pathDp(i+1,j,mat,dp);      // go to next row / down
    int right = pathDp(i,j+1,mat,dp);      // go to next col / right

    return dp[i][j] = down+right;

}

int paths(int i, int j ,vector<vector<bool>> &mat)
{
    // base case
    if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size() || mat[i][j] == 1)   
    // out of bound
        return 0;
    if(i==mat.size()-1 && j==mat[0].size()-1)    // reach our destination
        return 1;

    int ways = 0;
    ways+= paths(i+1,j,mat);      // go to next row / down
    ways+= paths(i,j+1,mat);      // go to next col / right

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
    int ans2 = pathDp(0,0,mat,dp);
    cout << "no. of ways are " << ans2 << endl;
    return 0;
}

/*
//vector<vector<bool>> mat(2, vector<bool>(2, false));

Row 0 -> [F F F F]
Row 1 -> [F F F F]
Row 2 -> [F F F F]

      Col
      0   1   2   3
    +---+---+---+---+
0   | F | F | F | F |
    +---+---+---+---+
1   | F | F | F | F |
    +---+---+---+---+
2   | F | F | F | F |
    +---+---+---+---+
*/

/*
| Part                  | Time           |
| --------------------- | -------------- |
| Matrix creation       | O(n × m)       |
| Filling blocked cells | O(a × b)       |
| Printing              | O(n × m)       |
| Recursive `paths()`   | **O(2^(n+m))** |

sc = O(n+m)
Maximum recursion depth

(n-1) down
+
(m-1) right

Total

O(n+m)
	​
optimize
Memoization (Top-Down DP): Time = O(n × m), Space = O(n × m)

*/
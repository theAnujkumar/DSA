#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;

int coverageOfMatrix(vector<vector<int>> &mat) {

    int r = mat.size();
    int c = mat[0].size();
    int ans = 0;

    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            // if i get 0
            if(mat[i][j] == 0)
            {
                // it should ensure that i,j not reach out of bound
                if(i>0 && (mat[i-1][j] == 1))  ans++;
                if(i<r-1 && (mat[i+1][j] == 1)) ans++;
                if(j>0 && (mat[i][j-1] == 1))  ans++; 
                if(j<c-1 && (mat[i][j+1] == 1))  ans++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector <int>> number = {{1,0} , {0,1}};
    int ans = coverageOfMatrix(number);
    cout << "ans is " << ans << endl;
}
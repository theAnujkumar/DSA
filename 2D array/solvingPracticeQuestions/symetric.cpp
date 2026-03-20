#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;

bool isMatrixSymmetric(vector<vector<int>> matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    for(int r=0 ; r<row ; r++)
    {
        for(int c=0 ; c<col ; c++)
        {
            if(matrix[r][c] != matrix[c][r])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector <int>> number = {{1,0} , {0,1}};
    bool ans = isMatrixSymmetric(number);
    cout << "ans is " << ans << endl;
}
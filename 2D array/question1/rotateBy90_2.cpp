#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int n = matrix.size();

    // Transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse rows  (clock wise)
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

    // Print
    for(auto row: matrix){
        for(auto val: row)
            cout<<val<<" ";
        cout<<endl;
    }
}

/*
#include <bits/stdc++.h> 
void inplaceRotate(vector<vector<int>> &inputArray)
{
    // Write your code here.
    int n = inputArray.size();
    
    for(int r=0 ; r<n ; r++)
    {
        for(int c=r ; c<n ; c++)
        {
            swap(inputArray[r][c],inputArray[c][r]);
        }
    }
    // for(int r=0;r<n;r++){
    //     reverse(inputArray[r].begin(), inputArray[r].end());
    // }
    for(int r=0 ; r<n ; r++)
    {
        int left = 0;
        int right = n-1;

        while(left < right)
        {
            // for clock wise(row wise)
            //swap(inputArray[r][left],inputArray[r][right]);

            // for anticlockwise(col wise)
            swap(inputArray[left][r],inputArray[right][r]);
            left++;
            right--;
        }
    }
}
*/
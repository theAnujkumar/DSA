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

    // Reverse rows
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

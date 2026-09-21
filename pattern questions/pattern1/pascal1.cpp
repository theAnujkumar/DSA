#include <iostream>
#include <vector>
using namespace std;

void pascalTriangle(int n)
{
    vector<vector<int>> triangle;
    for(int i=0 ; i<n ; i++)
    {
        triangle[i][0] = 1;
        triangle[i][i] = 1;

        for(int j=1 ; j<i ; j++)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << "\n";
    }
}

void printPascalTriangle(int N) {
    vector<vector<int>> triangle;
    for (int i = 0; i < N; i++) {

        // triangle[i][0] = 1;
        // triangle[i][i] = 1;
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << "\n";
    }

    // for (int i = 0; i < N; i++) {
    //     int sum = 0;
    //     for (int j = 0; j < N; j++) {
    //         sum+= triangle[N-1][j];
    //     }
    //     cout << "\n";
    // }
    // print last row sum
    int lastRowSum = 0;
    for (int val : triangle[N - 1]) {
        lastRowSum += val;
    }
    cout << "Sum of the last row is " << lastRowSum << "\n";
}

int main() {
    //printPascalTriangle(6);
    pascalTriangle(6);
    return 0;
}
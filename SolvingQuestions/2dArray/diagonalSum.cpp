#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// m[0][0] + m[1][1] + m[2][2]

int main()
{
    int arr[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
            // or
    vector<vector <int>> number = {{1,2,3} , {4,5,6} , {7,8,9}};
    for(auto b: number)
        {
            for(auto c:b)
            {
                cout << c << " ";
            }
            cout << endl;
        }
    
    int sum = 0;
    for(int r=0 ; r<3 ; r++)
    {
        for(int c=0 ; c<3 ; c++)
        {
            if(arr[r][c] == arr[c][r])
            {
                sum+= arr[r][c];
            }
        }
    }

    cout << "sum of diagonal is " << sum << endl;

    int row = number.size();
    int col = number[0].size();
}
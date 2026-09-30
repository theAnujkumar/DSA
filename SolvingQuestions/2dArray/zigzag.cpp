#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// m[0][0] + m[1][1] + m[2][2]


void waveForm(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();

    int count = 0;
    int total = row*col;

    for(int r=0 ; r<row ; r++)
    {
        // for odd case right -> left
        if(r&1)
        {
            for(int c=col-1 ; c>=0 ; c--)
            {
                cout << arr[r][c] << " ";
            }
        }
        else{
            for(int c=0 ; c<col ; c++)
            {
                cout << arr[r][c] << " ";
            }
        }
        cout << endl;
    }
}
// tc = O(n*m)
// sc = O(1)

void waveByUser(int n)
{
    // n = row , col
    int num = 1;
    for(int i=0 ; i<n ; i++)
    {
        // for even case increasing order
        if(i%2 == 0)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout << num << " ";
                num++;
            }
        }
        // for odd case decreasing order
        else{
            int start = num + n - 1;
            for(int j=0 ; j<n ; j++)
            {
                cout << start << " ";
                start--;
            }
            // so that in even case increasing order maintain
            num += n;
        }
        cout << endl;
    }
}
// tc = O(n^2)
// Row 1 fi 1 to 5, row 2 fi 10 to 6, row 3 fi 11 to 15, and so on.

int main()
{
    int arr[4][4] = {{1,2,3,4} , {12,13,14,5} , {11,16,15,6} , {10,9,8,7}};
            // or
    vector<vector <int>> number = {{1,2,3,4} , {12,13,14,5} , {11,16,15,6} , {10,9,8,7}};
    for(auto b: number)
        {
            for(auto c:b)
            {
                cout << c << " ";
            }
            cout << endl;
        }
    
    // vector<int> ans =  spiralOrder(number);
    // for(auto i:ans)
    // {
    //     cout << i << " ";
    // }

    waveForm(number);

    cout << endl;

    int n = 5;
    waveByUser(n);

    int row = number.size();
    int col = number[0].size();
}
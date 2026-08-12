#include <bits/stdc++.h> 
#include <iostream>
#include<vector>
using namespace std;

// m[0][0] + m[1][1] + m[2][2]

int main()
{
    // int R,C;
    // cout << "enter the rows and column " << endl;
    // cin >> R >> C;

    // int internal[100][100] , external[100][100];

    // // internal marks
    // cout << "enter the internal marks " << endl;
    // for(int r=0 ; r<R ; r++)
    // {
    //     for(int c=0 ; c<C ; c++)
    //     {
    //         cin >> internal[r][c];
    //     }
    // }

    // // External marks
    // cout << "enter the External marks " << endl;
    // for(int r=0 ; r<R ; r++)
    // {
    //     for(int c=0 ; c<C ; c++)
    //     {
    //         cin >> external[r][c];
    //     }
    // }

    // int i,j;
    // cout << "enter the position " << endl;
    // cin >> i >> j;

    // int ans = internal[i][j] + external[i][j];
    // cout << "ans is " << ans << endl;



    int arr[2][2] = {{10,20} , {30,40}};
            // or
    vector<vector <int>> internal =  {{10,20} , {30,40}};
    vector<vector <int>> external =  {{15,25}, {35,45}};
        for(auto b: internal)
        {
            for(auto c:b)
            {
                cout << c << " ";
            }
            cout << endl;
        }
        for(auto b: external)
        {
            for(auto c:b)
            {
                cout << c << " ";
            }
            cout << endl;
        }
    
    //  student at position (i,j)
    int i=1,j=1;
    int ans = internal[i][j] + external[i][j];
    cout << "ans is " << ans << endl;
}

// marks stored in 2 separate 2d matrics of size R*C row,column
// find total marks of student at position (i,j)
//  R*C matrics -> internal marks

/*
2 2
10 20 
30 40 

15 25 
35 45
1 1

o/p -> internal[1][1] + external[1][1]
        = 40 + 45 = 85
*/
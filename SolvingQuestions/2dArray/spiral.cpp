#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// m[0][0] + m[1][1] + m[2][2]

vector<int> spiralOrder(vector<vector <int>> & arr)
{
    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();

    int count = 0;
    int total = row*col;

    // initialisation

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;

    while(count < total)
    {
        // print starting row
        for(int index=startingCol ; count < total && index<=endingCol ; index++)
        {
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;

        // print ending column
        for(int index=startingRow ; count < total && index<=endingRow ; index++)
        {
            ans.push_back(arr[index][endingCol]);
            count++;
        }
        endingCol--;

        // print ending row
        for(int index=endingCol ; count < total && index>=startingCol ; index--)
        {
            ans.push_back(arr[endingRow][index]);
            count++;
        }
        endingRow--;

        // print starting column
        for(int index=endingRow ; count < total && index>=startingRow ; index--)
        {
            ans.push_back(arr[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}


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
    
    vector<int> ans =  spiralOrder(number);
    for(auto i:ans)
    {
        cout << i << " ";
    }


    int row = number.size();
    int col = number[0].size();
}
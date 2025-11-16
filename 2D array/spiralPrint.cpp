#include<iostream>
#include<vector>
using namespace std;

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
    
    vector<vector <int>> number = {{1,2,3} , {4,5,6} , {7,8,9}};
    
    /*
    int r,c;
    cout << "\nenter the row and column ";
    cin >> r;
    cin >> c;
    cout << "\nenter the values =";
    
    
    for(int i=0 ; i<=r ; i++)
    {
        for(int j=0 ; j<=c ; j++)
        {
            cin >> number[i][j];
        }
    }
    */
    spiralOrder(number);
            
    return 0;
}

// tc = O(N*M)

// hw rotate matrix by 90 degree
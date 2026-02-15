#include<iostream>
#include<vector>
using namespace std;


// element sort in ascending order from left to right and top to bottom 

bool searchMatrix(vector<vector<int>> &matrix , int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col-1;

    while(rowIndex<row && colIndex>=0)
    {
        // 0 row ka last element
        int element = matrix[rowIndex][colIndex];

        if(element == target)
        {
            return 1;
        }

        if(element<target)
        {
            rowIndex++;
        }

        else {
            colIndex--;
        }
    }
    return 0;
} 

/*
    1 4 7 11 15
    2 5 8 12 19
    3 6 9 16 22
*/

int main()
{
    vector<vector <int>> number = {{1,2,3} , {4,5,6} , {7,8,9}};
    int target = 5;

    for(auto b: number)
    {
        for(auto c:b)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    bool result = searchMatrix(number,target);
    if(result)
    {
        cout << "present " << endl;
    }
    else{
        cout << "not present " << endl;
    }
            
    return 0;
}
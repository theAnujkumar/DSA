#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector <vector<int>> &matrix ,int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row*col -1;
    int mid = start + (end-start)/2;

    while(start<end)
    {
        int element = matrix[mid/col][mid%col];

        if(element == target)
        {
            return mid;
        }

        if(element < target)
        {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
        
        mid = start + (end - start)/2;
    }
    return 0;
}

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
#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void setZerosPrac(vector<vector<int>> &matrix)
{
	int r = matrix.size();
	int c = matrix[0].size();

	for(int i=0 ; i<r ; i++)
	{
		for(int j=0 ; j<c ; j++)
		{
            int row = i;
            int col = j;
			if(matrix[i][j] == 0)
			{
                // for left side  only col change
                int temp = col;
                while(temp >= 0)
                {
                    matrix[row][temp] = 0;
                    temp--;
                }

                // for right side
                temp = col;
                while(temp < c)
                {
                    matrix[row][temp] = 0;
                    temp++;
                }

                // for up side  only row change
                temp = row;
                while(temp >= 0)
                {
                    matrix[temp][col] = 0;
                    temp--;
                }

                // for down side
                temp = row;
                while(temp < r)
                {
                    matrix[temp][col] = 0;
                    temp++;
                }

				// while(j>=0)
				// {
				// 	matrix[i][j] = 0;
				// 	j--;
				// }
				// while(i>=0)
				// {
				// 	matrix[i][j] = 0;
				// 	i--;
				// }
                // wrong approach
			}
		}
	}
}

void setZeros(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();

    vector<int> row(r, 0);
    vector<int> col(c, 0);

    // Step 1: mark rows & columns
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(matrix[i][j] == 0)
            {
                // mark that row and col as zeros
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Step 2: fill zeros
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            // set to zeros
            if(row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] =0;
            }
        }
    }
}

void setZeros2(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();

    vector<int> row,col;

    // Step 1: mark rows & columns which we want to do zeros
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            if(matrix[i][j] == 0)
            {
                row.push_back(i);
                col.push_back(j);
            }
        }
    }

    // row-> 0
    for(int i=0 ; i<row.size() ; i++)
    {
        int index = row[i];
        for(int j=0 ; j<c ; j++)
        {
            matrix[index][j] = 0;
        }
    }

    // col -> 0
    for(int i=0 ; i<col.size() ; i++)
    {
        int index = col[i];
        for(int j=0 ; j<r ; j++)
        {
            matrix[j][i] = 0;
        }
    }
}

int main()
{
    // vector<vector <int>> number = {{7,19,3} , {4,21,0}};
    vector<vector <int>> number = {{1,1,1} , {1,0,1} ,{1,1,1}};
    cout << "before calling " << endl;
    for(auto row: number){
        for(auto val: row)
            cout<<val<<" ";
        cout<<endl;
    }

    setZeros(number);
    cout << "after calling " << endl;
    for(auto row: number){
        for(auto val: row)
            cout<<val<<" ";
        cout<<endl;
    }

    setZeros2(number);
    for(auto row: number){
        for(auto val: row)
            cout<<val<<" ";
        cout<<endl;
    }
}
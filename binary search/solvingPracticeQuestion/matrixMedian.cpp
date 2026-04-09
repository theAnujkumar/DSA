#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    vector<int> ans;
    int r = matrix.size();
    int c = matrix[0].size();

    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            ans.push_back(matrix[i][j]);
        }
    }

    sort(ans.begin(),ans.end());
    // sort(arr.begin(),arr.end(),greater<int>());         // O(nlogn)  in vector
    // sort(arr , arr+n);              in array
    for(auto i : ans)
    {
        cout << i << " ";
    }
    int len = ans.size();
    int start = 0;
    int end = len ;
    //int ans = 0;

    //int mid = (start + end)/2;
    //int mid = start + (end - start)/2;
    int mid = end/2;
    return ans[mid];
}

int main()
{
    // vector<vector <int>> number = {{7,19,3} , {4,21,0}};
    vector<vector <int>> number = {{2,6,9} , {1,5,11} ,{3,7,8}};
    cout << "before calling " << endl;
    for(auto row: number){
        for(auto val: row)
            cout<<val<<" ";
        cout<<endl;
    }

    cout << "ans is " << getMedian(number) << endl;

    cout << "after calling " << endl;
    for(auto row: number){
        for(auto val: row)
            cout<<val<<" ";
        cout<<endl;
    }


}
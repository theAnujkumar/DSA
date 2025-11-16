#include<iostream>
#include<vector>
using namespace std;


void solve(vector<int> nums , vector<int>output , int index , vector<vector<int>> &ans) 
{
    // base case
    if(index >= nums.size())
    {
        ans.push_back(output);
        return ;
    }

    // exclude case
    solve(nums,output,index+1,ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);

}

/*
void solve(vector<int> nums , vector<int>output , int s , int e, vector<vector<int>> &ans) 
{
    // base case
    if(s==e)
    {
        ans.push_back(output);
        return ;
    }

    // exclude case
    solve(nums,output,s+1,e,ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums,output,s+1,e,ans);

}
*/

vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums,output,index,ans);
        return ans;
    }


int main()
{
    
}
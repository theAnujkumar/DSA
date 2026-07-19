#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums , vector<int>output , vector<vector<int>> &ans , int s , int e) 
{
    if(s==e)
    {
        if(output.size() > 0)
        {
            ans.push_back(output);
            return;
        }
    }

    solve(nums,output,ans,s+1,e);

    int element = nums[s];
    output.push_back(element);
    solve(nums,output,ans,s+1,e);
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
        int s = 0;
        int e = nums.size();
        solve(nums,output,ans,s,e);
        return ans;
    }


int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = subsets(nums);
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
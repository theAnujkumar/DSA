#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums , vector<int>output,int index,vector<vector<int>>&ans)
{
    if(index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclusion
    solve(nums,output,index+1,ans);

    // inclusion
    output.push_back(nums[index]);
    solve(nums,output,index+1,ans);
}

vector<vector<int>>subset(vector<int> &nums)
{
    vector<int>output;
    vector<vector<int>>ans;
    int index = 0;
    solve(nums,output,index,ans);
    return ans;
}

void solveStr(string &str,string output,int index,vector<string> ans)
{
    if(index >=str.size())
    {
        if(output.length() > 0)
        {
            ans.push_back(output);
            return;
        }
    }

    solveStr(str,output,index+1,ans);

    output.push_back(str[index]);
    solveStr(str,output,index+1,ans);
}

vector<string> subquences(string &str)
{
    string output;
    vector<string> ans;
    int index=0;
    solveStr(str,output,index,ans);
    return ans;
}

void solvePhone(string digits,int index,string output,vector<string> ans,string mapping[])
{
    if(index > digits.length())
    {
        ans.push_back(output);
        return;
    }
    
    int num = digits[index] -'0'; // gives 2
    string value = mapping[num];    // gives abc

    for(int i=index ; i<value.size() ; i++)
    {
        output.push_back(value[i]);
        solvePhone(digits,index+1,output,ans,mapping);

        output.pop_back();
    }

}

vector <string> letterCombinations(string digits)
{
    string output = "";
    vector<string> ans;
    int index = 0;
    string mapping[10] = {"", "" , "abc" , "def" , "ghi"};
    solvePhone(digits,index,output,ans,mapping);
    return ans;
}


void solvePermutation(vector<int> &nums , vector<vector<int>> ans , int index)
{
    if(index > nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for(int j=index ; j>=0 ; j--)
    {
        swap(nums[index],nums[j]);
        solvePermutation(nums,ans,index+1);

        swap(nums[index],nums[j]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    int index = 0;
    vector<vector<int>> ans;
    solvePermutation(nums,ans,index);
    return ans;
}
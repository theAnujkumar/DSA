#include <stdio.h>
#include <conio.h>
#include <vector>
#include <string>

using namespace std;

void solve(vector<int> nums, vector<int> output , int index , vector<vector<int>> &ans)
{
    if(index >= nums.size())
    {
        ans.push_back(output);
        return ;
    }

    // exclude
    solve(nums,output,index+1,ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);
}


vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> output;
    vector<vector<int>> ans;
    int index = 0;
    solve(nums,output,index,ans);
    return ans;
}

void solve(string digits,string output,int index,string mapping[],vector<string> &ans)
{
    if(index >= digits.size())
    {
        return;
    }

    int number = digits[index]-'0';         // gives 2
    string value = mapping[number];            // gives abc

    for(int i=0 ; i<value.size() ; i++)
    {
        output.push_back(value[i]);
        solve(digits,output,index+1,mapping,ans);
        output.pop_back();
    }


}

vector <string> letterCombinations(string digits)
{
    vector<string> ans;
    string output = "";

    if(digits.length()==0)
    return ans;

    int index = 0;

    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,index,mapping,ans);
    return ans;


    // ex 2-> abc
}
void main()
{

  
}
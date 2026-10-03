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

void solveLetter(string digits , vector<string> ans,string output ,int index , string mapping[10])
{
    if(index >= digits.size())
    {
        ans.push_back(output);
        return ;
    }

    int val = digits[index] - '0';   // convert string/char to int
    string number = mapping[val];       // get all char of number

    for(int i=0 ; i<number.size() ; i++)
    {
        output.push_back(number[i]);
        solveLetter(digits,ans,output,index+1,mapping);

        output.pop_back();
    }
}

vector <string> letterCombinations(string digits)
{
    vector<string> ans;
    string output = " ";
    int index = 0;

    if(digits.size() == 0)
    {
        return ans;
    }

    string mapping[10] = {"", "" , "abc" , "def" , "ghi","jkl","mno","pqrs","tuv","wxyz"};
    solveLetter(digits,ans,output,index,mapping);
    return ans;
}

// k = child , n = parent
string kthChildNthGeneration(int n, long long int k)
{
    if(n==1)
    {
        return "M";
    }

    string parent = kthChildNthGeneration(n-1,(k+1)/2);

    // child odd
    if(k&1)
    {
        return parent;
    }
    if(parent == "M")
        return "F";
    else{
        return "M";
    }

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
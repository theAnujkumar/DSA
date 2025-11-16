#include<iostream>
#include<vector>
using namespace std;

void solve(string digits, string output , int index , vector<string> &ans , string mapping[])
{
    // base case
    if(index >= digits.length())
    {
        ans.push_back(output);
        return ;
    }

    // how to extract any number from string
    int number = digits[index] - '0';  // give 2
    string value = mapping[number];     // give abc

    for(int i=0 ; i<value.length() ; i++)
    {
        output.push_back(value[i]);     // take a then b then c
        solve(digits,output, index+1 ,ans,mapping);

        // do backtracking so that in start we get " " 
        output.pop_back();
    }
}

vector <string> letterCombinations(string digits)
{
    vector <string> ans;

    if(digits.length()==0)
    return ans;

    string output="";
    int index = 0;
    string mapping[10] = {"", "" , "abc" , "def" , "ghi"};

    solve(digits,output,index,ans,mapping);
    return ans;

    // ex 2-> abc
}
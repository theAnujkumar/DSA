#include<iostream>
#include<vector>
using namespace std;

void solve(string str , string output , int index , vector<string> &ans) 
{
    // base case
    if(index >= str.length())
    {
        // empty string not require
        if(output.length() > 0)
        {
            ans.push_back(output);
            return ;
        }
    }

    // exclude case
    solve(str,output,index+1,ans);

    // include
    char element = str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);
}

vector<string> subquences(string str)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str,output,index,ans);
    return ans;
}

int main()
{
    string str = "abc";
    vector<string> ans = subquences(str);
    for(auto i:ans)
    {
        // for(auto j:i)
        // {
        //     cout << j << " ";
        // }
        cout << i << " ";
        cout << endl;
    }
}
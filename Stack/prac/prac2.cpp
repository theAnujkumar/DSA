#include<iostream>
#include<stack>
#include<string>
using namespace std;

string rev(string str)
{
    string ans = "";
    stack <char> s;

    for(int i=0 ; i<str.length() ; i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    // for(auto ch : s)
    // {
    //     s.push_back(ch);
    // }

    while(!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }
    return ans;

}

int main()
{
    string str = "shera";

    cout << rev(str);

}
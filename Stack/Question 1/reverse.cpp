#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    string str = "bava";
    stack <char> s;

    for(int i=0 ; i<str.length() ; i++)
    {
        char ch = str[i];
        s.push(ch);

    }

    string ans="";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout << "answer is " << ans << endl;

    return 0;

    // tc = O(N)
    // sc = O(N)

}
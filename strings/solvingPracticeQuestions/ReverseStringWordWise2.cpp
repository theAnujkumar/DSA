#include <iostream>
using namespace std;
#include<algorithm>
#include<stack>

// using stack
string reverseStringWordWise(string input)
{
    stack<string> st;
    int n = input.length();

    // push all words into stack
    string word = "";
    for(int i=0 ; i<n ; i++)
    {
        if(input[i] == ' ')
        {
            st.push(word);
            word = "";
        }
        else{
            word += input[i];
        }
    }
    st.push(word);

    // pop from stack 1 by 1 string
    // build reverse string
    string result = " ";
    while(!st.empty())
    {
        result += st.top();
        st.pop();

        if(!st.empty())
        {
            result += " ";
        }
    }
    return result;
}

int main()
{
    // string s;
    // getline(cin, s);
    string s = "my name is sher";
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}

// tc and sc = O(N)
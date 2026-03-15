#include <bits/stdc++.h> 
#include<string>
#include<iostream>
#include<stack>
using namespace std;

int minimumParentheses(string pattern)
{
    int n = pattern.length();
    stack<int> st;
    int count = 0;
    
    for(int i=0 ; i<n ; i++)
    {
        char ch = pattern[i];

        if(ch=='(')
        // only for this char '(' push into stack
        {
            st.push(ch);
        }
        else{
            // ch == ')'
            // not push into stack only for read
            if(!st.empty())
            {
                st.pop();
            }
            // st.empty() = true
            else{
                count++;            // need one '(' for doing balance
            }
        }
    }
    cout << "count is " << count << endl;
    cout << "stack size is " << st.size() << endl;
    return count + st.size();
}

int main()
{
    //string s = "((())(";
    string s = "((()";
    int ans = minimumParentheses(s);
    cout << "output is " << ans << endl;
}

// tc = O(n)
// sc = O(n) // stack size

/*
🔎 Dry Run

Example

pattern = "())("

Step-by-step

char	    stack	    count
(	        (	        0
)	        empty no	    0
)	        empty	    1
(	        (	        1

End

stack size = 1

Final

count + stack = 1 + 1 = 2
*/
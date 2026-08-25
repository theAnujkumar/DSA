#include <bits/stdc++.h> 
#include<string>
#include<iostream>
#include<stack>
using namespace std;

int prec(char ch)
{
    if(ch == '^')
        return 3;

    else if(ch == '*' || ch == '/')
        return 2;

    else if(ch == '+' || ch == '-')
        return 1;

    else
        return -1;
}

string infixToPostfix(string s)
{
    stack<int> st;
    string ans = "";
    for(int i=0 ; i<s.size() ; i++)
    {
        // if operand then normal add into result
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') 
              || (s[i]>='0' && s[i]<='9'))
        {
            ans+= s[i];
        }

        // if open bracket then push into stack
        else if(s[i] == '(')
        {
            st.push(s[i]);
        }

        // if close bracket
        else if(s[i] == ')')
        {
            // it means any operand so,add into result then pop
            while(!st.empty() && st.top()!='(')
            {
                ans+= st.top();
                st.pop();
            }

            // it means stack me ')' bacha hai so pop
            if(!st.empty())
            {
                st.pop();
            }
        }

        // any operator came
        else{
            while(!st.empty() && prec(st.top()) > prec(s[i]))
            {
                ans+= st.top();
                st.pop();

            }
            // otherwise nomal push into stack
            st.push(s[i]);
        }

    }

    // any element left in stack
    while(!st.empty())
    {
        ans+= st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    string expression = "(a-b/c)*(a/k-l)";
    string ans = infixToPostfix(expression);
    cout << "ans is " << ans << endl;
}


// postfix evaluation
#include <bits/stdc++.h> 
#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

// redundant bracket = ((a+b))
// non = (a+b)

bool findRedundantBrackets(string &s)
{
    stack<char> st;

    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }

        else{
            // char ya toh ")" ya lower case

            if(ch == ')')
            {
                bool isRebundant = true;
                while(st.top() != '(')
                {
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRebundant = false;
                    } 
                    st.pop();
                }

                if(isRebundant == true)
                {
                    return true;
                }
                // for line no 22 bracket '('
                st.pop();
            }
        }
    }
    return false;
}
// tc = O(N)
#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);
    for(int i=n-1 ; i>=0 ; i--)
    {
        int num = arr[i];
        while(st.top() >= num)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(num);
    }
    return ans;
}

vector<int> nextLargestElement(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);
    for(int i=n-1 ; i>=0 ; i--)
    //for(int i=0 ; i<n ; i++)
    {
        int num = arr[i];
        while(st.top() <= num && !st.empty())
        {
            st.pop();
        }
        //ans[i] = st.top();
        ans[i] = st.empty() ? -1 : st.top();
        st.push(num);
    }
    return ans;
}

bool compare(char ch1,char ch2)
{
    if((ch1==')' || ch1=='}' || ch1==']') && (ch2=='(' || ch2=='{' || ch2=='['))
    {
        return true;
    }
    else{
        return false;
    }
}

bool isValidParenthesis(string s) 
{
    stack<int> st;
    int n = s.size();

    for(int i=0 ; i<n ; i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            st.push(s[i]);
        }
        else{
            if(st.empty())
            {
                return false;
            }
            bool ans = compare(s[i],st.top());
            if(ans)
            {
                st.pop();
            }
            else{
                return false;
            }
        //return true;
        }
    }
    if(st.empty())
    {
        return true;
    }
    else{
        return false;
    }
}

bool findRedundantBrackets(string &s)
{
    stack<int> st;
    for(char ch : s)
    {
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else{
            if(ch==')')
                {
                    bool isRedundant = true;
                    while(st.top()!='(')
                    {
                        if(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/')
                        {
                            isRedundant = false;
                        }
                        st.pop();
                    }

                    if(isRedundant == true)
                    {
                        return true;
                    }
                    st.pop();
                }
        }
    }
    return false;
}

int main()
{
    // string s = "{([]}";
    string s = "[]";
    bool ans = isValidParenthesis(s);
    if(ans)
    {
        cout << "yes valid" << endl;
    }
    else{
        cout << "not valid" << endl;
    }
    return 0;
}
#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int maxArea(int M[MAX][MAX], int n, int m)
{
    int area = largestRectangleArea(M[0],m);

    for(int i=1 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if(M[i][j] == 0)
            {
                M[i][j]=0;
            }
            else{
                M[i][j] = M[i][j] + M[i-1][j];
            }
        }
        area = max(area,largestRectangleArea(M[i],m));
    }

}

int largestRectangleArea(vector<int>& heights , int n)
{
    int n = heights.size();

    vector<int> next(n);
    next = nextSmallerElement(heights,n);

    vector<int> prev(n);
    prev = prevSmallerElement(heights,n);

    int area = INT16_MIN;
    for(int i=0 ; i<n ; i++)
    {
        int l = heights[i];

        if(next[i] == -1)
            next[i] = n;

        int b = next[i]-prev[i]-1 ;
        int maxArea = l*b;

        int area = max(area,maxArea);
    }
    return area;
}

vector<int>prevSmallerElement (vector<int>& heights,int n)
    {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=0 ; i<=n ; i++)
    {
        int curr = heights[i];
        while(s.top() != -1 && heights[s.top()] >= curr)
        {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
        }

vector<int> nextSmallerElement(vector<int>& heights, int n)
{
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);

    for(int i=n-1 ; i>=0 ; i--)
    {
        int curr = heights[i];
        while(st.top() != -1 && heights[st.top()] > curr)
        {
            st.pop();
        }
        ans[i] = (st.top());
        st.push(i);
    }
    return ans;
}

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
        else{   // ch = )
            if(ch == ')')
            {
                bool isrebundant = true;
            
                while(st.top()!='(')
                {
                    if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                    {
                        isrebundant = false;
                    }
                    st.pop();
                }
            }
            
        }
    }
}

int findMinimumCost(string str)
{
    if(str.length() & 1)  
        return 0;

    stack<int> st;

    for(auto i : str)
    {
        if(i == '(')
            st.push(i);

        else{
            if(st.top() == '(')
                st.pop();
            else{
                st.push(i);
            }
        }
    }

    int a = 0 , b=0;
    while(!st.empty())
    {
        if(st.top() == '(')
            a++;
        else{
            b++;
        }
    }
    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}


bool match(char a,char b)
{
    if ((a == '}' && b == '{') || 
        (a == ']' && b == '[') || 
        (a == ')' && b == '(')) 
        return true;

    return false;
}

bool isValidParenthesis(string s) 
{
    stack<char> st;

    for(auto i : s)
    {
        char ch = i;
        if(ch == '{' || ch == '[' || ch == '(')
        {
            st.push(ch);
        }

        else{   // ch = ')'  use ch for read
            if(st.empty())
                return false;
            
                bool compare = match(ch,st.top());
                if(!compare)
                {
                    return false;
                }
                else{
                    st.pop();
                }
        }
    }
    if(st.empty())  return true;
    return false;

}

int main() 
{
    // string name = "shera";
    // stack<char> st;

    // for(auto i : name)
    // {
    //     st.push(i);
    // }

    // // for(int i=0 ; i<name.length() ; i++)
    // // {
    // //     st.push(name[i]);
    // // }

    // string ans = "";
    // while(!st.empty())
    // {
    //     char ch = st.top();
    //     ans.push_back(ch);
    //     st.pop();
    // }
    // cout << "ans is " << ans;

     return 0;
}
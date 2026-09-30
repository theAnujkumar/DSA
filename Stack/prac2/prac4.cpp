#include <bits/stdc++.h> 
#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

class Stack
{
    // properties 
    public:
        int *arr;
        int top;
        int size;

    // behavior
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else{
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    int peak()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
            //cout << "stack is empty" << endl;
        }
        else{
            return false;
            //cout << "stack is non-empty" << endl;
        }

    }

};

void solve(stack<int>& s, int x)
{
    // base case 
   if(s.empty())
   {
        s.push(x);
        return;
   }

   int val = s.top();
   s.pop();

   solve(s,x);

   s.push(val);

}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack , x);
    return myStack;
}

void reverseStack(stack<int> &stack)
{
    if(stack.empty())
    {
        return;
    }

    int val = stack.top();
    stack.pop();

    reverseStack(stack);

    pushAtBottom(stack,val);
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

    for(char i : s)
    {
        char ch = i;
        if(ch == '{' || ch == '[' || ch == '(')
        {
            st.push(ch);
        }
        else{
            if(!st.empty())
            {
                char tope = st.top();
                bool compare = match(ch,tope);
                if(compare)
                {
                    st.pop();
                }
                else{
                    //st.push(tope);
                    return false;
                }
            }
            // if(st.empty())
            else
            {
                //st.push(ch);
                return false;
            }
        }
    }
    if(st.empty())
            {
                //st.push(ch);
                return true;
            }
    else{
        return false;
    }
}

int minimumParentheses(string pattern)
{
    int n = pattern.size();
    int count = 0;
    stack<char> st;

    for(char i : pattern)
    {
        char ch = i;
        if(ch=='(')
        {
            st.push(ch);
        }
        else{
            if(!st.empty())
            {
                st.pop();
            }
            else{
                count++;
            }
        }
    }
    cout << "count is " << count << endl;
    cout << "stack size is " << st.size() << endl;
    return count + st.size();
}

void solveDelete(stack<int>&inputStack, int n , int cnt)
{
    if(n/2 == cnt)
    {
        inputStack.pop();
        return ;
    }

    int curr = inputStack.top();
    inputStack.pop();

    solveDelete(inputStack,n,cnt+1);

    inputStack.push(curr);
}

void deleteMiddle(stack<int>&inputStack, int N)
{
    int cnt = 0;
    solveDelete(inputStack,N,cnt);
}

int findMinimumCost(string str)
{
    int n = str.size();
    if(n%2 == 1)
        return -1;

    stack<char> st;
    for(char i:str)
    {
        char ch = i;
        if(ch=='{')
        {
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }

    //stack contains invalid expression
    int a,b = 0;
    while(!st.empty())
    {
        if(st.top()=='{')
        {
            a++;
        }
        else{
            b++;
        }
        st.pop();
    }
    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}

bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(char i:s)
    {
        char ch = i;
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else{
            if(ch == ')')
            {
                bool isRedundant = true;
                while(st.top() != '(')
                {
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedundant = false;
                    }
                    st.top();
                }

                if(isRedundant == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
}

string infixToPostfix(string s)
{

}

int main()
{
    //string s = "{([]}";
    string s = "][";
    bool ans = isValidParenthesis(s);
    if(ans)
    {
        cout << "yes valid" << endl;
    }
    else{
        cout << "not valid" << endl;
    }

    string s1 = ")()";
    int ans1 = minimumParentheses(s1);
    cout << "output is " << ans1 << endl;

    string expression = "(a-b/c)*(a/k-l)";
    string ans3 = infixToPostfix(expression);
    cout << "ans is " << ans3 << endl;
    return 0;
}
// int main()
// {
//     // Stack myStack(5);

//     // myStack.push(1);
//     // myStack.push(2);
//     // myStack.push(3);
//     // myStack.push(4);
//     //myStack.push(5);

//     pushAtBottom(myStack,5);
//     cout << myStack.peak() << endl;

    
//     return 0;
// }

// tc = O(N)
// sc = o(n)

/*
Agar stack me N elements hain, to sabko pop karke wapas dalna padega.

Matlab ek call ki cost ≈ O(N)

Recursion depth bhi N tak jaa sakti hai → O(N) space
*/
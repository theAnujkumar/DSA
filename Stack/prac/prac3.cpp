#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValidParenthesis(string s)
{
    stack<char> st;

    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];

        if(ch == '{' || ch == '[' || ch == '(')
        {
            st.push(ch);
        }
        
        else{
            while(!st.empty())
            {
                char tp = st.top();
                if(ch=='}' && tp =='{')
                {
                    st.pop();
                }
            }

        }
    }

}

// void solve(stack<int>&inputStack, int cnt ,int size)
// {
//     // base case
//     if(cnt == size/2)
//     {
//         inputStack.pop();
//         return;
//     }

//     int temp = inputStack.top();
//     inputStack.pop();

//     solve(inputStack,cnt++,size);

//     inputStack.push(temp);

// }

// void deleteMiddle(stack<int>&inputStack, int N){
	
//    int count = 0;
   
//    solve(inputStack,count,N);
// }

void solve(stack<int>& st,int x)
{
    if(st.empty())
    {
        st.push(x);
        return;
    }

    int num = st.top();
    st.pop();

    solve(st,x);

    st.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return  myStack;
}

void reverseStack(stack<int> &stack)
{
    if(stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    pushAtBottom(stack,num);
}

int main()
{

    return 0;
}
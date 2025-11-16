#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

void reverseStack(stack<int> &st)
{
    stack<int> temp;

    while(!st.empty())
    {
        int num = st.top();
        temp.push(num);
        st.pop();
    }

    while(!temp.empty())
    {
        int num = temp.top();
        st.push(num);
        temp.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);

    cout << "Reversed stack: ";
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
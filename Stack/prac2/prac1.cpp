#include<iostream>
#include<stack>
using namespace std;

class Stack {
    int *arr;
    int top;
    int size;

    Stack(int size) {
        this->size = size;
        arr = new int [size];
        top = -1;
    }

    void push(int data)
    {
        if(size-top > 1)
        {
            top++;
            arr[top] = data;
        }
        else{
            cout << "overflow";
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout << "underflow";
        }
        else{
            top--;
        }
    }

    bool isEmpty()
    {
    if(top == -1)
    {
        //cout << "empty" << endl;
        return true;
    }
    else{
        return false;
    }
    }

};

void solve(stack<int>& st, int x)
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
    return myStack;
}

void reverseStack(stack<int> &stack)
{
    if(stack.empty())
    {
        return ;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    pushAtBottom(stack,num);
}

int main()
{
    // creation stack
    stack <int> s;

    // push operation
    s.push(5);
    s.push(6);

    // pop
    s.pop();

    cout << "top element is " << s.top() << endl;

    cout << "size is " << s.size() << endl;

    //cout << "is empty or not " << s.isEmpty();

    return 0;
}
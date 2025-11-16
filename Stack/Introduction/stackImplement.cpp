#include<iostream>
#include<stack>
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


int main()
{
    Stack s1(5);

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    cout << s1.peak() << endl;

    s1.pop();

    cout << s1.peak() << endl;

    if(s1.isEmpty())
    {
        cout << "stack is empty " << endl;
    }
    
    {
        cout << "stack is not empty " << endl;
    }
    return 0;
}
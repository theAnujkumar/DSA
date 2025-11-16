#include<iostream>
#include<stack>
using namespace std;

class Stack {
    public:

    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int [size];
        top = -1;
    }

    void push(int element)
    {
        if(size-top > 1)
        {
            top++;
            arr[top] = element;
        } 
        else{
            cout << "stack overflow";
        }
    }

    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else{
            cout << "underflow";
        }
    }

    int peak()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else{
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
};


int main()
{
    Stack s1(5);

    s1.push(4);
    s1.push(3);
    s1.push(1);

    s1.pop();
    s1.pop();
    
    cout << s1.peak();

    if(s1.isEmpty())
    {
        cout << "stack is empty " << endl;
    }
    cout << "stack is not empty " << endl;

    return 0;
}


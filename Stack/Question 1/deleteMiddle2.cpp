#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

void deleteMiddle(stack<int>&inputStack, int N)
{
    int count = 0;
    int mid = (N/2)+1;
    stack<int> temp;

    while(count < mid)
    {
        int num = inputStack.top();
        temp.push(num);
        count++;
    }

    inputStack.pop();

    while(!temp.empty())
    {
        inputStack.push(temp.top());
        temp.pop();
    }

}
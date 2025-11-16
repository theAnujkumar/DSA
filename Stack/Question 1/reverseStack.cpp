#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

void solve(stack<int>& s, int element)
{
    // base case 
    if(s.empty())
    {
        s.push(element);
        return ;
    }

    int num = s.top();
    s.pop();

    // recursive call
    solve(s,element);

    s.push(num);
}

stack<int> insertAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack , x);
    return myStack;
}

void reverseStack(stack<int> &stack) {
    
    // base case
    if(stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    // recursion bakee ko reverse kar ke le ayenga
    reverseStack(stack);

    insertAtBottom(stack,num);
}
// tc = O(N*N)

/*
Har step me ek element pop hoga aur baaki stack reverse karna hoga.

Us element ko bottom me dalne ke liye insertAtBottom call hoga.

1st element ke liye cost = O(N)

2nd element ke liye cost = O(N-1)

3rd element ke liye cost = O(N-2)

…

Last element ke liye cost = O(1)

Total cost = O(N + (N-1) + (N-2) + … + 1) = O(N²)
*/
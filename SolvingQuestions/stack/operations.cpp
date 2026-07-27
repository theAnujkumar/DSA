#include <bits/stdc++.h> 
#include <iostream>
#include <stack>
using namespace std;

// read integer n which is no. of strings to be inserted into stack
// read n no. of strings to be inserted into stack in given order
// read integer m no. of elements to be pop from stack
// pop m elements from stack
// print stack status -> empty or not ,top , left element

// input format
// 4 a b c d

int main()
{
    stack<string> st;
    int n = 4;

    // for(int i=0 ; i<n ; i++)
    // {
    //     string str;
    //     cin >> str;
    //     st.push(str);
    // }

    // read n no. of strings to be inserted into stack in given order
    st.push("A");
    st.push("B");
    st.push("C");
    st.push("D");

    // read integer m no. of elements to be pop from stack
    int m = 2;
    while(m!=0 && !st.empty())
    {
        cout << "pop element is " << st.top() << endl;
        st.pop();
        m--;
    }

    // print stack status -> empty or not , top , total left element
    if(st.empty())
    {
        cout << "stack is empty " << endl;
        //cout << "true" << endl;
    }
    else{
        cout << "stack is not empty " << endl;
        //cout << "false" << endl;
    }

    cout << "stack top element is " << st.top() << endl;


    cout << "size of stack is " << st.size() << endl;
                        // OR
    int cnt = 0;
    while(!st.empty())
    {
        cnt++;
        st.pop();
    }
    
    cout << "stack left element is " << cnt << endl;
}
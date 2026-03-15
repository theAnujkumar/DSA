#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

class SpecialStack {
    // data members
    stack<int> s;
    int mini = INT8_MAX;

    public:
        
    void push(int data) {
        // for 1st element
        if(s.empty())
        {
            s.push(data);
            mini = data;
        }

        else {

            if(data < mini)
            {
                int val = 2*data - mini;
                s.push(val);
                mini = data;
            }
            else{
                s.push(data);
            }
        }
    }

    int pop() {
        if(s.empty())
        {
            return -1;
        }
        
        int curr = s.top();
        s.pop();

        if(curr > mini)
        {
            return curr;
        }
        else{
            int prevMin = mini;
            int val = 2*mini - curr;
            mini = val;
            return prevMin;
            
        }
    }

    int top() {
        if(s.empty())
        {
            return -1;
        }

        int curr = s.top();
        if(curr < mini)
        {
            return mini;
        }
        else{
            return curr;
        }
    }
    /*
    bool isEmpty()
    {
        return s.empty();
    }
    */

    int getMin() {
        if(s.empty())
        {
            return -1;
        }
        return mini;
    }  
};
// tc and sc = O(N)
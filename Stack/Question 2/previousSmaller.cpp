#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

vector<int> prevSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    //for(int i=n-1 ; i>=0 ; i--)
    for(int i=0 ; i<n ; i++)
    {
        int curr = arr[i];
        while(s.top() >= curr)
        {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

vector<int> prevLargestElement(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);
    //for(int i=n-1 ; i>=0 ; i--)       not use
    for(int i=0 ; i<n ; i++)
    {
        int num = arr[i];
        while(!st.empty() && st.top() <= num)
        //while(st.top() <= num)
        {
            st.pop();
        }
        //ans[i] = st.top();
        ans[i] = st.empty() ? -1 : st.top();
        st.push(num);
    }
    return ans;
}

int main()
{
    vector<int> arr = {2,1,4,3};
    int n = arr.size();
    vector<int> ans = prevSmallerElement(arr,n);
    
    // for(auto i : ans)
    // {
    //     cout << i << " ";
    // }

    vector<int> ans2 = prevLargestElement(arr,n);
    for(auto i : ans2)
    {
        cout << i << " ";
    }
}
// tc = O(n)
// sc = O(n) of stack


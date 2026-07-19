#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1 ; i>=0 ; i--)
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
// in smallerElement we can get -1 at the end as least
// but in LargestElement we can get -1 at the end so we have to use
// ans[i] = st.empty() ? -1 : st.top();

vector<int> nextLargestElement(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> ans(n);
    st.push(-1);
    for(int i=n-1 ; i>=0 ; i--)
    //for(int i=0 ; i<n ; i++)
    {
        int num = arr[i];
        // stack ka top chota hai so, pop karo to find large
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
    //vector<int> ans = nextSmallerElement(arr,n);
    
    // for(auto i : ans)
    // {
    //     cout << i << " ";
    // }

    vector<int> ans2 = nextLargestElement(arr,n);
    for(auto i : ans2)
    {
        cout << i << " ";
    }
}
// tc = O(n)
// sc = O(n) of stack
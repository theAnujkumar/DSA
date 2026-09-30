
#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

class Solution {
    private:
        bool knows(int a,int b,vector<vector<int> >& mat , int n)
        {
            if(mat[a][b] == 1)
            {
                return true;
            }
            else{
                return false;
            }
        }
        
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        
        stack<int> st;
        int n = mat.size();

        // in stack all people push
        for(int i=0 ; i<n ; i++)
        {
            st.push(i);
        }

        // take two member for comparing
        while(st.size() > 1)
        {
            int a = st.top();
            st.pop();

            int b = st.top();
            st.pop();

            if(knows(a,b,mat,n))
            {
               st.push(b); 
            }
            else{
                st.push(a);
            }
        }

                    // st.top me element may be celebrity
            int candidate = st.top();
            
            // check rowcount 
            int rowCount = 0;
            for(int i=0 ; i<n ; i++)
            {
                if(mat[candidate][i] == 0)
                {
                    rowCount++;
                }
            }
            if(rowCount != n)
            {
                return false;
            }

            // check colcount
            int colCount = 0;
            for(int i=0 ; i<n ; i++)
            {
                if(mat[i][candidate] == 1)
                {
                    colCount++;
                }
            }
            if(colCount != n-1)
            {
                return false;
            }
        return candidate;
    }
};

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for(int i=n-1 ; i>=0 ; i--)
    {
        int curr = arr[i];
        // i want small so pop
        while(st.top() >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

vector<int> nextLargestElement(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for(int i=n-1 ; i>=0 ; i--)
    {
        int curr = arr[i];
        // i want small so pop
        while(!st.empty() && st.top() <= curr)
        {
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(curr);
    }
    return ans;
}

int main()
{
    vector<int> arr = {2,1,4,3};
    int n = arr.size();
    vector<int> ans = nextSmallerElement(arr,n);
    
    for(auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> ans2 = nextLargestElement(arr,n);
    for(auto i : ans2)
    {
        cout << i << " ";
    }
}
// tc = O(N)


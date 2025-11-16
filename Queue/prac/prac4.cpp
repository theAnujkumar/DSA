#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#include<map>
#include<unordered_map>
using namespace std;

string FirstNonRepeating(string &s)
{
    unordered_map<char,int> count;
    queue<int> q;
    string ans = "";

    for(auto ch : s)
    {
        count[ch]++;
        q.push(ch);

        while(!q.empty())
        {
            if(count[ch] > 1)
                q.pop();
            else
                ans.push_back(q.front());
                break;
        }
        if(q.empty())
        {
            ans.push_back('#');
        }
    }
}

vector<int> FirstNegativeInteger(vector<int>& arr, int k)
{
    deque<int> dq;
    vector<int> ans;
    int n = arr.size();

    for(int i=0 ; i<k ; i++)
    {
        if(arr[i] < 0)
        {
            dq.push_back(i);
        }
    }
    if(dq.size() > 0)
    {
        ans.push_back(arr[dq.front()]);
    }
    else
        ans.push_back(0);

    for(int i=k ; i<n ; i++)
    {
        if(!dq.empty() && dq.front()<=i-k)
            dq.pop_front();

        if(arr[i] < 0)
        {
            dq.push_back(i);
        }
        if(dq.size() > 0)
        {
        ans.push_back(arr[dq.front()]);
        }
        else
            ans.push_back(0);
    }
    return ans;
}
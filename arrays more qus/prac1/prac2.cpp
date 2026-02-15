#include<iostream>
#include<vector>
using namespace std;

vector<int> findPrefix(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n);
    ans[0] = arr[0];

    for(int i=1 ; i<n ; i++)
    {
        ans[i] = arr[i] + ans[i-1];
    }
    return ans;
}

int getSubarraySum(vector<int> prefix,int l ,int r)
{
    int n = prefix.size();
    if(l==0)
    {
        return prefix[r];
    }
    else{
        return prefix[r] - prefix[l-1];
    }
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    vector<int> prefix = findPrefix(arr);

    for(auto a : prefix)
    {
        cout << " " << a ;
    }

    cout << "Sum of [0..2] = " << getSubarraySum(prefix, 0, 2) << "\n"; // 1+2+3=6
}
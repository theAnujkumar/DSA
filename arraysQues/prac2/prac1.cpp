#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

unordered_set<int> findUnique(const vector<int>& arr) {
    unordered_map<int,int> freq;   // element -> count

    // 1st pass: frequency count
    for(auto num : arr)
    {
        freq[num]++;
    }

   unordered_set<int> uniqueElements;
   for(auto val : freq)
   {
    if(val.second == 1)
    {
        uniqueElements.insert(val.first);
    }
   }

    return uniqueElements;
}

vector<int> findUnique2(const vector<int>& arr)
{
    unordered_map<int,int> freq;   // element -> count

    // 1st pass: frequency count
    for(auto num : arr)
    {
        freq[num]++;
    }
    vector<int> ans;
    for(auto num : arr)
    {
        if(freq[num] == 1)
        {
            ans.push_back(num);
        }
    }
    return ans;
}

int pairSumOptimal(vector<int> &arr, int n, int target)
{
    int cnt = 0;
    unordered_map<int,int> mp;

    for(int i=0 ; i<n ; i++)
    {
        int comp = target - arr[i];
        if(mp.find(comp) != mp.end())
        {
            cnt += mp[comp];
        }
        mp[arr[i]]++;
    }
}

int main() {
    vector<int> arr = {1,2,2,3,4,4,5};
    unordered_set<int> unique = findUnique(arr);

    cout << "Unique elements: ";
    for (int x : unique) cout << x << " ";  // order not guaranteed (unordered_set)

    vector<int> arr2 = {1,2,2,3,4,4,5};
    vector<int> ans = findUnique2(arr2);

    cout << "Unique elements: ";
    for (int x : ans) cout << x << " ";  // order not guaranteed (unordered_set)
    return 0;
}

#include <bits/stdc++.h> 
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    // int n1;
    // cin >> n1;
    // vector<int> arr1;
    // cout << "enter the values " << endl;
    // int x;
    // for(int i=0 ; i<n1 ; i++)
    // {
    //     cin >> x;
    //     arr1.push_back(x);
    // }
    // // while(cin >> x)
    // // {
    // //     arr1.push_back(x);
    // // }

    // for(int i=0 ; i<n1 ; i++)
    // {
    //     cout << arr1[i] << " ";
    // }

    vector<int> arr = {1,4,1,3,2,5};
    int n = arr.size();

    if(arr.size() < n)
    {
        cout << "invalid " << endl;
    }

    for(auto ele : arr)
    {
        cout << ele << " " ;
    }

    cout << "after remove duplicates " << endl;
    
    vector<int> result;
    unordered_map<int,int> mp;

    for(auto it : arr)
    {
        // check count of arr elements one by one 
        // it comes first time so add into result and count++
        if(mp[it] == 0)
        {
            result.push_back(it);
            mp[it]++;
        }
        //else repeat so do nothing
    }

    // for output
    for(auto ele : result)
    {
        cout << ele << " " ;
    }
}
/*
for(char c : s) {
        if(!seen.count(c)) {
            ans += c;
            seen.insert(c);
        }
    }
*/
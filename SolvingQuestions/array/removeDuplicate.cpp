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
    unordered_set<int> seen;

    for(auto it : arr)
    {
        //if(seen.find(it) == seen.end())
        // in set there is no such element so insert into set 
        if(!seen.count(it))
        {
            result.push_back(it);
            seen.insert(it);
        }
        // else it repeat so do nothing
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
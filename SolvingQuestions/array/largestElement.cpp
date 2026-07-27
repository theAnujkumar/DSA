#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
#include<map>

// 1 -> x strictly increasing  and x->n strictly decreasing
// find the value x if exist -> yes , else -> no


int main()
{
    int arr[] = {1,9,8,3,4,5};
    int arr1[] = {1,3,4,3,2};
    int arr2[] = {1,4,3,3,2};
    int arr3[] = {1,3,3,2};

    map<int,int> freq;
    int mx = 0;
    //int n = arr1.size();

    for(int i=0 ; i<5 ; i++)
    {
        freq[arr2[i]]++;
        mx = max(mx,arr2[i]);
    }

    for(auto it : freq)
    {
        // for max element
        // if(it.first == mx && it.second > 1)
        // {
        //     cout << "false" << endl;
        //     return 0;
        // }

        //  for normal case
        // else if(it.second > 2)
        // {
        //     cout << "false" << endl;
        //     return 0;
        // }

        if((it.first == mx && it.second > 1) || (it.second > 2))
        {
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "true" << endl;
}
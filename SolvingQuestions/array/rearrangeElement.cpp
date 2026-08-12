#include <bits/stdc++.h> 
#include <iostream>
#include <map>
using namespace std;

int main()
{
    vector<int> arr1 = {9,1,10,1,2,5,99,1,3};
    int n = arr1.size();
    vector<int> arr2 = {2,1,9,5};
    int m = arr2.size();
    map<int,int> freq;
    
    // it store freq of arr1 elements
    for(int i=0 ; i<n ; i++)
    {
        freq[arr1[i]]++;
    }

    // traverse in arr2 and check is present in arr1 if yes, store in arr1
    int j = 0;
    for(int i=0 ; i<m ; i++)
    {
        while(freq[arr2[i]]>0)
        //while(freq[arr2[i]]-- > 0)
        {
            arr1[j++] = arr2[i];
            freq[arr2[i]]--;
        }
    }
   // after that all elements freq would become 0 except elements which not present in arr2

    // left elements in arr1 short in ascending order
    int start = j;
    for(auto &it : freq)
    {
        if(it.second>0)
        {
            arr1[j++] = it.first;
            it.second--;
        }
    }
    // for unordered map
    sort(arr1.begin()+start , arr1.end());

    cout << "ans is " << endl;
    for(auto i : arr1)
    {
        cout << i << " " ;
    }
    return 0;
}

//  tc = O(n)+O(nlogn) = O(nlogn)
//  sc = O(N)

    // output 
    // vector<int> arr1 = {2,1,1,1,9,5,3,10,99};

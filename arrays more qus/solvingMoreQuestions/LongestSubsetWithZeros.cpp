#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;


int LongestSubsetWithZeroSum(vector < int > arr) {

  int n=arr.size();
  int sum = 0;
  int maxlen = 0;
  unordered_map<int,int> mp;

  for(int i=0 ; i<n ; i++)
  {
    sum += arr[i];
    if(sum == 0)
    {
      maxlen = i+1;
    }

    // sum already in map so update
    if(mp.find(sum) != mp.end())
    {
      maxlen = max(maxlen , i-mp[sum]);
    }

    // create entry in map
    else{
      mp[sum] = i;
    }
  }
  // int n=arr.size();
  // int maxlen = 0;
  // for(int i=0 ; i<n ; i++)
  // {
  //   int currsum = 0;
  //   for(int j=i ; j<n ; j++)
  //   {
  //     currsum += arr[j];
  //     if(currsum == 0)
  //     {
  //       maxlen = max(maxlen,j-i+1);
  //     }
  //   }
  // }

  // tc = O(N^2)
  // sc = O(1)

  return maxlen;

}

// tc = O(n)
// sc = O(n)

/*
Sample Input 1:
2 
5
1 3 -1 4 -4
4
1 -1 2 -2 
Sample Output 1:
2
4 
Explanation for Sample Output 1:
In the first test case, the given array is (1, 3, -1, 4, -4). 
The sub-arrays we can create are (1), (3), (-1), (4), (-4), (1, 3), (3, -1), (-1, 4), (4, -4), (1, 3, -1), 
(3, -1, 4), (-1, 4, -4), (1, 3, -1, 4), (3, -1, 4, -4), (1, 3, -1, 4, -4). 
Out of them only (4, -4) is the sub array whose sum is zero.Length of this sub array is 2 
and hence we return 2 as the final answer.

In the second test case, the given array is (1, -1, 2, -2). 
The sub-arrays we can create are (1), (-1), (2), (-2), (1, -1), (-1, 2), (2, -2), (1, -1, 2), (-1, 2, -2), (1, -1, 2, -2). 
Out of them sub arrays with zer sum are (1, -1), (2, -2), (1, -1, 2, -2). 
Out of them only (1, -1, 2, -2) has the longest length of 4. 
Hence we return 4 as the final answer.
*/

/*
⏱️ Time Complexity:

👉 O(n)

Har element sirf ek baar process ho raha hai
Map operations (insert/find) → average O(1)
📦 Space Complexity:

👉 O(n)

Worst case me har prefix sum unique ho sakta hai → map me store hoga
⚠️ Important Note (Interviews)

👉 unordered_map ka worst case:

O(n) per operation (rare case - hash collision)

👉 Isliye theoretical worst:

O(n²)
BUT practically:
O(n) hi consider hota hai ✅
*/
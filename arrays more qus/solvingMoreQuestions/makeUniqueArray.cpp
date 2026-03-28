#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

// use map/set

int minElementsToRemove(vector<int> &arr)
{
    int cnt = 0;
	unordered_map<int,int> freq;
    // take counting of each number
    for(int num : arr)
    {
        freq[num]++;
    }

    for(int num : arr)
    {
        if(freq[num] > 1)
        {
            cnt++;
            freq[num]--;
        }
        // while(freq[num] != 1)
        // {
        //     cnt++;
        //     freq[num]--;
        // }
    }
    return cnt;
}

int main()
{
    vector<int> arr = {1,2,4,5,1,2};
    //vector<int> arr = {1,2,3,4};
    int ans = minElementsToRemove(arr);
    cout << "ans is " << ans;
}

/*
Sample Input 2 :
2
4
1 1 1 1
5
1 2 3 1 2
Sample Output 2 :
3
2
*/
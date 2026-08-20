#include<iostream>
#include<vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &arr , int k)
{
    int n = arr.size();
    vector<int> result;

        int windowSum = 0;
        int maxVal = INT8_MIN;

        // find max value for k size window
        for(int i=0 ; i<k ; i++)
        {
            maxVal = max(maxVal,arr[i]);
        }
        result.push_back(maxVal);
        //int maxSum = windowSum;

        for(int i=k ; i<n ; i++)
        {
            int maxVal = INT8_MIN;

            // it will increment loop value by 1 ex-> after 1 check from 3
            for(int j=i-k+1 ; j<=i ; j++)
            {
                maxVal = max(maxVal,arr[j]);
            }
            result.push_back(maxVal);
        }
     return result;
}

int main()
{
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    //vector<int> arr = {1,3,-1,2,6};
    int k = 3;

    cout << "original array " << endl;
    for(auto a : arr)
    {
        cout << a << " " ;
    }
    vector<int> ans = maxSlidingWindow(arr,k);

    cout << "outcome array " << endl;
    for(auto a : ans)
    {
        cout << a << " " ;
    }
}

// tc = O(n)
// sc = O(1)


/*
You are given an array of integers nums, there is a sliding window of size k 
which is moving from the very left of the array to the very right. 
You can only see the k numbers in the window. Each time the 
sliding window moves right by one position.

Return the max sliding window.

 

Example 1:

Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation: 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
Example 2:

Input: nums = [1], k = 1
Output: [1]
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
1 <= k <= nums.length
*/
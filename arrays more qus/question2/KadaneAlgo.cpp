// Case 2: Kadane’s Algorithm (variable size, max subarray sum)

//👉 Problem: Find maximum sum of any continuous subarray (any size)

#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int> &arr)
{
    int maxSum = arr[0];
    int currSum = arr[0];

    for(int i=1 ; i<arr.size() ; i++)
    {
        currSum = max(arr[i],currSum + arr[i]);
        maxSum = max(currSum,maxSum);
    }
    return maxSum;

}

int main()
{
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(arr);
}

// tc = O(n)
// sc = O(1)

/*
Sliding Window sirf size 3 subarrays check karta hai. fixed size

Kadane’s sab size subarrays check karta hai (automatically best pick hota hai). variable size
*/
/*
Start: [1]                 → currentSum = 1, maxSum = 1
Add -2 → [1, -2] = -1      → negative → reset → new window [3]
[3]                        → currentSum = 3, maxSum = 3
Add -1 → [3, -1] = 2       → keep going
Add 2  → [3, -1, 2] = 4    → maxSum = 4
Add -3 → [3, -1, 2, -3] = 1 → still ≥0 → continue

Sliding Window (k=3):       [1,-2,3] → [-2,3,-1] → [3,-1,2] → [-1,2,-3]
Kadane’s Algorithm:          [1] → reset at -2 → [3,-1,2] → keep/grow/shrink

*/
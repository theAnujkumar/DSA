#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Find sum of subarray from index l to r.

vector<int> prefixSum (vector<int> &arr)
{
    int size = arr.size();
    vector<int> prefix(size);
    prefix[0] = arr[0];

    for(int i=1 ; i<size ; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    return prefix;
}

int getSubarraySum(vector<int> &prefixSum , int l,int r)
{
    if(l==0)
    {
        return prefixSum[r];
    }
    return prefixSum[r] - prefixSum[l-1];
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    
    vector<int> prefix = prefixSum(arr);

    for (int x : prefix) 
        cout << x << " ";

    cout << "Sum of [0..2] = " << getSubarraySum(prefix, 0, 2) << "\n"; // 1+2+3=6
    cout << "Sum of [1..3] = " << getSubarraySum(prefix, 1, 3) << "\n"; // 2+3+4=9
    cout << "Sum of [2..4] = " << getSubarraySum(prefix, 2, 4) << "\n"; // 3+4+5=12

}
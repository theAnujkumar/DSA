#include <iostream>
#include <unordered_set>
#include<vector>
#include<string>
using namespace std;

string longestCommonPrefix(vector<string> &arr, int n)
{
    string longestPrefixSum = "";
    int s = arr[0].size();
    for(int i=0 ; i<s ; i++)
    {
        // take c char
        char ch = arr[0][i];

        // compare c from others character
        for(int j=1 ; j<n ; j++)
        {
            // if(ch == arr[j][i])
            // {
            //     longestPrefixSum += arr[0][i];
            // }
            if(ch != arr[j][i] || i >= arr[j].size())
            {
                return longestPrefixSum;
            }
            // if(ch == arr[j][i])  then do nothing running loop
        }
        // add c then move to next char i.e. o
        longestPrefixSum += ch;
    }
    return longestPrefixSum;
}

int main() {
    vector<string> arr = {"coding","codezon","codingninja","coder"};
    int n=arr.size();
    //cout << n;
    string ans = longestCommonPrefix(arr,n);
    cout << "ans is " << ans << endl;
}

/*
Time Complexity
O(n × m)

Where:

n = number of strings

m = length of smallest string

Example:

["coding","codezon","coder"]
n = 3
m ≈ 5

Worst case comparisons:

3 × 5 = 15

space Complexity = O(1)
*/
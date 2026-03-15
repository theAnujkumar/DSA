#include <iostream>
#include <unordered_set>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &arr, int n)
{
    string ans = "";

    sort(arr.begin(),arr.end());

    string first = arr[0];
    string last = arr[n-1];

    for(int i=0 ; i<first.size() ; i++)
    {
        if(first[i] == last[i])
        {
            ans += first[i];
        }
        else{
            break;
        }
    }
    return ans;
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

Sorting:

O(n log n)

Comparison:

O(m)

Total:

O(n log n + m)

Usually likhte hain:

O(n log n)
*/
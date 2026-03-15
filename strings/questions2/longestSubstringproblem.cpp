#include <iostream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_set<char> seen;
    int left = 0;
    int maxLen = 0;

    for(int right=0 ; right<s.length() ; right++)
    {
        // until get char same as in right part move left pointer
        while(seen.count(s[right]))
        {
            // if element already in set then remove from set and left++
            seen.erase(s[left]);
            left++;
        }

        // normal insert element
        seen.insert(s[right]);

        // take maxlen
        maxLen = max(maxLen,right-left+1);

    }

    return maxLen;

}
int main() {
    cout << lengthOfLongestSubstring("abcabcbb");
}

// tc = O(N)
// sc = O(256) = O(1)
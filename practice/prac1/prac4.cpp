#include <bits/stdc++.h> 
#include<string>
#include<iostream>
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

int lengthOfLongestSubstrings(string s)
{
    int n = s.size();
    int left = 0;
    int maxlen = INT8_MIN;
    unordered_set<char> seen;

    for(int right = 0 ; right<n ; right++)
    {
        // get same char as in seen set
        while(seen.count(s[right]))
        {
            seen.erase(s[left]);
            left++;
        }

        // get 1st time this char
        seen.insert(s[right]);

        // find maxlen
        maxlen = max(maxlen,right-left+1);
    }
    return maxlen;
}

string encode(string &message)
{
    int i=0;
    int n = message.length();
    cout << "length is " << n;
    string ans = "";

    //for(int i=0 ; i<n ; i++)
    while(i<n)
    {
        int j=i+1;
        while(j<n && message[i] == message[j])
        {
            j++;
        }
        ans += message[i];
        ans += to_string(j-i);
        
        // i move to next character
        i=j;
    }
    return ans;
}
// string encode(string &message)
// {
//     int i=0;
//     int ansIndex = 0;
//     int n = message.length();
//     cout << n;

//     //for(int i=0 ; i<n ; i++)
//     while(i<n)
//     {
//         int j=i+1;
//         while(j<n && message[i] == message[j])
//         {
//             j++;
//         }
//         message[ansIndex] = message[i];
//         ansIndex++;

//         int count = j-i;
        
//             string cnt = to_string(count);
//             for(char ch : cnt)
//             {
//                 message[ansIndex++] = ch;
//             }
//         i=j;
//     }
//     message.resize(ansIndex);
//     return message;
// }

string encode2(string &message)
{
    int i=0;
    int index = 0;
    int n = message.length();
    cout << n;

    //for(int i=0 ; i<n ; i++)          try to avoid use for loop in string of unknown length
    while(i<n)
    {
        char current = message[i];
        int count = 0;
        while(i<n && message[i] == current)
        {
            i++;
            count++;
        }
        message[index] = current;
        index++;
        
        string cnt = to_string(count);
        for(char ch : cnt)
        {
            if(index < message.length())
            {
                message[index] = ch;
            }
            // example ab = a1b1 length = 2 , resizeto = 4
            else{
                message.push_back(ch);
            }
            index++;
        }
    }
    message.resize(index);
    return message;
}

string encoding(string &message)
{
    int i=0;
    int ansIndex = 0;
    int n = message.size();

    while(i<n)
    {
        char current = message[i];
        int count = 0;
        while(i<n && message[i] == current)
        {
            i++;
            count++;
        }
        message[ansIndex] = current;
        ansIndex++;

        string cnt = to_string(count);
        for(auto ch : cnt)
        {
            message[ansIndex++] = ch;
        }
    }
    // while(i<n)
    // {
    //     int j = i+1;
    //     while(i<n && message[i]==message[j])
    //     {
    //         j++;
    //     }
    //     // new char found 
    //     // so store into ansIndex
    //     message[ansIndex] = message[i];
    //     ansIndex++;
    //     int cnt = j-i;
    //     string count = to_string(cnt);
    //     for(auto ch : count)
    //     {
    //         message[ansIndex++] = ch;
    //     }

    //     i=j;
    // }
    message.resize(ansIndex);
    return message;
}

int main() {
    string s = "aaaabbbccdaa";
    //string ans = encode(s);
    string ans = encoding(s);
    cout << "output is " << ans << endl;

    // "a4b3c2d1a2". output
}

// tc = O(N)
// sc = O(N)

/*
Outer loop → i 0 se n tak jaata hai

Inner loop → har character sirf ek hi baar visit hota hai

Important point:

👉 j pointer kabhi peeche nahi jaata
👉 Har element max 1 baar count hota hai

So total iterations = n

to_string(count) worst case me log(n) digits ho sakti hai
Lekin total digits bhi overall n ke proportional hi hongi.
*/
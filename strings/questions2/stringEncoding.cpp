#include <bits/stdc++.h> 
#include<string>
#include<iostream>
using namespace std;

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

int main() {
    string s = "aaaabbbccdaa";
    string ans = encode(s);
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
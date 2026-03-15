#include <bits/stdc++.h> 
#include <iostream>
#include<string>
#include <unordered_set>
using namespace std;

//string mirroring(string &s, int n , int mid)
// string mirroring(string &s, int n)
// {
//     string orginalString = s;
//     int st=0 , e=n-1;
//     int mid= n/2;
//     // while(st<=e)
//     // {
//     //     swap(s[st++],s[e--]);
//     // }
//     while(st<=mid)
//     {
//         {
//             swap(s[st++],s[e--]);
//         }
//     }

//     if(s > orginalString)
//     {
//         return s;
//     }
//     else{
//         s[mid]++;
//         mirroring(s,n);
//     }

//     return s;
// }

string mirroring(string &s, int n) 
{
    string orginalString = s;
    int st=0 ;
    int e=n-1;
    
    // step 1 do mirroring
    while(st<e)
    {
        // do mirroring not swapping
        // from left to right
        s[e--] = s[st++];
    }
    cout << "after 1st mirrroring string is " << s << endl;

    // Step 2: check if palindrome > original
    if(s > orginalString)
    {
        return s;
    }

    else{
        int mid = (st+e)/2;
        cout << "mid is " << mid << endl;
        cout << "element of mid is " << s[mid] << endl;
        cout << "string is " << s << endl;

        // Step 3: increment middle and handle carry
        while(mid >= 0 && s[mid] == '9')
        {
            s[mid] = '0';
            mid--;
        }

        if(mid >= 0)
        {
            s[mid]++;
            cout << "mid is " << mid << endl;
            cout << "element of mid is " << s[mid] << endl;
            cout << "string is " << s << endl;
        }

        // mirroring again
        int st=0 ;
        int e=n-1;
        while(st<e)
        {
        // do mirroring not swapping
        // from left to right
        s[e--] = s[st++];
        cout << "mid is " << mid << endl;
        cout << "element of mid is " << s[mid] << endl;
        cout << "string is " << s << endl;
        }
    }
    return s;
}

string nextLargestPalindrome(string s, int length){
    // step check palindrome or not
    // string ans = mirroring(s , length , mid);

    string ans = mirroring(s , length);
    cout << "ans is " << ans << endl;
}

int main() {
    //string s = "1221";
    string s = "999";
    int length = s.size();

    nextLargestPalindrome(s,length);
    
}


// ex 1221 = 1331
//   999 = 1001


// 1️⃣ Check all digits are 9
// 2️⃣ Left ko right me mirror karo
// 3️⃣ Agar palindrome > N → return
// 4️⃣ Agar ≤ N → middle increment karo
// 5️⃣ Fir dobara mirror karo

// 💡 Important observation

// Is problem me 3 main cases hote hain:

// All 9

// Mirror palindrome already greater

// Mirror palindrome smaller → middle increment + mirror
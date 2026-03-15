#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void reverse(char begin,char end)
// {
//     int s=begin;
//     int e=end-1;

//     while(s<e)
//     {
//         swap(begin,end);
//     }
// }

string reverseWords(string s)
{
    string result = "";
    string words = "";

    for(char ch : s)
    {
        if(ch != ' ')
            words += ch;
        else{
            reverse(words.begin(),words.end());
            result += words + " ";
            words = "";
        }
    }
    // last word
    reverse(words.begin(), words.end());
    result += words;
    return result;
}

int main()
{
    //string s = "My name is sher";
    // string s;
    // cout << "enter string " << endl;
    // getline(cin,s);
    // string ans = reverseWords(s);
    // cout << "result is " << ans << endl;

    string s = "my name is";
    cout << reverseWords(s) << endl; // Output: ym eman si
}

// tc and sc = O(N)
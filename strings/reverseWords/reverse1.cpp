#include<string>
#include<iostream>
#include<vector>
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
    string words = "";
    string result = "";

    for(char ch : s)
    {
        if(ch != ' ')
            words += ch;
        else{
            reverse(words.begin(),words.end());
            result += words =+ " ";
            words = "";
        }
    }
    // last word
    reverse(word.begin(), word.end());
    result += word;
    return result;
}
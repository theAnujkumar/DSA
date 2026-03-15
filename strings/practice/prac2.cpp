#include<iostream>
using namespace std;
#include<string>
#include<math.h>
#include<vector>
#include<map>

bool isAnagram(string s1 , string s2)
{
    map<char,int> freq;
    for(char ch : s1)
    {
        freq[ch]++;
    }
    for(char ch:s2)
    {
        freq[ch]--;
        if(freq[ch]<0)
        {
            return false;
        }
    }
    return true;
}

bool checkEqual(int a[26] , int b[26])
{
  for(int i=0 ; i<26 ; i++)
  {
    if(a[i] != b[i])
    {
        return false;
    }
  }
  return true;
}

bool checkInclusion(string s1 , string s2) 
{
 int count1[26] = {0};
 for(int i=0 ; i<s1.length() ; i++)
 {
    int index = s1[i]-'a';
    count1[index]++;
 }

 int i = 0;
 int windowSize = s1.length();
 int count2[26] = {0};
 while(i<windowSize && i<s2.length())
 {
    int index = s2[i]-'a';
    count1[index]++;
    i++;
 }

 if(checkEqual(count1,count2))
 {
    return true;
 }

 //aage ki window process karna
 while(i<s2.length())
 {
    char newChar = s2[i];
    int index = newChar-'a';
    count2[index]++;

    char oldChar = s2[i-windowSize];
    int index = oldChar-'a';
    count2[index]--;
    if(checkEqual(count1,count2))
    {
        return true;
    }
 }
 return false;
}


int main() {
    string s1 = "listen", s2 = "silent";
    if (isAnagram(s1, s2))
        cout << "Anagram hai";
    else
        cout << "Anagram nahi hai";
}
#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

char getMaxOccurChar(string s)
{
  int arr[26] = {0};

  for(int i=0 ; s.length() ; i++)
  {
    char ch = s[i];
    int num = 0;
    if(ch >= 'a' && ch <='z')
    {
      num = ch-'a';
    }
    else{
      num = ch-'A';
    }

    arr[num]++;
  }

  int maxi = -1;
  int ans = 0 ;
  for(int i=0 ; i<26 ; i++)
  {
    if(arr[i] > maxi)
    {
      maxi = arr[i];
      ans = i;
    }
  }

  char finalAns = ans + 'a';
  return finalAns;
}

char getMaxOccuringChar(string s)
{
  unordered_map<char,int> freq;

  for(char ch : s)
  {
    freq[ch]++;
  }
  
  for(auto y : freq)
  {
    cout << y.first << " " << y.second << endl;
  }

  int maxi = -1;
  char ans ;
  for(auto y:freq)
  {
    if(y.second > maxi)
    {
        maxi = y.second;
        ans = y.first;
    }
  }
  cout << "char is " << ans << " and frequency is " << maxi << endl;
  return ans;
}

void reverse(char begin,char end)
{
  int s = begin;
  int e = end-1;

  while(s<e)
  {
    swap(begin,end);
  }
}

string reverseWords(string s)
{
  string word = " ";
  string ans = " ";

  for(char ch : s)
  {
    if(ch != ' ')
    {
      word += ch;
    }
    else{
      reverse(word.begin(),word.end());
      ans += word += "";
      word = " ";
    }
  }
  reverse(word.begin(),word.end());
  ans += word ;
  return ans;
}

int main()
{
    string s = "apple";
    string str = "hello sher guys";
    cout << "enter the string ";

    // cout << getMaxOccurChar(s);
    cout << getMaxOccuringChar(s);

    cout << reverseWords(str);
}

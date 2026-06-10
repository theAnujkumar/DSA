#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

//s = "programming"
string removeDuplicates(string s)
{
  //unordered_map<char,int> freq;
  unordered_set<char> seen;
  string ans = "";
  for(char ch:s)
  {
    if(!seen.count(ch))
    {
      ans+= ch;
      seen.insert(ch);
    }
  }
}

// input = {a,a,a,b,b,c,d,d};
// output = {a,3,b,2,c,d,2}

int compress(vector<char> &chars)
{
  int i=0;
  int ansIndex = 0;
  int n=chars.size();

  while(i<n)
  {
    int j=i+1;
    while(j<n || chars[i]==chars[j])
    {
     j++;
    }
    // ya toh old char full traverse
    // new diff char found
    chars[ansIndex++] = chars[i];

    int count = j-i;
    if(count > 1)
    {
     string cnt = to_string(count);
    }
  }
}
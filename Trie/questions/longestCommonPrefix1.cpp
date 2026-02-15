#include<iostream>
#include<vector>
#include<string>
using namespace std;

class TrieNode{
    public:
      char data;
      TrieNode* children[26];
      bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for(int i=0 ; i<26 ; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

string longestCommonPrefix(vector<string> &arr, int n)
{
    string ans;

    // for 1 word i.e.. ninja 
    for(int i=0 ; i<arr[0].length() ; i++)
    {
        // take one by one character
        char ch = arr[0][i];

        bool match = true;

        // take another all word and compare
        for(int j=1 ; j<n ; j++)
        {
            if(ch != arr[j][i] || arr[j].size() < i)
            {
                match = false;
                break;
            }
        }

        if(match == false)
        {
            break;
        }
        else{
            ans.push_back(ch);
        }
    }
    return ans;
}

int main()
{
    vector<string> arr = {"ninja","night","nil"};
    int n=3;

    cout << longestCommonPrefix(arr,n);
}


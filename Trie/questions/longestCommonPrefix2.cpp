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

class Trie{
    public:
    TrieNode* root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            root->isTerminal = true;
            return ;
        }

        // assumption , words will be capital
        int index = word[0]-'A';
        TrieNode* child;

        // present
        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }

        // absent
        else{
            child = new TrieNode(word[0]);
            //root->childCount++;
            root->children[index] = child;
        }

        insertUtil(child,word.substr(1));

    }

    void insertWord(string word)
    {
        insertUtil(root,word);
    }

    void lcp(string str,string &ans)
    {
        for(int i=0 ; i<str.size() ; i++)
        {
            char ch = str[i];

            if(root->childCount == 1)
            {
                ans.push_back(ch);
                int index = ch-'a';
            }
        }
    }


};

string longestCommonPrefix(vector<string> &arr, int n)
{
    Trie *t = new Trie('\0');

    // insert all string into trie
    for(int i=0 ; i<n ; i++)
    {
        t->insertWord(arr[i]);
    }

    string first = arr[0];
    string ans = "";

    t->lcp(first,ans);
    return ans;
}

int main()
{
    vector<string> arr = {"ninja","night","nil"};
    int n=3;

    cout << longestCommonPrefix(arr,n);

    return 0;
}


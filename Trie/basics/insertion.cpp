#include<iostream>
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

    bool searchUtil(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        // present
        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }

        else{
            return false;
        }

        return searchUtil(child,word.substr(1));
    }

    bool searchWord(string word)
    {
        searchUtil(root,word);
    }

    bool PrefixUtil(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            return true;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        // present
        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }

        else{
            return false;
        }

        return PrefixUtil(child,word.substr(1));
    }

    bool startwith(string prefix)
    {
        PrefixUtil(root,prefix);
    }

};


int main()
{
    Trie *t = new Trie();

    t->insertWord("AB");

    //cout << "present or not" << t->searchWord("ABC") << endl;
    cout << "present or not" << t->searchWord("AB") << endl;

    return 0;
}


// remove word, and how space optimize      
// if(word.length() == 0)
//         {
//             root->isTerminal = false;
//             return ;
//         }


// insertion Tc=O(l)
// searching  TC = O(l)
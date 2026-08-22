#include <bits/stdc++.h> 
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


    // bool isIsomorphic(string s, string t) {
    //     char seen[128] = {};

    //     for(int i=0 ; i<s.length() ; i++)
    //     {
    //         char ch = s[i];
    //         if(!seen[ch])
    //         {
    //             for(auto val : seen)
    //             {
    //                 if(val == t[i])
    //                     return 0;
    //                 else if(seen[ch] != t[i])
    //                     return 0;
    //             }
    //             seen[ch] = t[i];
    //         }      
    //     }
    //     return true;
    // }

    bool isIsomorphic(string s, string t) 
    {
        char mapST[256] = {};
        char mapTS[256] = {};

        for(int i=0 ; i<s.length() ; i++)
        {
            // both character are unseen so create mapping
            if(mapST[s[i]] == 0 && mapTS[t[i]] == 0)
            {
                mapST[s[i]] = t[i];
                mapTS[t[i]] = s[i];
            }

            // either one or none are unseen
            // one mapping already exist but mapping with another element
            // example a -> b already but a->c cannot be
            else{
                if(mapST[s[i]] != t[i] || mapTS[t[i]] != s[i])
                    return false;
                // else both are mapping right ex->  g->d and d->g
            }
        }
        return true;
    }

    int main() {
    string s1 = "eg", s2 = "ad";
    if (isIsomorphic(s1, s2))
        cout << " Isomorphic hai";
    else
        cout << "Isomorphic nahi hai";
    }

    bool isIsomorphic2(string s, string t)
    {
        if(s.length() != t.length())
            return false;

        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;

        for(int i = 0; i < s.length(); i++)
        {
            // both character are unseen so create mapping
            if(mapST.find(s[i]) == mapST.end() &&
            mapTS.find(t[i]) == mapTS.end())
            {
                mapST[s[i]] = t[i];
                mapTS[t[i]] = s[i];
            }
            // either one or none are unseen
            // one mapping already exist but mapping with another element
            // example a -> b already but a->c cannot be
            else
            {
                if(mapST[s[i]] != t[i] || mapTS[t[i]] != s[i])
                    return false;
                // else both are mapping right ex->  g->d and d->g
            }
        }

        return true;
    }

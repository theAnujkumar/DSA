#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

char getMaxOccurChar(string s)
{
    int arr[26] = {0};

    // create an array to count of character
    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        // lowercase
        int number=0;
        if(ch>='a' && ch<='z') {
            number = ch -'a';
        }

        else {
            number = ch - 'A';
        }

        arr[number]++;
    }

    // find maximum occurence character
    int maxi = -1 , ans = 0;
    for(int i=0 ; i<26 ; i++)
    {
        if(maxi<arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

char getMaxOccuringChar(string s) {
    unordered_map<char,int> freq;

    // count frequency
    for (char ch : s) {
        if (ch != ' ')   // ignore spaces
            freq[ch]++;
    }

    // find max
    char ans;
    int maxFreq = 0;
    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            ans = it.first;
        }
    }
    cout << "Max Occurring Char: " << ans << " ("
         << maxFreq << " times)" << endl;
    return ans;
}

int main()
{
    string s;
    cout << "enter the string ";
    cin >> s;

    cout << getMaxOccurChar(s);
}

// n = string ke length
// tc = O(n)+O(1) = O(n)
// sc = O(n)
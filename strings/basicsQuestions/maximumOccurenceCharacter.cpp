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
        // example a

        // lowercase
        int number=0;
        if(ch>='a' && ch<='z') {
            // a-a = 0
            number = ch -'a';
        }

        else {
            number = ch - 'A';
        }

        arr[number]++;
        // a ka count 0+1 = 1
    }

    // find maximum occurence character
    int maxi = -1 , ans = 0;
    for(int i=0 ; i<26 ; i++)
    {
        // arr[i] takes count no. of times occur this character
        // 1
        if(maxi<arr[i])
        {
            ans = i;                // 0 because 0th index
            maxi = arr[i];          // 1
        }
    }

    char finalAns = 'a' + ans;         // 0+'a' = a
    return finalAns;
}

// tc = O(N+K)  n=string length , k=character set size(26)
// sc = O(K)

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

// 2nd loop saree string tak nhi chalta sirf 26,freq tak chalta hai


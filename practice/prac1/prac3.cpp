#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<unordered_set>
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

void replaceWords(string &str)
{
    int st = 0;
    int n = str.size();

    for(int i=0 ; i<n ; i++)
    {
        if(i==n || i==' ')
        {
            reverse(str.begin()+st , str.end()+i);
            st = i+1;
        }
    }
}

string removeDuplicate(string s)
{
    string ans = "";
    unordered_set<char> seen;
    for(char ch:s)
    {
        if(!seen.count(ch))
        {
            ans += ch;
            seen.insert(ch);
        }
    }
}

// s = bsabcsdfg and find = abc  ans = bssdfg
string removeOccurence(string s , string part)
{
    while(s.length()!=0 && s.find(part) < s.length())
    {
        s.erase(s.find(part) , part.length());
        // index of first char to remove
        // no. of chars to remove
    }
    return s;
}

string reverseWords(string s)
{
    string result = "";
    string words = "";

    for(char ch : s)
    {
        if(ch!=' ')
        {
            words+= ch;
        }
        // space came it means next word came
        else{
            reverse(words.begin(),words.end());
            result+= words += " ";
            words = "";
        }
    }
}
// using stack
string reverseStringWordWise(string input)
{
    stack<string> st;
    int n = input.length();

    // push all words into stack
    string word = "";
    for(int i=0 ; i<n ; i++)
    {
        if(input[i] == ' ')
        {
            st.push(word);
            word = "";
        }
        else{
            word += input[i];
        }
    }
    st.push(word);

    // pop from stack 1 by 1 string
    // build reverse string
    string result = " ";
    while(!st.empty())
    {
        result += st.top();
        st.pop();

        if(!st.empty())
        {
            result += " ";
        }
    }
    return result;
}

string removeOccurence(string s , string part)
{
    while(s.length()!=0 && part.length()<s.length())
    {
        s.erase(s.find(part),part.length());
    }
}

// using stack
string reverseStringWordWises(string input)
{
    stack<string> st;
    int n = input.length();

    // push all char of string into stack
    string word = "";
    for(int i=0 ; i<n ; i++)
    {
        if(input[i] == ' ')
        {
            st.push(word);
            word = " ";
        }
        else{
            word+= input[i];
        }
    }
    st.push(word);

    string ans = "";
    while(!st.empty())
    {
        ans += st.top();
        st.pop();
        if(!st.empty())
        {
            ans+= " ";
        }
    }
}

string longestCommonPrefix(vector<string> &arr, int n)
{
    // it means 1st string char length
    int s = arr[0].size();
    string longestPrefixSum = "";

    // it will traverse till 1st string char length
    for(int i=0 ; i<s ; i++)
    {
        // take 1st char like 'c'
        int ch = arr[0][i];

        for(int j=1 ; j<n ; j++)
        {
            if(ch!=arr[j][i] && i>arr[j].size())
            {
                return longestPrefixSum;
            }
        }
        longestPrefixSum+= ch;
    }
}

string longestCommonPrefix2(vector<string> &arr, int n)
{
    sort(arr.begin() , arr.end());
    string result = "";

    string arr1 = arr[0];
    string arr2 = arr[n-1];

    for(int i=0 ; i<arr1.size() ; i++)
    {
        if(arr1[i] == arr2[i])
        {
            result += arr[i];
        }
        else{
            break;
        }
    }
    return result;
}

int main()
{
    //string s = "My name is sher";
    // string s;
    // cout << "enter string " << endl;
    // getline(cin,s);
    // string ans = reverseWords(s);
    // cout << "result is " << ans << endl;

    string s = "my name is";
    cout << reverseWords(s) << endl; // Output: ym eman si
}

// tc and sc = O(N)
#include<iostream>
#include<string>
using namespace std;

int findSubSequence(string str1,string str2)
{
    int i=0 , j=0;
    int cnt = 0;
    int s1 = str1.size();
    int s2 = str2.size();

    while(i<s1 && j<s2)
    {
        if(str1[i] == str2[j])
        {
            i++;
            j++;
            cnt++;
        }
        else{
            i++;
        }
    }
    return cnt;
}

bool subSequence(string str1,string str2)
{
    int i=0 , j=0;
    int cnt = 0;
    int s1 = str1.size();
    int s2 = str2.size();

    while(i<s1 && j<s2)
    {
        if(str1[i] == str2[j])
        {
            i++;
            j++;
            cnt++;
        }
        else{
            i++;
        }
    }
    return j == s2;
}

int main()
{
    string str1 = "abcde";
    string str2 = "ace";

    bool ans = subSequence(str1,str2);
    if(ans)
    {
        cout << "yes , str2 is subSequence of str1" << endl;
    }
    else{
        cout << "no , str2 is not subSequence of str1" << endl;
    }

    int result = findSubSequence(str1,str2);
    cout << "subsequence is " << result << endl;
}

// two pointer 
// tc = O(N)


/*
if(s[i]==t[j])

1+solve(i+1,j+1)

else

max(solve(i+1,j),
    solve(i,j+1))
*/
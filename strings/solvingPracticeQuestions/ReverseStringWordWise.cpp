#include <iostream>
using namespace std;
#include<algorithm>

string reverseStringWordWise(string input)
{
    // int i=0;
    // int j=result.size()-1;
    // while(i<j)
    // {
    //     swap(result[i++],result[j--]);
    // }
    // string result = " ";

    // reverse entire string
    reverse(input.begin(),input.end());

    int n=input.size();

    // reverse each word
    int start=0;
    for(int i=0 ; i<=n ; i++)
    {
        // jabh space ya end char mile toh do reverse
        if(i==n || input[i]==' ')
        {
            reverse(input.begin() + start , input.begin() + i);
            start = i+1;
            // next word start (not use start=start+1)
        }
    }
    
    return input;
}

int main()
{
    // string s;
    // getline(cin, s);
    string s = "my name is sher";
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}

// tc = O(N)
// sc = O(1)
#include<iostream>
#include<string>
#include<vector>
using namespace std;

// input = {a,a,a,b,b,c,d,d};
// output = {a,3,b,2,c,d,2}

int compress(vector<char> &chars)
{
    int i=0;
    int ansIndex = 0;
    int n = chars.size();

    while(i<n)
    {
        int j=i+1;
        while(j<n && chars[i]==chars[j])
        {
            j++;
        }

        // ya toh array pora traverse ho gyaa
        // ya new/diff character mil gya

        // store old character
        chars[ansIndex++] = chars[i];
        
        int count = j-i;
        if(count > 1)
        {
            // converting counting into single digit and save into ans
            string cnt = to_string(count);
            for(char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        // moving to new character
        i=j;
    }
    return ansIndex;
}
int main()
{

}

// tc = O(N)  n=size
// sc = O(1)
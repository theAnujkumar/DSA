#include <iostream>
#include <unordered_set>
using namespace std;

// int makeBeautiful(string str) {
// 	int n = str.size();
//     int ans = 0;

//     for(int i=0 ; i<n ; i=i+2)
//     {
//         // int j=1;
//         // while(i<=j && j<n)
//         // {
//         //     if((str[i]=='0' && str[j]!='1') || (str[i]=='1' && str[j]!='0'))
//         //     {
//         //         ans++;
//         //         j=j+2;
//         //     }
//         // }
//         char ch = str[i];
//         for(int j=1 ; j<n ; j=j+2)
//         {
//             if((ch=='0' && ch!='1') || (ch=='1' && ch!='0') && j<i)
//             {
//                 ans++;
//                 j=j+2;
//             }
//         }
//     }
//     return ans;

// }

string generate(int n,bool zero)
{
    string ans = "";
    // ex 0101
    if(zero)
    {
        ans += '0';
        n--;
    }
    // 1010
    else{
        ans += '1';
        n--;
    }

    while(n != 0)
    {
        // check for previous index 
        char temp = ( ans[ans.size()-1] == '0') ? '1' : '0';

        // insert next values
        ans += temp;
        n--;
    }
    return ans;
}

int difference(string str , string s , int n)
{
    int count = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(str[i] != s[i])
        {
            count++;
        }
    }
    return count;
}

int makeBeautiful(string str)
{
    int n = str.size();

    // for case 0101
    string g1 = generate(n,true);
    int diff1 = difference(str,g1,n);

     // for case 1010
    string g2 = generate(n,false);
    int diff2 = difference(str,g2,n);

    return min(diff1,diff2);
}

int main() {
    int ans = makeBeautiful("0001");
    //int ans = makeBeautiful("0000");
    cout << " ans is " << ans << endl;
}

/*
Sample Input 1 :
2
0000
1010
Sample Output 1 :
2
0

0101
and 
1010
*/
#include <bits/stdc++.h> 
#include<string>
#include<iostream>
using namespace std;

int minimumParentheses(string pattern)
{
    // int n = pattern.length();
    int balance = 0;
    int count = 0;
    for(char ch : pattern)
    {
        if(ch == '(')
        {
            balance++;
        }
        else{
            // next ch = )
            if(balance > 0)
            {
                balance--;
            }
            // next char = (
            // so for doing balance required ) 
            else{
                count++;
            }
        }
    }
    // example string "((()("  bal = 3-1 = 2 , count = 1 total =3
    return count+balance ;
}
// int minimumParentheses(string pattern) {
//     int n=pattern.length();
//     int count = 0;

//     for(int i=0 ; i<n-1 ; i++)
//     {
//         int first = pattern[i];
//         int second = pattern[i+1];
        
//             if((first == ')'  && second == '(')
//             || (first == '('  && second != '(') || (first == ')'  && second != ')'))
//             {
//                 count++;
//             }
//             // else if((first == '('  && second != ')'))
//             // {
//             //     continue;
//             // }
//             // else if((first == '('  && second == '(') || (first == ')'  && second == ')')){
//             // count++;
//             // }
        
//         //count++;
              
//     }
//     return count;
// }

int main()
{
    string s = "((()()(";
    int ans = minimumParentheses(s);
    cout << "output is " << ans << endl;
}
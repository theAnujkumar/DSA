#include<iostream>
#include<string>
using namespace std;

// s = bsabcsdfg and find = abc  ans = bssdfg
string removeOccurence(string s , string part)
{
    while(s.length()!=0 && s.find(part) < s.length())
    {
        s.erase(s.find(part) , part.length());
    }
    return s;
}
void main()
{

}
// kya s ke andar find vala part hai kya aur hai toh konse index par kya s.length se kam hai
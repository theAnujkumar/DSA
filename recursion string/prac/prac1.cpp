#include<iostream>
using namespace std;

void reverse(string &name,int s,int e)
{
    cout << "call recieved for " << name << endl;

    if(s>e)
    {
        return;
    }
    swap(name[s],name[e]);
    s++;
    e--;

    reverse(name,s,e);
}   

bool checkPalindrome(string str,int s,int e)
{
    if(s>e)
    {
        return true;
    }
    if(str[s]!=str[e])
    {
        return false;
    }
    else
        return checkPalindrome(str,s++,e--);
}

int main()
{
    string name = "sher khan";
    int len = name.length();
    cout << name << endl;
    reverse(name,0,name.length()-1);
    cout << name;

    string str = "nitin";
    bool ans = checkPalindrome(str,0,str.length()-1);
    cout << "ans is " << ans;
}
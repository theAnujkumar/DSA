#include<iostream>
using namespace std;

// remember string will be passed by reference 
void reverse(string& str , int s , int e)
{
    cout << "string is " << str << endl;

    if(s>e)
    {
        return ;
    }
    swap(str[s++],str[e--]);
    //s++ , e--;

    //reverse(str,s+1,e-1);
    reverse(str,s,e);
}

bool checkPalindrome(string& str , int s , int e)
{
    cout << "string is " << str << endl;

    if(s>e)
    {
        return true;
    }
    if(str[s] != str[e])
    {
        return false;
    }
    else{
        s++ , e--;
        // return checkPalindrome(str,s+1,e-1);
        return checkPalindrome(str,s,e);
    }
}

int main()
{
    string name = "mahaBali";
    int n = name.length();

    reverse(name,0,n-1);

    cout << name << endl;
    string name2 = "nitin";
    int m = name2.length();

    bool isPalindrome = checkPalindrome(name2,0,m-1);

    if(isPalindrome)
    {
        cout << "palindrome" << endl;
    }

    else
    {
        cout << "not palindrome" << endl;
    }

}
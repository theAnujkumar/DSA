#include<iostream>
using namespace std;
#include<string>
#include<vector>

string replaceSpace(string s)
{
    string temp = "";

    for(int i=0 ; i<s.length() ; i++)
    {
        if(s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('$');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}

char toLowerCase(char ch)
{
    if((ch>='a') || (ch<='z'))
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

void reverse(char name[] , int n)
{
    int s=0;
    int e = n-1;

    while(s<e)
    {
        swap(name[s++],name[e--]);
    }

}

bool isPalindrome(char a[] , int n)
{
    int s=0;
    int e = n-1;

    while(s<e)
    {
        if(toLowerCase(a[s])!=toLowerCase(a[e]))
        {
            return false;
        }
        else{
            s++ , e--;
        }
        //swap(name[s++],name[e--]);
    }
    return true;
}

int getLength(char name[])
{
    int count = 0;
    for(int i=0 ; name[i]!='\0' ; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char name[20] ;
    cout << "enter your name" << endl;
    cin >> name;
    //name[10] = '\0';
    cout << name << endl;

    // cout << "length is " << getLength(name);
    // int length = getLength(name);
    // cout << endl;

    // cout << "reverse name is ";
    // reverse(name,length);
    // cout << name;
    // cout << endl;

    // cout << "palindrome or not " << isPalindrome(name,length);

    string text = "jai ho sher jeo dhan dhana dhan";
    cout << replaceSpace(text);
    cout << sizeof(text) << endl;

    // how to take full string from user and display
    return 0;
}
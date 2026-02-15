#include<iostream>
using namespace std;
#include<string>

int main()
{
    string name;
    string nam = "shera";
    int c=6;

    cout << "size is, " << sizeof(string) << "!\n";
    // size of object not actual characters
    cout << "size is, " << sizeof(name) << "!\n";
    cout << "size is, " << sizeof(int) << "!\n";
    cout << "size is, " << sizeof(c) << "!\n";
    cout << "size is, " << nam.size() << "!\n";

    char arr[6] = {'a','b','\0','c','d','\0'};
    string arr1;
    cout << "enter the array" << endl; 
    for(int i=0 ; i<6 ; i++)
    {
        cout << "arr is " << arr[i] << "!\n";
    }

    cout << "enter the string" << endl;
    getline(cin,arr1);
    cout << "string is " << arr1;

    string s = "ChatGPT is awesome!";
    cout << sizeof(s) << endl;    // always 24
    cout << s.size() << endl;     // 20

    /*
        | Member            | Size (64-bit machine) |
| ----------------- | --------------------- |
| Pointer           | 8 bytes               |
| Size variable     | 8 bytes               |
| Capacity variable | 8 bytes               |

    */

    // cout << "enter your name" << endl;
    // getline(cin,name);

    // cout << "Hello, " << name << "!\n";
    // cout << "size is, " << sizeof(name) << "!\n";
    // cout << "size is, " << sizeof(string) << "!\n";

}
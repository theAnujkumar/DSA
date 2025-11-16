#include<iostream>
using namespace std;
#include<string>

int main()
{
    string name;
    int c=6;

    cout << "size is, " << sizeof(string) << "!\n";
    cout << "size is, " << sizeof(name) << "!\n";
    cout << "size is, " << sizeof(int) << "!\n";
    cout << "size is, " << sizeof(c) << "!\n";

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



    // cout << "enter your name" << endl;
    // getline(cin,name);

    // cout << "Hello, " << name << "!\n";
    // cout << "size is, " << sizeof(name) << "!\n";
    // cout << "size is, " << sizeof(string) << "!\n";

}
#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,3,7,4,5};
    char ch[6] = "abcde";

    // print address
    cout << arr << endl;

    // print string
    cout << ch << endl;

    char *c = &ch[0];

    // print entire string
    cout << c << endl;
    
    cout << *c << endl;

    // not do such things
    char temp = 'z';
    char *p = &temp;

    cout << p <<endl;
    cout << *p <<endl;

    // arr[i] = *(arr + i);

    
    


}
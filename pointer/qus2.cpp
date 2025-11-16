#include<iostream>
using namespace std;

int main()
{
    int arr[] = {11,21,31,41};

    cout << *(arr) << " " << *(arr+2) << endl;
    cout << arr << " " << &arr << " " << &(arr[0]) << endl;
    cout << (arr+1) << endl; 

    int *p = arr;
    cout << p[2] << endl;       // *(p+2)

// qus
    //int *ptr = arr++;         // it is not possible because it try to change in symbol table
    //cout << *ptr << endl;

    // qus
    char ch = 'a';
    char *ptr = &ch;
    //*ptr = *ptr + 1;
    ch++;
    cout << *ptr << endl;


    // qus
    char arr1[] = "abcde";
    //                      in case of char array print whole string 
    char *p2 = &arr1[0];
    cout << p2 << endl;

    p2++;
    cout << p2 << endl;         // print after a i.e.. bcde

    // qus
    char str[] = "sher";
    char *p3 = str;
    cout << str[0] << " " << p3[0] << " " << p3 << endl;


}
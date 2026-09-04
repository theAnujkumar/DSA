#include<iostream>
using namespace std;

// arr[i] = *(arr + i);
// i[arr] = *(i + arr);

int main()
{
    int arr[10]={2,5,7};
    int arr2[5] = {23 ,144,55,90};

    cout << "address of first memory " << arr << endl;
    cout << "value is " << arr[0] << endl;
    cout << "address of first memory " << &arr[0] << endl;
    cout << "value is " << *arr << endl;
    cout << "value is " << *arr + 1<< endl;     // value = value + 1
    cout << "value is " << *(arr + 1)<< endl;   // index= 0+1 = 1
    cout << "value is " << *(arr) + 1<< endl;   // same as line 16

    cout << "value of arr index 2 is " << arr2[2] << endl;
    cout << "value of arr is " << *(arr2 + 2) << endl;

    int temp[10];
    cout << "size is " << sizeof(temp) << endl;

    int *ptr = &temp[0];
    cout << "size is " << sizeof(ptr) << endl;
    cout << "size is " << sizeof(*ptr) << endl;   // 8 bytes
    cout << "size is " << sizeof(&ptr) << endl;

    cout << "size is " << sizeof(temp) << endl;
    cout << "size is " << sizeof(*temp) << endl;
    cout << "size is " << sizeof(&temp) << endl;

    int a[20] = {1,2,3,5};

    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;              // these 3 give same output

    int *p = &a[0];
    cout << p << endl;          // address of a[0]
    cout << *p << endl;
    cout << &p << endl;         // address of p

    // error
    // a = a + 1;
    // cannot change the address

    cout << p << endl;
    p = p + 1;
    cout << p << endl;
    // change the address


}
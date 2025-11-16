#include<iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;
    cout << *p << endl;
}

void update(int *p)
{
    //p = p + 1;            // address will change only inside update function 
    cout << "inside " << p << endl;

    *p = *p + 2;
}

//int getSum(int arr[] , int n)
int getSum(int *arr , int n)
// both are same
{
    cout << "size is " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;

    print(p);

    cout << "adress before update " << p << endl;
    cout << "value before update " << *p << endl;
    update(p);
    cout << "adress after update " << p << endl;
    cout << "value after update " << *p << endl;

    int arr[6] = {1,2,3,4,5,6};
    cout << "sum is = " << getSum(arr,6) << endl;
    cout << "sum is = " << getSum(arr+3,3) << endl;  // 4+5+6
    

    return 0;
}
#include<iostream>
using namespace std;

/* bad practice
int& func(int a)
{
    int num = a;
    int &ans = num;
    return ans;
}
// after this function num , ans will destroye i.e.. local variable
// memory access hi na kar paye

int* fun(int n)
{
    int *ptr = &n;
    return ptr;
}
*/

// pass by value create copy
void update(int n)
{
    n++;
}

// pass by reference 
// memory same but give it another name
void update2(int &n)
{
    n++;
}

int main()
{
    int i = 5;

    // create reference variable
    // same memory different name
    int &j = i;

    cout << i << " " << j << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    i++;
    cout << j << endl;


    int n=3;

    cout << "before update " << n << endl;
    update(n);
    update2(n);
    cout << "after update " << n << endl;

    //func(n);
    //fun(n);
}
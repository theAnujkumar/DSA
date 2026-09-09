#include<iostream>
using namespace std;

int main()
{
    char ch = 'a';
    cout << sizeof(ch) << endl;

    char *ch1 = &ch;
    cout << "ch1 is " << *ch1 << &ch1 << endl;

    int *arr1 = new int[5];
    int *i = new int;
    delete i;
    delete []arr1;

    int row;
    cout << "enter the rows" << endl;
    cin >> row;

    int col;
    cout << "enter the columns" << endl;
    cin >> col;

    // creating 2D array
    int **arr = new int*[row];

    // mutiple rows lana
    for(int i=0 ; i<row ; i++)
    {
        arr[i] = new int[col];
    }
    
    int **arr2 = new int*[row];
    for(int i=0 ; i<row ; i++)
    {
        arr2[i] = new int[col];
    }
    // releasing  memory
    for(int i=0 ; i<row ; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;
}

// void / Null pointer 
// address typeCasting

// jaggered array
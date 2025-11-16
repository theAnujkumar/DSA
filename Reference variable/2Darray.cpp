#include<iostream>
using namespace std;

int main()
{
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
    
    // taking input
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cin >> arr[i][j];
        }
    }

    // output
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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
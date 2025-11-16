#include<iostream>
using namespace std;

int main() {
    
    int i = 6;
    int &j = i;

    cout << j << endl;

    char *ch = new char;

    // //int *arr = new int[5];

    // int n;
    // cout << "enter the range" << endl;
    // cin >> n;

    // int *arr = new int[n];

    // cout << "enter the elements" << endl;
    // for(int i=0 ; i<n ; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "the elements are " << endl;
    // for(int i=0 ; i<n ; i++)
    // {
    //     cout << arr[i] << " "; 
    // }

    int row;
    cout << "enter the rows" << endl;
    cin >> row;

    int col;
    cout << "enter the columns" << endl;
    cin >> col;

    int **arr = new int*[row];

    for(int i=0 ; i<row ; i++)
    {
        arr[i] = new int[col];
    }

    for(int i=0 ; i<row ; i++)
    { 
        delete [] arr[i];
    }
    delete [] arr;
    
    return 0;
}
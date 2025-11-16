#include<iostream>
#include<string>
using namespace std;

int wavePrint(int arr1[][2] , int row , int col)
{
    for(int c=0 ; c<3 ;  c++)
    {
        // odd case
        if(c&1)
        {
            for(int r=row-1 ; r>=0 ; r--)
            {
                cout << arr1[r][c] << " ";
            }
        }
        else{
            for(int r=0 ; r<row ; r++)
            {
                cout << arr1[r][c] << " ";
            }
        }
    }
}

int main()
{
    int arr1[2][2] ;

    cout << "enter the value " << endl;
    for (int r=0 ; r<2 ; r++)
    {
        for(int c=0 ; c<2 ; c++)
        {
            cin >> arr1[r][c];
        }
    }

    cout << "number are \n";
    for(int r=0 ; r<2 ; r++)
    {
        for(int c=0 ; c<2 ; c++)
        {
            cout << arr1[r][c] << " ";
        }
        cout << "\n";
    }

    wavePrint(arr1 , 3 , 3);

    return 0;
}
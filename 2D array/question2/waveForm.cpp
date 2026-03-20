#include<iostream>
using namespace std;

int wavePrint(int arr[][3] , int row , int col)
{
    //int arr[3][3] ;

    for(int c=0 ; c<3 ; c++)
    {
        if(c&1)
        {
            // odd case --> bottom to top
            for(int r=row-1 ; r>=0 ; r--)
            {
                cout << arr[r][c] << " ";
            }
        }
        else
        {
            // 0 or even case --> top to bottom
            for(int r=0 ; r<row ; r++)
            {
                cout << arr[r][c] << " ";
            }
        }
    }
}

// time complexity is O(n*m)
int main()
{
    int arr[3][3];


    cout << "enter the values= ";

    
    // values row wise
    for(int r=0 ; r<3 ; r++)
    {
        for(int c=0 ; c<3 ; c++)
        {
            cin >> arr[r][c];
        }
    }
    

    wavePrint(arr , 3,3);

}

// tc = O(N*M)
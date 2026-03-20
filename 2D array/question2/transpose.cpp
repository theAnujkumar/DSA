#include<iostream>
#include<string>
using namespace std;


int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    //int arr[2][3] = {{1,11,111} , {2,22,222}};
    //int arr[3][4];


    cout << "enter the values= ";

    /*
    // values row wise
    for(int r=0 ; r<3 ; r++)
    {
        for(int c=0 ; c<4 ; c++)
        {
            cin >> arr[r][c];
        }
    }
    */


    cout << "number are \n";
    for(int r=0 ; r<3 ; r++)
    {
        for(int c=0 ; c<3 ; c++)
        {
            cout << arr[r][c] << " ";
        }
        cout << "\n";
    }

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=i ; j<3 ; j++)
        {
            cout << "before swap " << endl;
            cout << arr[i][j] << " " ;
            swap(arr[i][j],arr[j][i]);
            cout << "after swap " << endl;
            cout << arr[i][j] << " " ;
        }
    }
    // [0][0] = [0][0] = 1,1
    // example [0][1] = [1][0] = 4,2
    // [0][2] = [2][0]  = 7,3

    cout << "after transpose " << endl;
    for(int r=0 ; r<3 ; r++)
    {
        for(int c=0 ; c<3 ; c++)
        {
            cout << arr[r][c] << " ";
        }
        cout << "\n";
    }

    //for(int i=0;i<3;i++)
        //reverse(arr[i], arr[i]+3);

    // symetric
    // for(int i=0 ; i<3 ; i++)
    // {
    //     for(int j=i ; j<3 ; j++)
    //     {
    //         if(arr[i][j] != arr[j][i])
    //         {
    //             return false;
    //         }
    //     }
    // }
    return 0;
}
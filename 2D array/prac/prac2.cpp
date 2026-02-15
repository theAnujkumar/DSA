#include<iostream>
#include<string>
using namespace std;

int wavePrint(int arr1[][3] , int row , int col)
{
    for(int c=0 ; c<3 ; c++)
    {
        if(c&1)
        {
            for(int r=row-1 ; r>=0 ; r--)
            {
                cout << arr1[r][c] << endl;
            }
        }
        else{
            for(int r=0 ; r<row ; r++)
            {
                cout << arr1[r][c] << endl;
            }
        }
    }
}

int largestRowSum(int arr[][3],int r,int c)
{
    int maxi = INT8_MIN;
    int rowIndex = -1;

    for(int r=0 ; r<3 ; r++)
    {
        int sum = 0;
        for(int c=0 ; c<3 ; c++)
        {
            sum += arr[r][c];
        }
        if(maxi < sum)
        {
            maxi = sum;
            rowIndex = r;
        }
    }
    cout << "\nmaximum sum is " << maxi;
    return rowIndex;
}

int main()
{
    int arr1[3][3] = {1,2,3,4,5,6,7,8,9};

    // cout << "enter the value " << endl;
    // for (int r=0 ; r<2 ; r++)
    // {
    //     for(int c=0 ; c<2 ; c++)
    //     {
    //         cin >> arr1[r][c];
    //     }
    // }

    cout << "number are \n";
    for(int r=0 ; r<3 ; r++)
    {
        for(int c=0 ; c<3 ; c++)
        {
            cout << arr1[r][c] << " ";
        }
        cout << "\n";
    }

    wavePrint(arr1 , 3 , 3);
    largestRowSum(arr1,3,3);

    return 0;
}
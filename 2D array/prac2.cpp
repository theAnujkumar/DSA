#include<iostream>
using namespace std;

int main()
{
    //int arr[2][2] ;
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    cout << "enter the values= ";

    // values row wise
    // for(int r=0 ; r<2 ; r++)
    // {
    //     for(int c=0 ; c<2 ; c++)
    //     {
    //         cin >> arr[r][c];
    //     }
    // }

    //int b=0;
    // int  i=0;
    // int sum[i] = {0};
    // for(int r=0 ; r<2 ; r++)
    // {
    //     //int sum=0;
    //     //int sum[i]={0};
    //     for(int c=0 ; c<2 ; c++)
    //     {
    //         sum[i] = sum[i] + arr[r][c];
    //     }
        

    //     //cout << "\nthe value of b is " << b;
    //     //b++;
    // }
    // cout << "\nsum is = " << sum[i];
    //     i++;

    for(int r=0 ; r<3 ; r++)
    {
        int i=0;
        int sum[i] = {0};
        
        for(int c=0 ; c<3 ; c++)
        {
            sum[i] = sum[i] + arr[r][c];
        }
        cout << "sum of " << i << "row is " << sum[i] << endl;
        i++;
    }
    // find sum of each row

    cout << "number are \n";
    for(int c=0 ; c<3 ; c++)
    {
        int i=0;
        int sum[i] = {0};
        
        for(int r=0 ; r<3 ; r++)
        {
            sum[i] = sum[i] + arr[r][c];
        }
        cout << "sum is " << sum[i] << endl;
        i++;
    }
    // col wise sum
}
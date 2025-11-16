#include<iostream>
#include<string>
using namespace std;

void printSum(int arr[][3] , int r,int c)
{
    cout << "printing sum row wise -> ";
    for(int r=0 ; r<3 ; r++)
    {
        int sum = 0;
        for(int c=0 ; c<3 ; c++)
        {
            sum = sum + arr[r][c];
        }
        cout << sum << " ";
    }
    cout << "\n";
}

/*
int printSum(int arr[][3] , int r,int c)
{
    cout << "printing sum column wise -> ";
    for(int c=0 ; c<3 ; c++)
    {
        int sum = 0;
        for(int r=0 ; r<3 ; r++)
        {
            sum = sum + arr[r][c];
        }
        cout << sum << " ";
    }
    cout << "\n";
}
*/

int largestRowSum(int arr[][3],int r,int c)
{
    int rowIndex = -1;
    int maxi = INT_MIN;

    for(int r=0 ; r<3 ; r++)
    {
        int sum = 0;
        for(int c=0 ; c<3 ; c++)
        {
            sum = sum + arr[r][c];
        }
        
        if(sum > maxi)
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
    //int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    //int arr[2][3] = {{1,11,111} , {2,22,222}};
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

    cout << "number are \n";
    for(int r=0 ; r<3 ; r++)
    {
        for(int c=0 ; c<3 ; c++)
        {
            cout << arr[r][c] << " ";
        }
        cout << "\n";
    }

    printSum(arr,3,3);

    int ansIndex =  largestRowSum(arr , 3,3) ;
    cout << "\nmaximum row is at index = " << ansIndex;

    return 0;
}
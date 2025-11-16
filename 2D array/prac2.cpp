#include<iostream>
using namespace std;

int main()
{
    int arr[2][2] ;

    cout << "enter the values= ";

    // values row wise
    for(int r=0 ; r<2 ; r++)
    {
        for(int c=0 ; c<2 ; c++)
        {
            cin >> arr[r][c];
        }
    }

    //int b=0;
    int  i=0;
    int sum[i] = {0};
    for(int r=0 ; r<2 ; r++)
    {
        //int sum=0;
        //int sum[i]={0};
        for(int c=0 ; c<2 ; c++)
        {
            sum[i] = sum[i] + arr[r][c];
        }
        

        //cout << "\nthe value of b is " << b;
        //b++;
    }
    cout << "\nsum is = " << sum[i];
        i++;
}
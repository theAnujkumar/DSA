#include<iostream>
#include<string>
using namespace std;

bool isPresent(int arr[][3] , int key , int r , int c)
{
    for(int r=0 ; r<3 ; r++)
    {
        for(int c=0 ; c<3 ; c++)
        {
            if(arr[r][c] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    //int arr[2][3] = {{1,11,111} , {2,22,222}};


    cout << "enter the values= ";

    // int i=0;
    // int sum[i] = {0};

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

    // // values column wise
    // for(int c=0 ; c<3 ; c++)
    // {
    //     for(int r=0 ; r<3 ; r++)
    //     {
    //         cin >> arr[r][c];
    //     }
    // }


    cout << "number are \n";
    for(int r=0 ; r<3 ; r++)
    {
        for(int c=0 ; c<3 ; c++)
        {
            cout << arr[r][c] << " ";
        }
        cout << "\n";
    }

    // int key;
    // cout << "\nenter the key to be search = ";
    // cin >> key;

    // if(isPresent(arr , key , 3 ,3))
    // {
    //     cout << "\nelement found";
    // }
    // else {
    //     cout << "\n element absent";
    // }

}
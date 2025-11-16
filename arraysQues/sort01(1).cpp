#include<iostream>
using namespace std;


int main()
{
    int arr[] = {1,0,0,1,1,0};
    int n = 6;

    int count0 = 0;
    int count1 = 0;

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == 0)
            count0++;
        else
            count1++;
    }

    for(int i=0 ; i<count0 ; i++)
    {
        arr[i] = 0;
    }
    for(int i=0 ; i<count1 ; i++)
    {
        arr[i] = 1;
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
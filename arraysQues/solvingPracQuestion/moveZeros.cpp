#include<iostream>
using namespace std;

void moveZero(int arr[] , int n)
{
    // shift all non-zero elements to left
    // take nonZero as a pointer / index
    
    int nonzero=0;
    for(int j=0 ; j<n ; j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[j],arr[nonzero]);
            nonzero++;
        }
    }

    // int s = 0;
    // int e = n-1;

    // while(s<e)
    // {
    //     if(arr[s] != 0)
    //     {
    //         s++;
    //     }
    //     else if(arr[e] == 0)
    //     {
    //         e--;
    //     }
    //     else{
    //         swap(arr[e--],arr[s++]);
    //     }
    // }
     
    // it give result in unorder
}

void print (int ans[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[6] = {0,1,0,3,12,0};

    moveZero(arr , 6);

    print(arr,6);

    return 0;
}
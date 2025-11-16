#include<iostream>
using namespace std;

int sum(int n)
{
    
    if(n == 0)
    {
        return 0;
    }
    return n + sum(n-1);
}

// bool linearSearch(int arr[],int key,int n)
// {
//     if(n<0)
//     {
//         return 0;
//     }
//     if(arr[n] == key)
//     {
//         return 1;
//     }
//     linearSearch(arr+1,key,n--);
// }

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    //int ans = sum(arr,n);
    // bool ls = linearSearch(arr,7,5);
    // cout << ls << endl;

    cout << sum(n);

}
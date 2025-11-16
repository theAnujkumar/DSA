#include<iostream>
using namespace std;


int findUnique(int arr[] , int size)
{
    int ans = 0;

    for(int i=0 ; i<size ; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
    
}

/*
int printArray(int arr[] , int size)
{
    for(int i=0 ; i<size ; i++)
    {
        cout <<" " << arr[i]; 
    }
}
*/

main()
{
    int arr[7] = {2,3,1,6,3,6,2};

    // ans = 1
    // different element not pair

    int result = findUnique(arr,7);

    cout << "the ans is " << result;

    return 0;
    //printArray(arr,7);

}
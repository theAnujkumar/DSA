#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    // to count violation
    int count = 0;
    
    // for(int i=0 ; i<n-1 ; i++)
    for(int i=0 ; i<=n-2 ; i++)
    {
        // if i get any violation
        if(arr[i] > arr[i+1])
        // ya toh arr[i] ko chota kar do 
        // ya arr[i+1] ko bada kar do
        {
            count++ ;
            // agar 1 se zyada violation mil gaya → not possible
            if(count > 1)
            {
                return false;
            }
            if(i == 0 || arr[i-1] <= arr[i+1])
                // arr[i] ko chota karna hai
                arr[i] = arr[i+1];
            else
                // arr[i+1] ko bada kar do
                arr[i+1] = arr[i];

            // if(i<2 || (arr[i-2] <= arr[i]))
            // {
            //     arr[i-1] = arr[i];
            // }
            // else{
            //     arr[i] = arr[i-1];
            // }
        }
    }
    
    return true;
}
#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    // to count violation
    int count = 0;
    
    for(int i=0 ; i<=n-2 ; i++)
    {
        // if i get any violation
        if(arr[i] > arr[i+1])
        {
            count++ ;
            // agar 1 se zyada violation mil gaya → not possible
            if(count > 1)
            {
                return false;
            }
        }
    }
    
    return true;
}
#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    // agar size 1 hai
    if(n<2) 
    // n==1 or n==0
    {
        return -1;
    }

    int secondLargest = INT16_MIN;
    int Largest = INT16_MIN;

    for(int i=0 ; i<n ; i++)
    {
        // Case 1: current element new largest ban jaaye
        if(arr[i] > Largest)
        {
            secondLargest = Largest;  // old largest second largest ban jaata hai
            Largest = arr[i];           // new largest set ho jata hai
        }
        else if((arr[i] < Largest) && (arr[i] > secondLargest))
        {
            secondLargest = arr[i];
        }
        // else if((arr[i] < Largest) && (arr[i] == secondLargest))
        // else if((arr[i] < Largest) && (arr[i] < secondLargest))
    }
    if(secondLargest == INT16_MIN)
    {
        return -1;
    }
    return secondLargest;
}

// ex [5,10,5,8]
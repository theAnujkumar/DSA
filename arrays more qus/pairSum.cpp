#include<iostream>
using namespace std;

//Pair Sum in Sorted Array

bool pairSum(int arr[], int n, int target) {
    int i = 0, j = n-1;
    while(i < j) {
        int sum = arr[i] + arr[j];

        if(sum == target) 
            return true;
        else if(sum < target) 
            i++;
        else 
            j--;
    }
    return false;
}

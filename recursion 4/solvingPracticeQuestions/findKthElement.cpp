#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;
#include<string>


int findKthElement(vector<int> &arr1, vector<int> &arr2, int k){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int n = n1+n2;
    cout << "n is " << n << endl;
    int i=0;
    int j=0;
    int t=0;
    int result = 0;

    vector<int> ans(n);

    //merging operation
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
        {
            //ans.push_back(arr1[i]);
            ans[t] = arr1[i];
            i++;
            t++;
        }
        else{
            ans[t] = (arr2[j]);
            j++;
            t++;
        }
    }
    while(i<n1)
    {
        ans[t] = arr1[i];
        i++;
        t++; 
    }
    while(j<n2)
    {
        ans[t] = (arr2[j]);
        j++;
        t++;
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << ans[i] << " "; 
    }

    // for(int i=0 ; i<n ; i++)
    // {
    //     if(ans[i] == k)
    //     {
    //         result = i+1;
    //     } 
    // }
    // return result;

    for(int i=0 ; i<n ; i++)
    {
        if(k == i+1)
        {
            result = ans[i];
        }
    }
    // for(int i=0 ; i<n ; i++)
    // {
    //     if(ans[i] == k)
    //     {
    //         result = i+1;
    //         // return i+1;
    //         //break;
    //     } 
    // }
    return result;
}

void printArray(int ans[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout << ans[i] << " "; 
    }
}

int main()
{
    // int arr1[5] = {1,3,5,7,9};
    // int arr2[3] = {2,4,6};
    //int arr3[8] = {0};

    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {2,4,6};
    int k=4;

    //int ans = findKthElement(arr1,arr2,k);
    cout << "ans is " << findKthElement(arr1,arr2,k) << endl;

    //printArray(arr3 , 8);
}
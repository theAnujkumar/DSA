#include<iostream>
using namespace std;


// #include<iostream>
// using namespace std;

// void merge(int *arr , int s,int e)
// {
//     int mid = s + (e-s)/2;
//     int len1 = mid-s;
//     int len2 = e-mid+1;

//     int *first = new int[len1];
//     int *second = new int[len2];
    
//     // copy value 
//     int mainarrayIndex = s;
//     for(int i=0 ; i<len1 ; i++)
//     {
//         first[i] = arr[mainarrayIndex++];
//     }

//     int mainarrayIndex = mid+1;
//     for(int i=0 ; i<len2 ; i++)
//     {
//         second[i] = arr[mainarrayIndex++];
//     }

//     // merge two sorted array
//     int index1 = 0;
//     int index2 = 0;
//     int mainarrayIndex = s;

//     while(index1 < len1 && index2 < len2)
//     {
//         if(first[index1] < second[index2])
//         {
//             arr[mainarrayIndex++] = first[index1++];
//         }
//         else{
//             arr[mainarrayIndex++] = first[index1++];
//         }
//     }

// }

// void mergeSort(int *arr , int s,int e)
// {
//     if(s>=e)
//         return;

//     int mid = s + (e-s)/2;
//     mergeSort(arr,s,mid);
//     mergeSort(arr,mid+1,e);

//     merge(arr,s,e);
// }


// int main()
// {
//     int arr[5] = {2,5,1,6,9};
//     int n = 5;

//     mergeSort(arr,0,n-1);

//     for(int i=0 ; i<n ; i++)
//     {
//         cout << arr[i] << " " ;
//     }
//     cout << endl;

//     return 0;

//     // space complexity = O(n)
//     // time complexity = O(n*logn)

//     // inversion count 
// }
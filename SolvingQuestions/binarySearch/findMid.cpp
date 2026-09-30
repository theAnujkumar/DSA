#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key)
{
    int start = 0;
    int end = size - 1;

    //int mid = (start + end)/2;
    int mid = start + (end - start)/2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        // go to right part
        else if(key > arr[mid])
        {
            start = mid + 1;
        }

        // go to left part
        else{
            end = mid -1;
        }

        mid = start + (end - start)/2;
        //mid = (start+end)/2;
    }

    return -1;
}

int findMid(int arr[] , int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s)/2;

    return arr[mid];
}

main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int indexEven = binarySearch(even , 6 , 6);
    cout << "the index of 6 is " << indexEven;
    cout << endl;

    int indexOdd = binarySearch(odd , 5 ,20);
    cout << "the index of 20 is " << indexOdd;
    cout << endl;

    int a1 = findMid(even,6);
    cout << "mid is " << a1;
    cout << endl;

    int a2 = findMid(odd,5);
    cout << "mid is " << a2;
    cout << endl;
}


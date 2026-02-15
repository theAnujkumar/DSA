#include<stdio.h>
#include<iostream>
using namespace std;

class heap
{
    public:
        int arr[100];
        int size;

    heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1)
        {
            int parent = index/2;
            if(arr[parent] < arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }

            else{
                return;
            }
        }
    }

    void print() {
        for(int i=1 ; i<=size ; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

// for maximum use <=
void heapify(int arr[] , int n , int i)         // O(N)
    {
        int largest = i;
        // 1 based indexing
        // for 0 based 2*i + 1
        int left = 2*i;
        int right = 2*i + 1;

        // for 0 based
        //if(left < n && arr[largest] < arr[left])
        if(left <= n && arr[largest] < arr[left])
        {
            largest = left;
        }
        if(right <= n && arr[largest] < arr[right])
        {
            largest = right;
        }

        if(largest != i)
        {
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }

void heapSort(int arr[] , int n)
{
    int size = n;

    while(size > 1)
    {
        swap(arr[size] , arr[1]);
        size--;
        heapify(arr,n,1);
    }
}

int main() 
{

    heap h;
    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.insert(75);

    h.print();

    int arr[6] = {-1,54,55,53,52,50};
    int n=5;

    // create max-heap

    for(int i = n/2 ; i>0 ; i--)
    {
        heapify(arr,n,i);
    }

    for(int i=1 ; i<=n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl ;
    

    int arr1[6] = {-1,70,60,55,45,50};
    n=5;
    heapSort(arr1,n);
    
    for(int i=1 ; i<=n ; i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl;

    return 0;
}
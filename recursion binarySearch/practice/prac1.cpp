#include<iostream>
using namespace std;

bool binary(int arr[],int s,int e, int key)
{
    if(s>e)
    {
        return 0;
    }

    int mid = s+(e-s)/2;

    if(arr[mid] == key)
    {
        return 1;
    }

    if(arr[mid] > key)
    {
        return binary(arr,s,mid-1,key);
    }
}

bool linear(int arr[],int size, int key) {

        if(size == 0)
        {
        return 0;
        }
        if(arr[0] == key)
        {
            return 1;
        }

        else{
            // bool remain = linear(arr+1,size-1,key);
            // return remain;
            return linear(arr+1,size-1,key);
        }

}

int main() {

    int arr[5] = {2,4,6,9,10};
    int size = 5;
    int key = 9;

    bool ans = linear(arr,size,key);
    bool ans1 = binary(arr,0,size-1,key);

    if(ans) {
        cout << "key is present" << endl;
    }

    else
    {
        cout << "key is absent" << endl;
    }

    return 0;
}
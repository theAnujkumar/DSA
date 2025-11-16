#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &arr,int k,int start,int end)
{
    while(start<end)
    {
        swap(arr[start++],arr[end--]);
    }
}

// for right rotation
void rotate(vector<int> &arr,int k)
{
    int n = arr.size();
    k = k%n;

    reverse(arr,k,0,n-1);
    reverse(arr,k,0,k-1);
    reverse(arr,k,k,n-1);
}

void rotate(vector<int> &arr,int k)
{
    int n = arr.size();
    k = k%n;

    reverse(arr,k,0,k-1);
    reverse(arr,k,k,n-1);
    reverse(arr,k,0,n-1);
}

int main()
{

}
#include<iostream>
using namespace std;

int reverse(int arr[] , int n) {

    int start = 0;
    int end = n-1;

    while(start <= end) {

        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}
int printArray(int arr[] , int n) {
    for(int i=0 ; i<n ; i++) {
        cout << "\nthe value is " << arr[i];
    }
}
int main() {
    
    int arr[6] = {2,5,-6,9,4,7};
    int brr[5] = {5,3,-1,8,3};

    reverse(arr , 6);
    reverse(brr , 5);

    printArray(arr , 6);
    printArray(brr , 5);


}
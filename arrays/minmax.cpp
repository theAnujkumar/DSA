#include<iostream>
using namespace std;


int getMax(int num[] , int n)
{
    int maxi = INT8_MIN;

    for(int i=0 ; i<n ; i++)
    {
        if(num[i] > maxi)
        {
            maxi = num[i];
        }
    }

    return maxi;
}

int getMin(int num[] , int n)
{
    int mini = INT8_MAX;

    for(int i=0 ; i<n ; i++)
    {
        if(num[i] < mini) {
            mini = num[i];
        }
    }
    return mini;
}

int main() {
    
    int num[5] ;
    int size;
    cout << "\n enter the size";
    cin >> size;

    cout << "enter the number ";

    for(int i=0 ; i<size ; i++)
    {
        cin >> num[i];
    } 

    cout <<"\n max-value is " << getMax(num,size);
    cout <<"\n min-value is " << getMin(num,size);

}
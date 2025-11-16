#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int rainWater(int a[])
{
    int n = a.size();
    int left[] = new int[n];
    vector<int> left(n);
    vector<int> right(n);

    left[0] = a[0];
    for(int i=1 ; i<n ; i++)
    {
        left[i] = max(left[i-1],a[i]);
        //  1 index               3  , 1 = 3
    }

    right[n-1] = a[n-1];
    for(int i=n-2 ; i>=0 ; i++)
    {
        right[i] = max(right[i+1],a[i]);
        //   last 2nd index(3)   =          3    , 2 = 3
    }
}
int main()
{
    int a[] = {3,1,2,4,0,1,3,2};
    rainWater(a);

}
#include<iostream>
using namespace std;

long long int sqrtInteger(int n)
{
    int s = 0;
    int e = n-1;
    long long int ans = -1;
    long long int mid = s + (e-s)/2;

    while(s<=e)
    {
        long long int square = mid * mid;

        if(square == n)
        {
            return mid;
        }
        if(square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecision(int n , int precision , int firstPart)
{
    double ans = firstPart;
    double factor = 1;

    for(int i=0 ; i<precision ; i++)
    {
        factor = factor/10;
        for(double j=ans ; j*j<ans ; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;

}

main()
{
    int n = 81;
    //int n = 1000000;

    int firstPart = sqrtInteger(n);
    //cout << "square root is " << firstPart;
    cout << "square root is " << morePrecision(n,3,firstPart);


}
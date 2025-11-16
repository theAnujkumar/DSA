#include<iostream>
#include<vector>
using namespace std;

// sieve of eratosthenes

int countPrime(int n)
{
    int count=0;

    vector<bool> prime(n+1 , true);

    prime[0] = prime[1] = false;

    for(int i=2 ; i<n ; i++)
    {
        if(prime[i])
        {
            count++;

            for(int j=2*i ; j<n ; j=j+i)
            {
                prime[j]=0;
            }
        }
    }
    return count;
}


int main()
{
    int n;
    cout << "enter the number = ";
    cin >> n;
    cout << "\ncount are = " << countPrime(n);
    return 0;
}

// time complexity = O(n*log(logn))
/*
    n/2 + n/3 + n/5 + n/7
*/
// HW = segmented series
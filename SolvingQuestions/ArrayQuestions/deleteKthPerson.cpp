// delete every kth person and return last remaining one

#include <bits/stdc++.h> 
#include <iostream>
#include <math.h>
#include<vector>
#include<unordered_map>
using namespace std;


int deleteKthPerson(int n , int k)
{
    if(n==0)
        return 1;
    
    return (deleteKthPerson(n-1,k)+k)%n;
}

int main()
{

    //vector<int> arr = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;

    int i=1;
    while(i!=n+1)
    // for(int i=1 ; i<=n ; i++)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
    int ans = deleteKthPerson(n,k)+1;       // convert it into 1 based
    cout << "ans is " << ans << endl;

}
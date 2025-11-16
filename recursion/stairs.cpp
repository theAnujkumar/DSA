#include<iostream>
using namespace std;

int countDistinctwayToClimb(int nstairs)
{
    // base case
    if(nstairs == 0)
    {
        return 1;
    }

    if(nstairs < 0)
    {
        return 0;
    }

    // rec rel
    int ans = countDistinctwayToClimb(nstairs-1) + countDistinctwayToClimb(nstairs-2);

    return ans;
}

int main()
{
    int nstairs;
    cout << "enter the stairs";
    cin >> nstairs;

    cout << countDistinctwayToClimb(nstairs);
}
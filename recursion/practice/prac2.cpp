#include<iostream>
using namespace std;

void walk(int s,int d)
{

    cout << "src is " << s << " destination is " << d << endl;
    
    if(s == d)
    {
        cout << "pahuch gye " << endl;
        return;
    }

    s++;

    walk(s,d);

}

int countDistinctwayToClimb(int nstairs)
{
    if(nstairs < 0)
    {
        return 0;
    }
    if(nstairs == 0)
    {
        return 1;
    }

    int ans = countDistinctwayToClimb(nstairs-1) + countDistinctwayToClimb(nstairs-2);
}

int main()
{
    int src = 1;
    int dest = 10;

    walk(src,dest);

    return 0;
}
#include<iostream>
using namespace std;

// tail recursion
void reachHome(int src , int dest)
{
    cout << "source " << src << " destination " << dest << endl;

    // base case
    if(src == dest)
    {
        cout << "pahuch gye" << endl;
        return ;
    }

    // processing -> ek step agee bado
    src++;

    // recursive call
    reachHome(src,dest);
}

int main()
{
    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src,dest);
}
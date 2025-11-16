#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // maximum heap
    priority_queue <int> maxi;

    // mini heap
    priority_queue<int,vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(6);
    maxi.push(2);
    maxi.push(9);

    int n = maxi.size();

    for(int i=0 ; i<n ; i++)
    {
        cout << maxi.top() << " ";
    }

    cout << endl;

    for(int i=0 ; i<n ; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }

    mini.push(1);
    mini.push(6);
    mini.push(2);
    mini.push(9);

    int m = mini.size();

    cout << endl;
    for(int i=0 ; i<m ; i++)
    {
        cout << mini.top() << " ";
    }

    cout << endl;

    for(int i=0 ; i<m ; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }

    cout << "empty or not ? " << mini.empty();
}
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // first in first out

    queue <string> q;

    q.push("Anuj");
    q.push("sher");
    q.push("chettah");

    cout << "\nTop element " << q.front();
    cout << "\nsize before pop" << q.size();
    q.pop();
    cout << "\nTop element " << q.front();

    cout << "\nsize after pop " << q.size();
}
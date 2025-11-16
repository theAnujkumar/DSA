#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    cout << "front is " << q.front() << endl;

    q.push(12);
    cout << "front is " << q.front() << endl;

    q.push(15);
    cout << "front is " << q.front() << endl;

    cout << "size is " << q.size() << endl;

    q.pop();

    q.pop();
    cout << "front is " << q.front() << endl;
    cout << "size is " << q.size() << endl;

    q.pop();
    if(q.empty())
    {
        cout << "queue is empty " << endl;
    }
    else{
        cout << "not empty " << endl;
    }
    
    return 0;

}
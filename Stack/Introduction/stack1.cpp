#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // creation stack
    stack <int> s;

    // push operation
    s.push(5);
    s.push(6);

    s.pop();

    cout << "top element is " << s.top() << endl;

    cout << "size is " << s.size() << endl;

    return 0;
}
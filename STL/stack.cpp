#include<iostream>
#include<stack>
using namespace std;

int main() 
{
    // first is last and last is first

    stack<string> s;

    s.push("Anuj");
    s.push("sher");
    s.push("chettah");

    cout << "\nTop element " << s.top();
    s.pop();
    cout << "\nTop element " << s.top();

    cout << "\nsize of stack " << s.size();

    cout << "\nempty or not " << s.empty();

}
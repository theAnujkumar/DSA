#include<iostream>
using namespace std;

void printCounting(int num)
{
    for(int i=1 ; i<=num ; i++)
    {
        cout << "counting is " << i << endl;
    }
}

int main() {
    int n=5;
    cout << "enter the number : ";

    printCounting(n);

    return 0;
}
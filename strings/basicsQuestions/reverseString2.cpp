#include<iostream>
using namespace std;

void reverse(char name[] , int n)
{
    int s=0;
    int e=n-1;

    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for(int i=0 ; name[i]!='\0' ; i++)
    {
        count++;
    }

    return count;
}
int main()
{
    char name[20];

    cout << "Enter your name=\n";
    cin >> name;
    cout << "Name = " << name;
    cout << "\ngetLength = " << getLength(name);

    int len = getLength(name);
    cout << "\nreverse name = ";
    reverse(name,len);
    cout << name;



}

#include<iostream>
using namespace std;

// tail rec
void saydigit(int n ,string arr[])
{
    // base case
    if(n==0)
    {
        return ;
    }

    //processing 
    int digit = n%10;
    n=n/10;

    //cout << arr[digit] << endl;
    
    //recursive function
    saydigit(n,arr);

    // vapas jate hue print karvate jana
    // ex 412 
    cout << arr[digit] << endl;
}

int main()
{

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    saydigit(n,arr);


}
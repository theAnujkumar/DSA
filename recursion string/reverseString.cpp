#include<iostream>
using namespace std;

// remember string will be passed by reference 
void reverse(string& str , int s , int e)
{

    cout << "call recieved for " << str << endl;
    // base case
    if(s>e)
    return ;

    swap(str[s],str[e]);
    s++;
    e--;

    reverse(str,s,e);
    // reverse(str,s++,e--);  not use this it will became into infinite loop
    
    /*
    swap(str[s],str[e]);
    //s++ , e--;

    reverse(str,s+1,e-1);
    */
}

int main()
{
    string name = "mahaBali";

    reverse(name,0,name.length()-1);

    cout << name << endl;

}
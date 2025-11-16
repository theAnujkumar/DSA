#include<iostream>
using namespace std;

int main() {
   
   char ch ;
   
   cout << "enter your choice";
   cin >> ch ;

   if((ch>='a') && (ch<='z'))
   {
      cout << "\nsmall";
   }

   else if((ch>='A') && (ch<='Z'))
   {
      cout << "\ncapital";
   }

   else if((ch>='0') && (ch<='9'))
   {
      cout << "\ncounting";
   }

   else
   {
      cout << "\nspecial character";
   }
    
}
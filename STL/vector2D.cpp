#include<bits/stdc++.h>
using namespace std;

//main function
int main() {
    vector<vector<int>> v;
    int row, column, a;
    cout << "enter the rows= ";
    cin>>row;
    // taking input into 2D vector from user
    for(int i=0 ; i<row ; i++) {
        cout << "enter the columns = ";
         cin>>column;
         vector<int> p;
         for(int j=0 ; j<column ; j++) {
              cin>>a;
              p.push_back(a);
         }
         v.push_back(p);
    }
    // displaying 2D vector value
    for(auto q: v) {
        for(auto it: q) {
            cout<<it<<" ";
         } 
         cout<<endl;
     }
      return 0;
}
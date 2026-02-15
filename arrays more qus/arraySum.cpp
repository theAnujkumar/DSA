#include<iostream>
#include<vector>
using namespace std;

vector <int> reverse(vector<int> &v)
{
    int s = 0;
    int e = v.size()-1;

    while(s<=e)
    {
        swap(v[s++],v[e--]);
    }

    // final result
    cout << "result" << endl;
    
    for(auto f:v) {
        cout << f << " ";
    }
    return v;
}

vector<int> findArraySum(vector<int> &a , int n ,vector<int> &b ,int m)
{
    int i = n-1;
    int j = m-1;

    vector<int> ans;

    int carry = 0;

    while(i>=0 && j>=0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    // third case
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    for(auto i:ans)
    {
        cout << i << " ";
    }
    return reverse(ans);

}
int main()
{
    vector<int> a;
    vector<int> b;

    a.push_back(1);
    a.push_back(3);
    a.push_back(2);
    
    b.push_back(9);
    b.push_back(9);

    for(int k:a) {
        cout << k << " ";
    }
    for(int l:b) {
        cout << l << " ";
    }

    cout << "\nnew array=\n";

    findArraySum(a,3,b,2);

}
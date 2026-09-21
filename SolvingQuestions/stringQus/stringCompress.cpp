#include <iostream>
#include <string>
using namespace std;

void compressString(const string& s) {

    //if(s.length()==0)
    if(s.empty())
    {
        return ;
    }

    string compress = " ";
    int cnt = 1;

    for(int i=0 ; i<s.size() ; i++)
    {
        // same char
        if(i+1 < s.size() && s[i]==s[i+1])
        {
            cnt++;
        }
        // new char came
        else{
            compress += s[i];
            compress += to_string(cnt);
            cnt = 1;
        }

    }
    cout << "Output: " << compress << "\n";
}

int main() {
    compressString("AAABBCCCCDAA");
    compressString("XXYYYYZZZ");
    return 0;
}
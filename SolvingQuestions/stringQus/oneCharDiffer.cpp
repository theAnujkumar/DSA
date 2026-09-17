#include <iostream>
#include <string>
using namespace std;

// bool differByOne(const string& str1, const string& str2) {
//     if (str1.length() != str2.length()) return false;
//     int diffCount = 0;
//     for (size_t i = 0; i < str1.length(); i++) {
//         if (str1[i] != str2[i]) diffCount++;
//     }
//     return diffCount == 1;

//     // Method 2 (Expanded Version)
//     // if (diffCount == 1) {
//     //     return true;
//     // } else {
//     //     return false;
//     // }
// }

bool differByOne(const string &str1 , const string &str2)
{
    if(str1.length() != str2.length())
    {
        return false;
    }

    int diffCnt = 0;
    for(int i=0 ; i<str1.length() ; i++)
    {
        if(str1[i] != str2[i])
            diffCnt++;
    }
    if (diffCnt == 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << (differByOne("HELLO", "CELLO") ? "Yes" : "No") << "\n";
    cout << (differByOne("CLOUD", "CLOUD") ? "Yes" : "No") << "\n";
    return 0;
}
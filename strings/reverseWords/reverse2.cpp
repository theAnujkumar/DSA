#include <bits/stdc++.h>
using namespace std;

void reverseWordsInPlace(string &s) {
    int n = s.size();
    int start = 0;

    for(int i=0 ; i<=n ; i++)
    {
        // jabh space ya end char mile toh do reverse
        if(i == n || s[i] == ' ')
        {
            reverse(s.begin() + start , s.begin() + i);
            start = i+1;   // next word start (not use start=start+1)
        }
    }
}

int main() {
    string s = "my name is";
    reverseWordsInPlace(s);
    cout << s << endl;   // Output: ym eman si
}

// tc = O(N)
// sc = O(1)

/*
Dry Run ("my name is")

String: "my name is"

start = 0

i = 0 → 'm' → continue

i = 1 → 'y' → continue

i = 2 → space

reverse "my" → "ym"

string = "ym name is"

start = 3

i = 3 → 'n'

i = 4 → 'a'

i = 5 → 'm'

i = 6 → 'e'

i = 7 → space

reverse "name" → "eman"

string = "ym eman is"

start = 8

i = 8 → 'i'

i = 9 → 's'

i = 10 = n (end)

reverse "is" → "si"

string = "ym eman si"
*/
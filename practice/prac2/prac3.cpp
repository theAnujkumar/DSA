#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    // agar size 1 hai
    if(n<2) 
    // n==1 or n==0
    {
        return -1;
    }

    int secondLargest = INT16_MIN;
    int Largest = INT16_MIN;

    for(int i=0 ; i<n ; i++)
    {
        // Case 1: current element new largest ban jaaye
        if(arr[i] > Largest)
        {
            secondLargest = Largest;  // old largest second largest ban jaata hai
            Largest = arr[i];           // new largest set ho jata hai
        }
        else if((arr[i] < Largest) && (arr[i] > secondLargest))
        {
            secondLargest = arr[i];
        }
        // else if((arr[i] < Largest) && (arr[i] == secondLargest))
        // else if((arr[i] < Largest) && (arr[i] < secondLargest))
    }
    if(secondLargest == INT16_MIN)
    {
        return -1;
    }
    return secondLargest;
}

void findSecondLargest1(int n, vector<int> &arr)
{
    if (n < 2) {
        cout << "Array does not contain two distinct values.\n";
        return;
    }

    int secondLargest = INT16_MIN;
    int Largest = INT16_MIN;

    for(auto num:arr)
    {
        if(num > Largest)
        {
            secondLargest = Largest;
            Largest = num;
        }
        else if(num > secondLargest && num < Largest)
        {
            secondLargest = num;
        }
    }

    if(secondLargest == INT16_MIN)
    {
        cout << "Array does not contain two distinct values.\n";
    }
    else{
        cout << "Second largest = " << secondLargest << "\n";
    }
}

void findFirstNonRepeating(const string& str)
{
    int freq[256] = {0};
    for(char ch : str)
    {
        freq[(unsigned char)ch]++;
    }

    char firstchar = ' ';
    int firstfreq = -1;

    for(int i=0 ; i<str.size() ; i++)
    {
        char ch = str[i];
        if(freq[(unsigned char)ch] == 1)
        {
            firstchar = ch;
            firstfreq = i+1;
            break;
        }
    }
    if (firstfreq == -1) {
        cout << "Every character repeats.\n";
        return;
    }
    cout << "1. First non-repeating character: " << firstchar << "\n";
    cout << "2. Position: " << firstfreq << "\n";
    cout << "3. All characters occurring once: ";
    for (int i = 0; i < str.length(); i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            cout << str[i] << " ";
        }
    }
    cout << "\n";
}

string encode(string &message)
{
    int i=0;
    int n = message.length();
    cout << "length is " << n;
    int ansIndex = 0;
    //string ans = "";

    while(i<n)
    {
        int j = i+1;
        while(j<n && message[i] == message[j])
        {
            j++;
        }
        message[ansIndex++] = message[i];

        int cnt = j-i;
        string count = to_string(cnt);
        for(char ch:count)
        {
            message[ansIndex++] = ch;
        }

        i=j;
    }
    return message;
    //for(int i=0 ; i<n ; i++)
    // while(i<n)
    // {
    //     int j=i+1;
    //     while(j<n && message[i] == message[j])
    //     {
    //         j++;
    //     }
    //     ans += message[i];
    //     ans += to_string(j-i);
        
    //     // i move to next character
    //     i=j;
    // }
    //return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    for(auto a : arr)
    {
        cout << " " << a ;
    }
    cout << endl ;
    
    int ans = findSecondLargest(n,arr);
    cout << "2nd largest element is " << ans ;


}
// ex [5,10,5,8]
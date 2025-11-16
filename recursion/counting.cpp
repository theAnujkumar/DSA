#include<iostream>
using namespace std;

// head recursion
void counting(int n)
{
    // base case
    if(n==0)
    {
        return ;
    }

    // recursive relation
    counting(n-1);
    
    // processing
    // jabh recursive call se vapas ayenge toh number print hote jayenge
    cout << n << endl;

    //counting(n-1);        // it will print in reverse order
}

// tail rec
void printNumbers(int i) {
    if(i > 5) return;      // Base case matlab loop se bahar
    cout << i << " ";      // Work
    printNumbers(i + 1);   // Recursive call
}

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    counting(n);

    printNumbers(1);
}

/*
Recursion = Loop + Stack

Jab bhi loop chale, socho:

“Har iteration ek function call me ho sakti hai.”

Aur jab loop khatam ho, wahi base case hota hai.
*/

/*
| Feature                 | Head Recursion                                | Tail Recursion                                |
| ----------------------- | --------------------------------------------- | --------------------------------------------- |
| Recursive Call Position | Function ke start me                          | Function ke end me                            |
| Execution Order         | Backward (last call → pehle execute hoti hai) | Forward (first call → pehle execute hoti hai) |
| Stack Memory            | Zyada use hoti hai                            | Kam use hoti hai                              |
| Optimization Possible   | Nahi                                          | Haan (Tail Call Optimization)                 |
| Example Output Order    | Increasing (1 2 3...)                         | Decreasing (5 4 3...)                         |

Head recursion: “pehle bulana, baad me kaam karna.”
Tail recursion: “pehle kaam karna, baad me bulana.”

*/
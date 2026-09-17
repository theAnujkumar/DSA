#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) 
        return false;
    // i <= sqrt(n) same
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int count = 0, sum = 0;
    cout << "Primes: ";
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            count++; sum += i;
        }
    }
    cout << "\n1. Total count = " << count << "\n";
    cout << "2. Sum = " << sum << "\n";
    return 0;
}

// time complexity ko $O(N)$ se ghata kar $O(\sqrt{N})$ 


/*
Agar $36$ ko divide karne waala koi factor hona hoga, 
toh kam se kam ek factor $6$ ya usse chota hoga hi hoga. 
6 ke baad ke factors ($9, 12, 18, 36$) ko check karne ki zaroorat hi nahi hai kyunki
 unke jodidaar ($4, 3, 2, 1$) pehle hi check ho chuke hain.
*/


// #include <bits/stdc++.h> 
// #include <iostream>
// #include <string>
// using namespace std;


// bool isPrime(int n)
// {
//     if(n<=1)
//         return false;

//     bool isprime = 1;

//     for(int i=2 ; i<n ; i++)
//     {
//         if(n%i == 0)
//         {
//             isprime = false;
//             break;
//         }
//     }
//     return isprime;
// }

// int main() {
//     int count = 0, sum = 0;
//     cout << "Primes: ";
//     for (int i = 1; i <= 100; i++) {
//         if (isPrime(i)) {
//             cout << i << " ";
//             count++; sum += i;
//         }
//     }
//     cout << "\n1. Total count = " << count << "\n";
//     cout << "2. Sum = " << sum << "\n";
//     return 0;
// }





// int main()
// {
//     int n = 124;

//     if(n<2)
//     {
//         cout << "number is not prime " << n << endl;
//     }
    
//     bool ans = isPrime(n);
//     if(ans)
//     {
//         cout << "number is prime " << n << endl;
//     }
//     else{
//         cout << "number is not prime " << n << endl;
//     }
// }
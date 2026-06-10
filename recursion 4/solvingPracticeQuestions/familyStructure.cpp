#include<iostream>
#include<vector>
using namespace std;
#include<string>

// k = child , n = parent
string kthChildNthGeneration(int n, long long int k)
{
	if(n==1)
        return "M";

    string parent = kthChildNthGeneration(n-1, (k+1)/2);

    // odd so same as parent
    if(k%2 == 1)
    {
        return parent; 
    }

    // even so do fliping
    if(parent == "M")
        return "F";
    else{
        return "M";
    }
}

/*
    string kthChildNthGeneration(int n, long long int k) {
    // K-1 ka set bits count karo
    long long int x = k - 1;
    
    int count = __builtin_popcountll(x);
    
    // even flips → M, odd flips → F
    if (count % 2 == 0) return "M";
    else return "F";

    // recursive
    string kthChildNthGeneration(int n, long long int k) {
    if (n == 1) return "M";

    string parent = kthChildNthGeneration(n - 1, (k + 1) / 2);

    if (k % 2 == 1) return parent;

    // flip
    if (parent == "M") return "F";
    else return "M";
}
}
*/
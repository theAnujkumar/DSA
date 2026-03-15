#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s = "OpenAI ChatGPT";
    int vowels = 0, consonants = 0;
    for(char ch : s) {
        ch = tolower(ch);
        if(isalpha(ch)) {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }
    cout << "Vowels: " << vowels << ", Consonants: " << consonants;
}
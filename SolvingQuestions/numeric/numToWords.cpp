#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six",
     "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", 
     "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", 
    "Seventy", "Eighty", "Ninety"};

string ordOnes[] = {"", "First", "Second", "Third", "Fourth", "Fifth", 
    "Sixth", "Seventh", "Eighth", "Ninth", "Tenth", "Eleventh", "Twelfth",
     "Thirteenth", "Fourteenth", "Fifteenth", "Sixteenth", "Seventeenth", 
     "Eighteenth", "Nineteenth"};
     
string ordTens[] = {"", "", "Twentieth", "Thirtieth", "Fortieth", "Fiftieth", 
    "Sixtieth", "Seventieth", "Eightieth", "Ninetieth"};

string toOrdinal(int num) {
    if (num <= 0 || num > 9999) return "";
    
    int h = (num / 100) % 10;
    int th = num / 1000;
    int rem = num % 100;
    
    string result = "";
    if (th > 0) result += ones[th] + " Thousand ";
    if (h > 0) {
        if (rem == 0) return result + ones[h] + " Hundredth";
        result += ones[h] + " Hundred ";
    }
    
    if (rem < 20) {
        result += ordOnes[rem];
    } else {
        int t = rem / 10;
        int o = rem % 10;
        if (o == 0) {
            result += ordTens[t];
        } else {
            result += tens[t] + " " + ordOnes[o];
        }
    }
    return result;
}

int main() {
    cout << toOrdinal(3015) << endl; // Three Thousand Fifteenth
    return 0;
}
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int evaluatePostfix(const string& exp) {
    stack<int> st;

    for (char c : exp) {
        if (isdigit(c)) {
            st.push(c - '0');
        } else {
            int op2 = st.top(); st.pop();
            int op1 = st.top(); st.pop();

            switch (c) {
                case '+': st.push(op1 + op2); break;
                case '-': st.push(op1 - op2); break;
                case '*': st.push(op1 * op2); break;
                case '/': st.push(op1 / op2); break;
            }
        }
    }
    return st.top();
}

int main() {
    cout << evaluatePostfix("82-3*") << endl; // Output: 18
    return 0;
}
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool match(char a,char b)
{
    if ((a == '}' && b == '{') || 
        (a == ']' && b == '[') || 
        (a == ')' && b == '(')) 
        return true;

    return false;
    
}

bool isValidParenthesis(string s) 
{
    stack<char> st;

    for(auto i : s)
    {
        char ch = i;
        if(ch == '{' || ch == '[' || ch == '(')
        {
            st.push(ch);
        }

        else{   // ch = ')'  use ch for read
            if(st.empty())
                return false;
            
                bool compare = match(ch,st.top());
                if(compare)
                {
                    st.pop();
                }
                else{
                    return false;
                }
        }
    }
    if(st.empty())  
        return true;
    return false;       // koi invalid char bacha hai like ( , {

}

int main()
{
    // string s = "{([]}";
    string s = "][";
    bool ans = isValidParenthesis(s);
    if(ans)
    {
        cout << "yes valid" << endl;
    }
    else{
        cout << "not valid" << endl;
    }
    return 0;
}
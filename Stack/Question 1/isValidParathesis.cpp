#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValidParenthesis(string s)
{
    stack<char> st;

    for(int i=0 ; i<=s.length() ; i++)
    {
        char ch = s[i];

        // opening bracket , then push into stack
        if(ch == '{' || ch == '[' || ch == '(')
        {
            st.push(ch);
        }

        // closing bracket , then check top and pop from stack
        else{

            if (!st.empty()) {
              char top = st.top();
              if ((ch == '}' && top == '{') || 
              (ch == ']' && top == '[') || 
              (ch == ')' && top == '(')) 
              {
                st.pop();

              } else {
                return false;
              }
            } 
            else {
              return false;
            }

        }

    }

    if(st.empty())
    {
        return true;
    }
    else{
        return false;
    }
}
// tc = O(N)
// sc = O(N)

/*
bool isValidParenthesis(string expression)
{
  	 stack<char> s;
     for(int i=0; i<expression.length(); i++) {

         char ch = expression[i];

         //if opening bracket, stack push
         //if close bracket, stacktop check and pop

         if(ch == '(' || ch == '{' || ch == '['){
             s.push(ch);
         }
         else
         {
             //for closing bracket
             if(!s.empty()) {
                  char top = s.top();
                  if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) {
                      s.pop();
                  }
                 else
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             } 
         }  
     }

    if(s.empty())
        return true;
    else
        return false;
}*/
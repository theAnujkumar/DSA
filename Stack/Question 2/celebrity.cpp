
#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

class Solution {
    public:
        bool knows(vector<vector<int> >& mat , int a , int b ,int n)
        {
            if(mat[a][b] == 1)
            {
                return true;
            }
            return false;
        }
        
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        
        stack<int> s;
        int n = mat.size();
        // step 1 push all elements in stack
        for(int i=0 ; i<n ; i++)
        {
            s.push(i);
        }
        
        // step 2 : get 2 element and compare them
        while(s.size() > 1)
        {
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(mat,a,b,n))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        
        int candidate = s.top();
        
        // step 3 : single element may be celebrity
        // check / verify
        
        //bool rowCheck = false;
        int rowCount = 0;
        
        for(int i=0 ; i<n ; i++)
        {
            if(mat[candidate][i] == 0)
            {
                rowCount++;
            }
        }
        
        if(rowCount != n)
        {
            //rowCheck = true;
            return false;
        }
        
        // col check
        
        //bool colCheck = false;
        int colCount = 0;
        
        for(int i=0 ; i<n ; i++)
        {
            if(mat[i][candidate] == 1)
            {
                colCount++;
            }
        }
        if(colCount != n-1)
        {
            //colCheck = true;
            return false;
        }
        
        /*
        if(rowCheck == true && colCheck == true)
        {
            return true;
        }
        else
        {
            return false;
        }
        */
        return candidate;
    }
};
// tc = O(N)

/*
class Solution {
    private:
    bool knows(vector<vector<int> >& M, int a, int b, int n) {
        if(M[a][b] == 1)
            return true;
        else
            return false;
    }
    
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        stack<int> s;
        int n = mat.size();
        
        //step1: push all element in stack
        for(int i=0; i<n; i++) {
            s.push(i);
        }   

        //step2: get 2 elements and copare them

        while(s.size() > 1) {

            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

            if(knows(mat,a,b,n)){
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int ans = s.top();
        //step3: single element in stack is potential celeb
        //so verify it

        int zeroCount = 0;

        for(int i=0; i<n; i++) {
            if(mat[ans][i] == 0)
                zeroCount++;
        }

        //all zeroes
        if(zeroCount != n)
            return -1;

        //column check
        int oneCount = 0;

        for(int i=0; i<n; i++) {
            if(mat[i][ans] == 1)
                oneCount++;
        }

        if(oneCount != n-1)
            return -1;

        return ans;

    }
};
*/
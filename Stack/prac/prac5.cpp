#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;


class twoStack {
    int *arr ;
    int top1 , top2;
    int size;

    public:
        twoStack(int s)
        {
            this->size = s;
            top1 = -1;
            top2 = s;
            arr = new int[s];
        }

        void push1(int num)
        {
            if(top2-top1 > 1)
            {
                arr[top1] = num;
                top1++;
            }
        }
        void push2(int num)
        {
            if(top2-top1 > 1)
            {
                arr[top2] = num;
                top2--;
            }
        }
        void pop1(int num)
        {
            if(top1 >= 0)
            {
                int val = arr[top1];
                top1--;
            }
        }
        void pop2(int num)
        {
            if(top2 < size)
            {
                int val = arr[top2];
                top2++;
            }
        }


};

int celebrity(vector<vector<int> >& mat)
{
    
}
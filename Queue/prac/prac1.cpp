#include<iostream>
#include<queue>
using namespace std;


class Queue{
    int *arr;
    int size;
    int front;
    int rear;

    public:
        Queue(int n)
        {
            arr = new int[n];
            front = rear = -1;
            size = n;
        }

        void enqueue(int x)
        {
            if(rear == size-1)
            {
                cout << "overflow";
            }
            if(front == -1)
            {
                front = rear = 0;
                arr[rear] = x;
            }
            else{
                rear++;
                arr[rear] = x;
            }
        }
        void dequeue()
        {
            if(front == -1)
            {
                cout << "empty";
            }
            else{
                cout << arr[front];
                front++;

                if(front == rear)
                {
                    front = rear = -1;
                }
            }
        }
        int front()
        {
            if(front == rear)
            {
                return -1;
            }
            else
                return arr[front];
        }
};

int main()
{

}
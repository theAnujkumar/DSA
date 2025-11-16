#include<iostream>
using namespace std;
class kQueue {

    public:
        int n;
        int k;
        int *front;
        int *rear;
        int *arr;
        int freeSpot;
        int *next;

    public:
        kQueue(int n, int k) {
            this -> n = n;
            this -> k = k;
            front = new int[k];
            rear = new int[k];
            for(int i=0; i<k; i++) {
                front[i] = -1;
                rear[i] = -1;
            }

            next = new int[n];
            for(int i=0; i<n; i++) {
                next[i] = i+1;
            }
            next[n-1] = -1;
            arr = new int[n];
            freeSpot = 0;
        }    

        void enqueue(int data, int qn) {

            //overflow
            if( freeSpot == -1) {
                cout << "No Empty space is present" << endl;
                return;
            }

            //find first free index
            int index = freeSpot;

            //update freespot
            freeSpot = next[index];

            //check whther first element
            if(front[qn-1] == -1){
                front[qn-1] = index;
            }
            else{
                //link new element to the prev element
                next[rear[qn-1]] = index;
            }

            //update next
            next[index] = -1;

            //update rear
            rear[qn-1] = index;

            //push element
            arr[index] = data;
        }

        int dequeue(int qn) {
            //underflow 
            if(front[qn-1] == -1)
            {
                cout << "Queue UnderFlow " << endl;
                return -1;
            }

            //find index to pop
            int index = front[qn-1];

            //front ko aage badhao
            front[qn-1] = next[index];

            //freeSlots ko manage karo
            // freespot kko front ke next me store karenge
            next[index] = freeSpot;

            // freespot lie on front pos which want to pop
            freeSpot = index;
            return arr[index];
        }

};

int main() {

    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15,1);
    q.enqueue(20, 2);
    q.enqueue(25,1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

    cout << q.dequeue(1) << endl;

    return 0;
}
/*

class kQueue {
        public:
            int n;
            int k;
            int *front;
            int *arr;
            int *rear;
            int *next;
            int freespot;
        
        public:
            kQueue(int n , int k)
            {
                this->n = n;
                this->k =  k;

                front = new int[k];
                rear = new int[k];
                for(int i=0 ; i<k ; i++)
                {
                    front[i] = -1;
                    rear[i] = -1;
                }

                next = new int[n];
                for(int i=0 ; i<n ; i++)
                {
                    next[i] = i+1;
                }
                next[n-1] = -1;

                arr = new int[n];
                freespot = 0;
            }

        void push(int data , int qn)
        {
            // overflow 
            if(freespot == -1)
            {
                cout << "no space present";
                return;
            }

            // find index
            int index = freespot;

            // freespot update
            freespot = next[index];

            // check 1st element or not to insert
            if(front[qn-1] == -1)
            {
                front[qn-1] = index;
            }
            else{
                // link new element to prev element
                next[rear[qn-1]] = index;
            }
            // update next
            next[index] = -1;

            // update rear
            rear[qn-1] = index;

            // push element
            arr[index] = data;
        }

        int pop(int qn)
        {
            // underflow 
            if(front[qn-1] == -1)
            {
                cout << "underflow";
                return -1;
            }
            // find index 
            int index = front[qn-1];

            // front agee badhao
            front[qn] = next[index];

            // freespot kko front ke next me store karenge
            next[index] = freespot;

            // freespot lie on front pos which want to pop
            freespot = index;

            return arr[index];
        }
};

int main()
{
    kQueue q(10,3);
    q.push(10,1);
    q.push(15,1);
    q.push(20,2);
    q.push(25,1);

    cout << q.pop(1) << endl;
    cout << q.pop(2) << endl;
    cout << q.pop(1) << endl;
    cout << q.pop(1) << endl;
    return 0;
}*/
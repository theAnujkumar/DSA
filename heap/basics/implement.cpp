#include<iostream>
using namespace std;

class heap{
    public:
        int arr[100];
        int size = 0;

        heap()
        {
            size = 0;
            arr[0] = -1;
        }

    void insert(int val)
    {
        size = size +1;
        int index = size;
        arr[index] = val;

        while(index > 1)
        {
            int parent = index/2;
            if(arr[parent] < arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void deleteFromHeap()
    {
        if(size <= 0)
        {
            return;
        }

        // put last element into first or swap
        arr[1] = arr[size];

        // remove last element
        size = size - 1;

        // place root element at right place or retain heap property
        int i=1;
        while(i<size)
        {
            int leftChild = 2*i;
            int rightChild = 2*i + 1;

            if(leftChild < size && arr[i] < arr[leftChild])
            {
                swap(arr[i],arr[leftChild]);
                i = leftChild;
            }
            if(rightChild < size && arr[i] < arr[rightChild])
            {
                swap(arr[i],arr[rightChild]);
                i = rightChild;
            }
            else{
                return;
            }
        }

    }

    void print()
    {
        for(int i=1 ; i<=size ; i++)
        {
            cout << arr[i] << endl;
        }
        cout << endl;
    }
};

int main()
{
    heap h;
    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);

    h.print();

    h.deleteFromHeap();
    h.print();

    return 0;
}
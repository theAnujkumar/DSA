#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* addNodes(Node* head, int n, int m) {
    // Write your code here.
	Node* curr = head;
	while(curr)
	{
		int cnt = 0;
		// move m times or skip
		while(curr && cnt<m)
		{
			curr = curr->next;
            cnt++;
		}
        //cnt = 0;

        if(curr == NULL)
        {
            break;
        }

		int addCnt = 0;
        int sum = 0;
        Node* lastNode = NULL;
		while(addCnt < n && curr)
		{
			int val = curr->data;
			sum += val;
            lastNode = curr;
			curr = curr->next;
            addCnt++;
		}
        if(lastNode == NULL)
        {
            break;
        }
		//addCnt = 0;

		Node* newNode = new Node(sum);
		newNode->next = curr;
		lastNode->next = newNode;

        // Continue from node after inserted node
        curr = newNode->next;
	}
	return head;
}

/*
Time Complexity: O(n)
Space Complexity: O(1) (newly inserted nodes ko ignore karke)
*/
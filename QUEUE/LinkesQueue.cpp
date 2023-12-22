#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
	int data;
	Node* next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

class Queue {
    public:
	Node *front, *rear;
	Queue() 
    { 
        front = rear = NULL;
        
    }

	void enQueue(int x)
	{

		// Create a new LL node
		Node* temp = new Node(x);

		// If queue is empty, then
		// new node is front and rear both
		if (rear == NULL) {
			front = rear = temp;
			return;
		}

		// Add the new node at
		// the end of queue and change rear
		rear->next = temp;
		rear = temp;
	}

	void deQueue()
	{
		// If queue is empty, return NULL.
		if (front == NULL)
			return;

		// Store previous front and
		// move front one node ahead
		Node* temp = front;
		front = front->next;

		// If front becomes NULL, then
		// change rear also as NULL
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
    void Front()
    {
        if(front!=NULL)
        {
            cout<<front->data<<endl;
        }
        else{
            cout<<"Queue is empty"<<endl;
        }
    }
    void Rear()
    {
        if(rear!=NULL)
        {
            cout<<rear->data<<endl;
        }
        else{
            cout<<"Queue is empty"<<endl;
        }
    }
};
int main()
{
	Queue q;
    q.Front();
    q.Rear();
	q.enQueue(10);
	q.enQueue(20);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
    q.Front();
    q.Rear();
	cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1)<< endl;
	cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1);
}


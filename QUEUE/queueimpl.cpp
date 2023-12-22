#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int qfront;
    int *arr;
    int rear;
    int size;

public:
    Queue()
    { // it initializes the data member as required.
        size = 100001;
        arr = new int[size];
        rear = 0;
        qfront = 0;
    }
    bool isEmpty()
    {
        if (qfront == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int front()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
    void enqueue(int data)
    { //[push()]
        if (rear == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    void dequeue()
    { // pop()
        if (qfront == rear)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(11);

    cout << "front=" << q.front() << endl;

    cout << "isEmpty =" << q.isEmpty() << endl;

    q.dequeue();
    cout << "front=" << q.front() << endl;

    cout << "isEmpty =" << q.isEmpty() << endl;

}
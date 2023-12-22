// Stack implemenattion using Linked List
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Stack
{
    Node *head;

public:
    Stack()
    {
        head = NULL;
    }
    void push(int data)
    {
        Node *temp = new Node(data);

        if (!temp)
        {
            cout << "Stack is Full" << endl;
        }

        temp->data = data;
        temp->next = head;
        head = temp;
    }

    void pop()
    {
        Node *temp;
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    int peek()
    {
        if (head == NULL)
        {
            cout << "Stack is Empty";
        }
        return head->data;
    }

    bool isEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
            if (temp != NULL)
                cout << " -> ";
        }
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.display();
    cout << endl;
    cout<<s.isEmpty()<<endl;
    s.pop();
    s.display();
}
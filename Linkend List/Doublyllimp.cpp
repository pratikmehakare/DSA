//Doubly ll
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete this->next;
            this->next = NULL;
        }
        cout << "Memory free fro node with data" << value << endl;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int length(Node *head)
{
    int l = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
void insertAtHead(Node *&tail, Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtHead(tail, head, data);
        return;
    }
    // now for move from one node to next node
    Node *temp = head; // now temp is started from head we will increase by counting
    int c = 1;
    while (c < pos - 1)
    {
        temp = temp->next;
        c++;
    } // now we rich at position where we want to visit
    // if it is tail

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    // now insert new node
    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next->prev = newnode; //
    temp->next = newnode;
    newnode->prev = temp; //
}
void deleteAtPos(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int c=1;//rich the position
        while(c<pos)
        {
            prev=curr;
            curr=curr->next;
            c++;
        }

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}
int main()
{
    // Node* node1=new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    cout << "Lenght=" << length(head) << endl;
    insertAtHead(tail, head, 45);
    print(head);
    insertAtTail(head, tail, 100);
    print(head);
    insertAtPosition(head, tail, 3, 78);
    print(head);
    
    deleteAtPos(head,3);
    print(head);
}

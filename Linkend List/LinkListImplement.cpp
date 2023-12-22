// singly linked list
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
  ~Node()
  {
    int value = this->data;
    if (this->next != NULL)
    {
      delete next;
      this->next = NULL;
    }
    cout << "memory is free with data " << value << endl;
  }
};
void insertAtHead(Node *&head, int d)
{

  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node *&tail, int d) 
{
  Node *temp = new Node(d);
  tail->next = temp;
  tail = temp;
}

void insertAtPosition(Node *&head, int position, int d, Node *&tail)
{
  // for insert at 1st position
  if (position == 1)
  {
    insertAtHead(head, d);
    return;
  }

  // Normal code
  Node *temp = head;
  int c = 1;
  while (c < position - 1)
  {
    temp = temp->next;
    c++;
  }
  // inserting at last
  if (temp->next == NULL)
  {
    insertAtTail(tail, d);
    return;
  }
  //--------------

  // normal code
  Node *newNode = new Node(d);
  newNode->next = temp->next;
  temp->next = newNode;
}
void print(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    // for going to next node
    temp = temp->next;
  }
  cout << endl;
}

void deleteAtAnyPos(Node *&head, int pos)
{
  if (pos == 1)
  {
    Node *temp = head;
    head = head->next; // make head to the heads next
    temp->next = NULL;
    delete temp;
  }
  else
  {
    // for all position
    Node *curr = head;
    Node *prev = NULL;

    int c = 1;
    while (c < pos)
    {
      prev = curr;
      curr = curr->next;
      c++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}
int main()
{
  Node *n = new Node(10);

  // print(n);//10
  cout << "ORIGNAL" << endl;
  Node *head = n;
  print(head); // 10
  cout << endl;

  cout << "after insert at TAIL" << endl;
  Node *tail = n;
  insertAtTail(tail, 30);
  print(head); // 30
  cout << endl;

  cout << "after insert at TAIL" << endl;
  insertAtTail(tail, 1000); // 1000
  print(head);
  cout << endl;

  cout << "after insert at HEAD" << endl;
  insertAtHead(head, 50);
  print(head);
  cout << endl;

  int pos;
  cout << "Enter Position=";
  cin >> pos;

  cout << "after insert at " << pos << " POSITION" << endl;
  insertAtPosition(head, pos, 170, tail);
  print(head);
  cout << endl;

  cout << "Delete At Position" << endl;
  int ans = 1;
  do
  {
    int posi;
    cout << "Enter Delete Position=";
    cin >> posi;
    deleteAtAnyPos(head, posi);
    cout << "DELETE at " << posi << " POSITION" << endl;
    print(head);
    cout << "you want to delete more" << endl;
    cin >> ans;

  } while (ans != 0);
}
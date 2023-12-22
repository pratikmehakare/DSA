// Circular ll
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
            cout<<"memory is free with data "<<value<<endl;
        }
    }

};
void insert(Node* &tail,int element,int d)
{
   //if tail is empty
   if(tail==NULL)
   {
    Node* newnode=new Node(d);
    tail=newnode;
    newnode->next=newnode;//pointing
   }
   else{

    Node* curr=tail;
    //finding position 
    while(curr->data!=element)
    {
        curr=curr->next;
    }

    //after finding position
    Node* newnode=new Node(d);
    newnode->next=curr->next;
    curr->next=newnode;

   }
   return;
}
void deletep(Node* &tail,int value)
{
    //if list is empty
    if(tail==NULL)
    {
        cout<<"there is no value"<<endl;
    }
    else{
        Node* prev=tail;
        Node* curr=prev->next;

        while(curr->data!=value)
        {
             prev=curr;
             curr=curr->next;
        }

        prev->next=curr->next;
        curr->next=NULL;

        delete curr;

    }
}
void print(Node* tail)
{
    Node* temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
int main()
{
    Node* tail=NULL;
    insert(tail,1,3);
    print(tail);
    insert(tail,3,4);
    print(tail);
    deletep(tail,4);
    print(tail);
}
#include<bits/stdc++.h>
using namespace std;
class Circular{
    int* arr;
    int size;
    int front;
    int rear;
public:
    Circular(int n)
    {
        size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    bool isEmpty()
    {
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }
     int qfront(){
        if(front==-1)
          return -1;
        return arr[front];
     }
     bool enqueue(int data)
     {
        //check queue is empty or not
         if((front==0 && rear==size-1)||(rear==(front-1)%(size-1)))//|_|_|_r|_f|_|
         {
           return false;
         }
         else if(front==-1)//1st entry
         {
              rear=front=0;
         }
         else if(rear==size-1 && front!=0)//|_|_f|_|_|_r|
         {
            rear=0;
         }
         else
         {
           
            rear++;
         }
          arr[rear]=data;
          return true;
     }

     int dequeue()
     {
        if(front==-1){//empty
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear)//if queue consiste single element|_|_f&R_|_| 
        {
            front=rear=-1;
        }
        else if(front==size-1)//|_|_|_|_f|//if u reach to last point
        {
            front=0;
        }
        else{
            front++;
        }
        return ans;

     }    

};

int main()
{
    Circular o(50);
    o.enqueue(11);
    cout<<"front ="<<o.qfront()<<endl;
    cout<<o.dequeue()<<endl;
    cout<<"front ="<<o.qfront()<<endl;
    cout<<"empty ="<<o.isEmpty()<<endl;

}

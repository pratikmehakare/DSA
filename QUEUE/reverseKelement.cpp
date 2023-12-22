#include<bits/stdc++.h>
using namespace std;
queue<int> reverse(queue <int> q,int k)
{
    stack<int> s;
    for(int i=0;i<k;i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    int t=q.size()-k;
    while(t--)
    {
        int var=q.front();
        q.pop();
        q.push(var);
    }
    return q;
}
 int main()
 {
    queue<int> q;
    int k,n,ele;
    cout<<"enter K=";
    cin>>k;
    cout<<"enter no of element=";
    cin>>n;

    cout<<"enter element=";
    while(n--)
    {
        cin>>ele;
   q.push(ele);
    }

    cout<<endl;
    queue<int> a=reverse(q,k);
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }

 }
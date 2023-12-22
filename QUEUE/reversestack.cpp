#include<bits/stdc++.h>
using namespace std;
queue<int> reverse(queue<int> q){
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
       
    }
    return q;
   
}
int main()
{
    queue<int> q;
    int n, var;
    cout<<"no of element="<<endl;
    cin>>n;
    cout<<"enter element:"<<endl;
    while(n--)
    {   cin>>var;
        q.push(var);
    }


    queue<int> a=reverse(q);
    cout<<"reverse="<<endl;
    while(!a.empty())
    {
        
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl;

}

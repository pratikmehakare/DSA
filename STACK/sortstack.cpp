#include <bits/stdc++.h>
using namespace std;
void printstack(stack<int> s)
{
    stack<int> s1 = s;
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }
}
void large(stack<int> &s,int x)
{
    int temp;
    if(x<s.top())//4<1
    {
        temp=s.top();//temp=7
       s.pop();

       s.push(x);
    }
    else{ //4>1
         if(x<temp)//4<7
         {
            s.push(x);
         }
         else{// 9>7
         s.push(temp);
         temp=x;

         }
    }

}
void solve(stack<int> &s)
{
    stack<int> p;
    while (!s.empty())
    {
        p.push(s.top());
        s.pop();
    }

    cout << "====================" << endl;
    printstack(p);
    if (s.empty())
    {
        s.push(p.top());
        p.pop();

    }
    int x=p.top();
    large(s,x);
    solve(s);
    cout << "===========ans=========" << endl;
    printstack(s);


}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(1);
    s.push(4);
    s.push(5);
    cout << "stack before reverse" << endl;
    printstack(s);
    cout << "====================" << endl;
    solve(s);
}
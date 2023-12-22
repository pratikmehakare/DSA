// approach 1 by recursion
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

void insertatbottom(stack<int> &s, int element)
{
    if (s.empty())
    {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    insertatbottom(s, element);
    s.push(num);
}

void reverseStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;//if stack is empty then return back
    }

    int num = stack.top();
    stack.pop();
    reverseStack(stack);

    insertatbottom(stack, num);
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

    reverseStack(s);
    cout << "stack after reverse" << endl;
    printstack(s);
}

// approach 2
//  #include<bits/stdc++.h>
//  using namespace std;
//  void printstack(stack<int> s)
//  {
//      stack<int> s1=s;
//      while(!s1.empty()){
//          cout<<s1.top()<<endl;
//          s1.pop();
//      }
//  }
//  int main()
//  {
//      stack<int> s;
//      s.push(7);
//      s.push(1);
//      s.push(4);
//      s.push(5);
//      cout<<"stack before reverse"<<endl;
//      printstack(s);

//     stack<int> p;
//     while(!s.empty()){
//         p.push(s.top());
//         s.pop();
//     }
//     cout<<"stack after reverse"<<endl;
//     printstack(p);

// }
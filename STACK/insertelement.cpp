// approach 1 by recursion
#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }

    int temp=s.top();
    s.pop();

    solve(s,x);
    s.push(temp);
}
void printstack(stack<int> s1)
{
    stack<int> s2=s1;
    while(!s2.empty())
    {
        cout<<s2.top()<<"\n";
        s2.pop();
    }
}
int main()
{
    cout << "run" << endl;
    stack<int> s;
    s.push(7);
    s.push(1);
    s.push(4);
    s.push(5);
    cout<<"stack before inserting"<<endl;
    printstack(s);

    int x;
    cout << "enter=" << endl;
    cin >> x;

    solve(s, x);
    cout<<"stack after inserting"<<endl;
    printstack(s);

    cout << "run";
}

// approach 2
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      cout << "run" << endl;
//      stack<int> s;
//      s.push(7);
//      s.push(1);
//      s.push(4);
//      s.push(5);

//     stack<int> temp;

//     while (!s.empty())
//     {
//         temp.push(s.top());
//         s.pop();
//     }
//     int key;
//     cout << "enter=" << endl;
//     cin >> key;

//     s.push(key);

//     while (!temp.empty())
//     {
//         s.push(temp.top());
//         temp.pop();
//     }

//     cout << s.top() << endl;

//     cout << "run";
// }
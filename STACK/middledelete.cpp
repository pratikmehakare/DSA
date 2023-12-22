//delete middle element
#include <bits/stdc++.h>
using namespace std;
void solve(stack<int>&input,int c,int size)
{
    if(c==size/2)
    {
        input.pop();
        return;
    }

    int temp=input.top();
    input.pop();

    solve(input,c+1,size);

    input.push(temp);
  
}
void deleteMiddle(stack<int>&input,int n)
{
  int c=0;
  solve(input,c,n);
}
int main()
{
    stack<int> input;
    input.push(5);
    input.push(9);
    input.push(12);
    input.push(8);
    input.push(4);
    int size = 5;

    deleteMiddle(input, size);
}

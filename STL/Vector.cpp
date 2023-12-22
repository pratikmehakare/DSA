#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(int n) //for inserting number n=123456 into array form
{
  vector<int> v;
  while(n>0)
  {
    v.insert(v.begin(),n%10);
    n=n/10;
  }
  return v;
}

int main() {
  vector < int > v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5);
  cout << "The first element is: " << v[0] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0] << endl;
  cout<<endl;

  //itration
  cout<<"itration-how to access all member of vector"<<endl;
  vector<int> ::iterator i;
  for(i=v.begin();i<v.end();i++)
  {
    cout<<*i<<" ";
  }
  cout<<endl;

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty" << endl;

  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size()<<endl;;

  cout<<"Insert num into array form"<<endl;
  //for inserting number n=123456 into array form
  int n;
  cout<<"Enter Number:"<<endl;
  cin>>n;
  vector<int> ins=reverse(n);
  for(auto i: ins)
  {
    cout<<i<<" ";
  }

}
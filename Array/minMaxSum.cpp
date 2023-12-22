// 123456
// min=1+2+3+4+5
// max=2+3+4+5+6
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long min = 0, max = 0;
    vector<int> arr;
    int n = arr.size();
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(9);
    cout << "before" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(arr.begin(), arr.end());
    cout << "after sorting" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int>::iterator i;
    cout << "from start" << endl;
    for (i = arr.begin(); i < arr.end() - 1; i++)
    {
        cout << *i << " ";
        min += *i;
    }
    cout << endl
         << "from last" << endl;
    vector<int>::iterator it;
    for (i = arr.begin() + 1; i < arr.end(); i++)
    {
        cout << *i << " ";
        max += *i;
    }

    cout << endl
         << "min=" << min << endl;
    cout << "max=" << max << endl;
}
// second solution
//  int n = 5;
//  long long sum = 0;
//  int element[n];
//  for (int i = 0; i < n; i++){
//      cin >> element[i];
//      sum += element[i];
//  }
//  sort(element, element + n);
//  cout << sum - element[n - 1] << " " << sum - element[0];

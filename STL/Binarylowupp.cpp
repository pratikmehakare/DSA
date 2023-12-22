#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>& arr,int element) {
    int low = 0,high = arr.size()-1;
    while(low < high) {
        int mid = (low+high)/2;
        if(arr[mid] == element) return true;
        else if(element > arr[mid]) low = mid+1;
        else high = mid-1;
    }
    return false;
}

int main() {
    vector<int> arr = {1,4,5,6,9,9};
    int element = 6;
    
    if(binarySearch(arr,element)) 
    {
        cout<<"true";
    }
    else 
    {
        cout<<"false";
    }
    
    return 0;
}
//ans=true
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1,4,5,6,9,9};
    int element = 6;
    
    if(binary_search(arr.begin(),arr.end(),element)) cout<<"True";
    else cout<<"False";
    
    return 0;
}
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1,4,5,6,9,9};
    int element = 9;
    
    vector<int>::iterator itr = lower_bound(arr.begin(),arr.end(),element);//returns iterator
    int index = lower_bound(arr.begin(),arr.end(),element)-arr.begin();//returns index
    
    cout<<"Iterator: "<<itr-arr.begin()<<" Index: "<<index;
    
    return 0;
}
//
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1,4,5,6,9,9};
    int element = 9;
    
    vector<int>::iterator itr = upper_bound(arr.begin(),arr.end(),element);//returns iterator
    int index = upper_bound(arr.begin(),arr.end(),element)-arr.begin();//returns index
    
    cout<<"Iterator: "<<itr-arr.begin()<<" Index: "<<index;
    
    return 0;
}
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t;
  vector<int> v;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>t;
    v.push_back(t);
  }
  int m,a;
  cin>>m;
  for(int i=0;i<m;i++)
  {
    cin>>a;
    vector<int>::iterator low=lower_bound(v.begin(),v.end(),a);
    if(v[low-v.begin()] == a)
    {
      cout<<"YES"<<(low-v.begin()+1)<<endl;
    }
    else
    {
      cout<<"NO"<<(low-v.begin()+1)<<endl;
    }
    cout<<endl;
    
    
  }
  
}
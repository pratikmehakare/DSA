#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x)
{
    
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;//for long value
    while(s<=e)// or for(int i=0;i<n;i++)
    {
        if(arr[mid]==x)
        {
            return mid;
        }
        if(x>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
          mid=s+(e-s)/2;
    }
    return -1;
    
}
int main()
{
    int n=6,x;
    cout<<"enter=";
    cin>>x;
    int arr[n]={2,3,4,5,6,7};
    int a=search(arr,n,x);
    cout<<a;
}
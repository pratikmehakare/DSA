#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5,target,f=0;
    int nums[n]={2,5,7,6,1};
    cout<<"Target="<<endl;
    cin>>target;
    
    for(int i=0;i<n;i++)
    {
        if(nums[i]==target){
            cout<<i;
            f=1;
            break;
        }
    }
 
}

// #include<bits/stdc++.h>
// using namespace std;
// bool search(int arr[],int k)
// {
//     for(int i=0;i<10;i++)
//     {
//         if(arr[i]==k)
//         {
//             return 1;
//         }
//     }
//     return 0;

// }
// int main()
// {
//     int arr[10]={2,4,6,8,8,9};
//     int k;
//     cin>>k;
//     bool found=search(arr,k);
//     if(found)
//     {
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
// }


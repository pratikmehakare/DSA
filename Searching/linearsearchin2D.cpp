#include<bits/stdc++.h>
using namespace std;
/*COLWISE PRINT
 
 for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<arr[j][i]<<" ";
        }
     
    }*/
/* rowwise print

for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
*/


bool isPresent(int arr[][4],int k,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==k)
            {
                return 1;
            }
        }
    }
    return 0;

}
int main()
{
    int arr[3][4],k;
    cout<<"enter="<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++) 
        {
            cin>>arr[j][i];
        }
    }
        cout<<"Array"<<endl;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
          cout<< arr[i][j] <<" ";  
        }
        cout<<endl;
    }
    cout<<"target=";
    cin>>k;
    if(isPresent(arr,k,3,4))
    {
        cout<<"Yess";
    }
    else{
        cout<<"no..";
    }
    
    
}
#include<bits/stdc++.h>
using namespace std;
int largestSumRow(int arr[][3],int r,int c)
{
    int sum=0;
    int max=0,rowindex=-1;
    for(int i=0;i<3;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        {
          sum+=arr[i][j];
        
        }
        if(sum>max)
        {
            max=sum;
            rowindex=i;
        }
    }
    return max;
    cout<<"Index="<<endl;

}
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9},s=0;
    cout<<"ARRAY"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"         Row sum "<<endl;
    for(int i=0;i<3;i++)
    {
         s=0;
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"  ";
          s+=arr[i][j];
        
        }
        cout<<"= "<<s<<endl;
       
    }
    cout<<"--------"<<endl;

    for(int i=0;i<3;i++)
    {
         s=0;
        for(int j=0;j<3;j++)
        {
          s+=arr[j][i];
        
        }
        cout<<s<<" ";
       
    }
    cout<<" Cols Sum"<<endl;
    cout<<endl;
    cout<<"LARGEST ROW SUM"<<endl;
    /*--------------Max row element---------------------*/
    cout<<"Largest Row Sum is "<< largestSumRow(arr,3,3)<<endl;


}
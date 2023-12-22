#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e)
{
    int m = (s + e) / 2;
    // lenght of right part
    int len1 = m - s + 1;
    // lenght of right part
    int len2 = e - m;

    // Create new two sub array
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    //fill value in this arrays
    int start=s;
    for(int i=0;i<len1;i++)
    {
        arr1[i]=arr[start++];
    }
    int mid=m+1;
    for(int i=0;i<len2;i++)
    {
        arr2[i]=arr[mid++];
    }

    //merge this two array
    int i=0;
    int j=0;
    int k=s;
    while(i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr[k++]=arr2[j++];
        }
    }
    while(i<len1)
    {
        arr[k++]=arr1[i++];
    }
    while(j<len2)
    {
        arr[k++]=arr2[j++];
    }
}
void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
 
    int mid = (s + e) / 2;
    // sort left part

    mergeSort(arr, s, mid);
    // sort right part

    mergeSort(arr, mid + 1, e);
    // merge them

    merge(arr, s, e);
}
int main()
{
    int n = 8;
    int arr[n] = {2, 1, 4, 5, 6, 8, 7, 9};
    mergeSort(arr, 0, n - 1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
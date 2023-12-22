#include <bits/stdc++.h>
using namespace std;
int partition(int *arr, int s, int e)
{
    // give name to 1st element pivot
    int pivot = arr[s];//ex 2 is pivot
    int c = 0; // for counting how may small element than 1st element(pivot)
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot) // current element less than equal to 1st element
        {
            c++;//only 1 count i.e, 1
        }
    }

    // now placed pivot to the right place
    int pivotindex = s + c;   // 0+c ex 0+1=1 at 1rd position pivot will be placed[0,2,0,0,0]
    swap(arr[pivotindex], arr[s]); // swap to them [4,2,0,0,0]

    // now balance right and left part of pivot[0,2,0,0,0]
    // small element on left of the pivot and larger element on rght of the pivot[1,2,0,0,0], [0,2,4,5,6]
    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)//(0<1 && 5>1)
    {
        while (arr[i] <= pivot)//[1,2,0,0,0]
        {
            i++;
        }
        while (arr[j] > pivot)//[0,2,0,0,6]
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i], arr[j]); // swap(arr[i++],arr[j--]);// [4,2,1,5,6]->[1,2,4,5,6]
            i++;
            j--;
        }
    }
    return pivotindex;
}
void QuickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // partition
    int p = partition(arr, s, e);
    // sort left part
    QuickSort(arr, s, p - 1);
    // sort right part
    QuickSort(arr, p + 1, e);
}
int main()
{
    int n = 5;
    int arr[n] = {2, 4, 1, 6, 5};

    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

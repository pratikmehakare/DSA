#include <bits/stdc++.h>
using namespace std;
void bubble(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swaped = false; // for optimization
        for (int j = 0; j < n - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = true; // for optimization
            }
        }

        if (swaped == false) // for optimization
        {
            break;
        }
    }
}
int main()
{
    int n;
    cout << " Enter no of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble(arr, n);
    cout << "Sorted:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
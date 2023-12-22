#include <bits/stdc++.h>
using namespace std;
// int diagonalDifference(vector<vector<int>> arr) {
    
//     int a=0,b=0;
//     int n=arr.size();
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<i+1;j++)
//         {
//             a+=arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         b+=arr[i][(n-1)-i];
//     }
    
//     return abs(a-b);
    

// }
int main()
{
    int a = 0, b = 0;
    int r = 3;
    int c = 3;
    int arr[r][c];
    cout << "Enter matrix" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Matrix" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "1stDaigonal" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < i + 1; j++)
        {
            cout << arr[i][j] << " ";
            a += arr[i][j];
        }
        cout << endl;
    }
    cout << "2stDaigonal" << endl;
    for (int i = 0; i < r; i++)
    {
        cout << arr[i][(r - 1) - i] << " ";
        b += arr[i][(r - 1) - i];
        cout << endl;
    }

    cout << endl
         << a << " -" << b << "=" << abs(a - b);
}
#include <bits/stdc++.h>
using namespace std;
/*complexity o(cr)*/
int main()
{
    int r, c;
    cout << "Enter row=";
    cin >> r;
    cout << "Enter col=";
    cin >> c;
    int arr[r][c];
    cout << "Enter Elements=" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "ARRAY" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

/*--------------------------------------------*/
    cout << "WAVE" << endl;
    for (int i = 0; i <c; i++)
    {
        if (i%2 == 0)
        {
            for (int j = 0; j < r; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = r - 1; j >= 0; j--)
                {
                    cout << arr[j][i] << " ";
                }
        }
    }
}
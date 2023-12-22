#include <bits/stdc++.h>
using namespace std;
//07:05:45PM -19:05:45
//AM
//    12:00
//PM
//   8->20
//   9->21
//   Accept 12:00 add+12
string timeConversion(string s)
{

    if (s[8] == 'A') // for AM
    {
        if (s[0] == '1' && s[1] == '2') // 12:02 -> 00:01
        {
            s[0] = s[1] = '0';
        }
    }
    else // for PM
    {
        if (s[1] == '8') // if we add 12 to the 8 then it generate value of  colon by ascii value
        {
            s[0] = '2';
            s[1] = '0';
        }
        else if (s[2] == '9') // same as 8
        {
            s[0] = '2';
            s[1] = '1';
        }
        else if (!(s[0] == '1' && s[1] == '2')) // accept 12:00 ,add 12 to other numbers
        {
            s[0] += 1;
            s[1] += 2;
        }
    }
    s[8] = s[9] = ' '; // remove PM /AM
    return s;
}

int main()
{
    string s;
    cout << "Enter =hh/mm/ss/pm||am";
    cin >> s;

    string result = timeConversion(s);

    cout << result << "\n";
}

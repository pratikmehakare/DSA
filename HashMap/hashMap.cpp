#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    //map<string, int> m;

    // Three types of Insertion
    pair<string, int> p = make_pair("Pratik", 1);
    m.insert(p);

    pair<string, int> p2("Vinay", 2);
    m.insert(p2);

    m["Ishant"] = 4;
    m["Ishant"] = 3; // it will update ,map store unique value

    cout << m["Ishant"] << endl;    // 3
    cout << m.at("Pratik") << endl; // 1

    cout << "size=" << m.size() << endl;

    // cout<<m.at("unknown")<<endl;//error

    cout << m["unknown"] << endl;    // it will create entry //0
    cout << m.at("unknown") << endl; // 0

    cout << "size=" << m.size() << endl;

    cout << m.count("govind") << endl; // search if present 1 or 0
    cout << m.count("Pratik") << endl; // 1

    m.erase("Vinay");
    cout << "size=" << m.size() << endl;

    // PRINTING
    unordered_map<string, int>::iterator it = m.begin();
    //map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }
    // output
    // unknown 0
    // Ishant 3
    // Pratik 1

    // if it is ordered map then it print in order
    // Ishant 3 
    // Pratik 1
    // unknown 0
}
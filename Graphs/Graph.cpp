//for only int data type
//by uging adj list
#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj; // to store U->V ex 1->{0,2,3} here U=1 and V=0,1,2//
                                       //,so V is list of elments,
    //oR vector<vector<int>> adj;
    void addEdeges(int u, int v, bool direction)
    {
        // direction 0 =undirected u->v, v->u
        // direction 1 =directed u->v

        adj[u].push_back(v); // for directed(1) graph only one side is there u->V

        // But if graph is undirected(0) there are two side u->v and v->u
        // so we also insert from v-> u
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "->"; // print u->

            for (auto j : i.second) // print V {elements}
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};
int main()
{
    graph g;
    int n;
    cout << "Enter the number of Nodes=";
    cin >> n;

    int m;
    cout << "Enter the number of Edges=";
    cin >> m;
    
    int dierction;
    cout << "Enter direction=";
    cin >> dierction;

    cout << "Enter U AND V " << endl;
    for (int i = 0; i < m; i++)
    {

        int u, v;
        cin >> u >> v;
      
        g.addEdeges(u, v, dierction);
    }
    cout << "Graph" << endl;
    g.printAdjList();
}



// //for all types of datatype
// #include <bits/stdc++.h>
// using namespace std;
// template<typename T>   //---------------here changes------------------------------------
// class graph
// {
// public:
//                       //---------------here changes------------------------------------
//     unordered_map<T, list<T>> adj; // to store U->V ex 1->{0,2,3} here U=1 and V=0,1,2//
//                                        //,so V is list of elments,

//                       //---------------here changes------------------------------------                   
//     void addEdeges(T u, T v, bool direction)
//     {
//         // direction 0 =undirected u->v, v->u
//         // direction 1 =directed u->v

//         adj[u].push_back(v); // for directed(1) graph only one side is there u->V

//         // But if graph is undirected(0) there are two side u->v and v->u
//         // so we also insert from v-> u
//         if (direction == 0)
//         {
//             adj[v].push_back(u);
//         }
//     }

//     void printAdjList()
//     {
//         for (auto i : adj)
//         {
//             cout << i.first << "->"; // print u->

//             for (auto j : i.second) // print V {elements}
//             {
//                 cout << j << ",";
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     graph<char> g; //---------------here changes------------------------------------
//     int n;
//     cout << "Enter the number of Nodes=";
//     cin >> n;

//     int m;
//     cout << "Enter the number of Edges=";
//     cin >> m;
//     int dierction;
//     cout << "Enter direction=";
//     cin >> dierction;

//     cout << "Enter U AND V " << endl;
//     for (int i = 0; i < m; i++)
//     {

//         char u, v;  //---------------here changes------------------------------------
//         cin >> u >> v;
      
//         g.addEdeges(u, v, dierction);
//     }
//     cout << "Graph" << endl;
//     g.printAdjList();
// }
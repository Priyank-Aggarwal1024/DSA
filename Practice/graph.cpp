#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v, e, a, b;
    cout << "Enter no of vertices : ";
    cin >> v;
    cout << "Enter no of edges : ";
    cin >> e;
    vector<vector<int>> adj(v);
    for (int i = 0; i < e; i++)
    {
        cout << "Enter vertices of edges " << i + 1 << endl;
        cin >> a >> b;
        adj[a].push_back(b);
        // adj[b].push_back(a);
    }
    cout << "Adjacency list : " << endl;
    for (int i = 0; i < adj.size(); i++)
    {
        cout << i << " : ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }

        cout << endl
             << "The out degree of vertex " << i << " is : " << adj[i].size() << endl;
    }
    return 0;
}
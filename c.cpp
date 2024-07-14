#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"input";
    int n, m;
    
    cin >> n;
    cin >> m;
    // adjacency list for undirected graph
    // time complexity: O(2E)
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int d = 0; d < n+1; ++d) {
        cout << "\n Vertex "
            << d << ":";
        for (auto x : adj[d]){
        cout << "-> " << x;
        }
        printf("\n");
    }
  

    
    
    return 0;
}

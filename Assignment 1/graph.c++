#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter number of nodes and edges : ";
    cin >> n >> m;
    // adjacency list for undirected graph
    vector<int> adj[n+1];
    cout<<"enter edges:"<<endl;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
  //Print graph
  cout<<"Graph edges : "<<endl;
    for(int i=1;i<=n;i++){
        for(auto x:adj[i]){
            cout<<i<<"->"<<x<<endl;
        }
    }
    return 0;
}
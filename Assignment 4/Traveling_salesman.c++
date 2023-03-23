#include <bits/stdc++.h>
using namespace std;

int travllingSalesmanProblem(vector<vector<int>>&graph, int s,int n){
    vector<int> vertex;
    for (int i = 0; i < n; i++)
        if (i != s)
            vertex.push_back(i);
 
    int min_path = INT_MAX;
    do {
        int current_pathweight = 0;
        int k = s;
        for (int i = 0; i < vertex.size(); i++) {
            current_pathweight += graph[k][vertex[i]];
            k = vertex[i];
        }
        current_pathweight += graph[k][s];
        min_path = min(min_path, current_pathweight);
 
    } while (next_permutation(vertex.begin(), vertex.end()));
 
    return min_path;
}
int main(){
    int n,m;
    cout<<"Enter number of nodes and edges :";
    cin>>n>>m;
 cout<<"Enter Edges and their weights :";
    vector<vector<int>>graph(n+1,vector<int>(n,0));
    for (int i = 0; i < m; i++) {
        int u, v,w;
        cin >> u >> v>>w;
        graph[u][v] = w;
        graph[v][u] = w;
    }
    int start = 0;
    cout << travllingSalesmanProblem(graph, start,n) << endl;
    return 0;
}

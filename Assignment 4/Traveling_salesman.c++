#include<bits/stdc++.h>
using namespace std;

int calculate(vector<pair<int,int>>adj[], int num_nodes){
            /// Picking a source city
            int source = 0;
            vector<int> nodes;
            
            /// pushing the rest num_nodes-1 cities into a bundle
            for(int i=0;i<num_nodes;i++){
                if(i != source){
                    nodes.push_back(i);
                }
            }
            int n = nodes.size();
            int shortest_path = INT_MAX;
            
            /// generating permutations and tracking the minimum cost
            while(next_permutation(nodes.begin(),nodes.end())){
                int path_weight = 0;

                int j = source;
                for (int i = 0; i < n; i++){
                    path_weight += adj[j][nodes[i]];
                    j = nodes[i];
                }
                path_weight += adj[j][source];
                shortest_path = min(shortest_path, path_weight);
            }
     return shortest_path;
}

int main(){
    int n,m;
    cout<<"Enter number of nodes and edges : ";
    cin>>n>>m;
 
    cout<<"Enter edges and weight : "<<endl;
    vector<vector<int>>graph(n+1,vector<int>(n+1,0));
    for(int i=1;i<=n;i++){
      int n,m,wt;cin>>n>>m>>wt;
       graph[n][m]=wt;
    }

   cout<<"Shortest distance : "<<calculate(adj,n);
}  
// C++ Program for Floyd Warshall Algorithm
#include <bits/stdc++.h>
using namespace std;

#define INF 99999

void print(vector<vector<int>>dist){
  int V=dist.size();
	cout << "The following matrix shows the shortest "
			"distances"
			" between every pair of vertices \n";
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF)
				cout << "INF"
					<< " ";
			else
				cout << dist[i][j] << " ";
		}
		cout << endl;
	}
}

void FWA(vector<vector<int>>dist){
  int V=dist.size();
	int i, j, k;
	for (k = 0; k < V; k++) {
		for (i = 0; i < V; i++) {
			for (j = 0; j < V; j++) {
				if (dist[i][j] > (dist[i][k] + dist[k][j])
					&& (dist[k][j] != INF
						&& dist[i][k] != INF))
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}
	print(dist);
}
int main(){
	vector<vector<int>>graph = { { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ 5, INF, 0, 1 },
						{ INF, 3, INF, 0 } };

	// Function call
	FWA(graph);
	return 0;
}


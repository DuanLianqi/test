#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

constexpr int N = 8;
constexpr int INF = 1100;
//INF表示两个节点之间没有边
vector<vector<int>> graph = {{0, 2, INF, INF, 6, INF, INF, INF}, {2, 0, 3, 7, INF, INF, INF, INF}, {INF, 3, 0, 1, INF, INF, INF, 2}, {INF, 7, 1, 0, 1, 2, 4, 5},
                            {6, INF, INF, 1, 0, 5, INF, INF}, {INF, INF, INF, 2, 5, 0, 3, INF}, {INF, INF, INF, 4, INF, 3, 0, 4}, {INF, INF, 2, 5, INF, INF, 4, 0}};
//vector<int> path(N, INF);


void dijkstra(int src, vector<int>& dis) {
    vector<int> visited(N, 0);
	dis[src] = 0;
	int j = src;
	for (int i = 0; i < N; i++) {
		visited[j] = 1;

		for (int m = 0; m < N; m++) {
			dis[m] = min(dis[m], dis[j] + graph[j][m]);
		}
		j = N;
		for (int k = 0; k < N; k++) {
			if (!visited[k] && dis[k] <= dis[j]) {
				j = k;
			}
		}
	}
	cout << "this is a test" << endl;
}

int main() {
    int src = 0;
    vector<int> dis(N + 1, 1100);
    dijkstra(src, dis);
    for (int i = 0; i < N; i++) {
        cout << dis[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

constexpr int N = 8;
constexpr int INF = 1100;
//INF表示两个节点之间没有边
vector<vector<int>> graph = {
							 { 0 ,  2 , INF, INF,  6 , INF, INF, INF}, 
							 { 2 ,  0 ,  3 ,  7 , INF, INF, INF, INF}, 
							 {INF,  3 ,  0 , INF, INF, INF, INF,  6 }, 
							 {INF,  7 , INF,  0 ,  1 ,  2 ,  4 ,  1 },
                             { 6 , INF, INF,  1 ,  0 ,  5 , INF, INF}, 
							 {INF, INF, INF,  2 ,  5 ,  0 ,  3 , INF}, 
							 {INF, INF, INF,  4 , INF,  3 ,  0 ,  4 }, 
							 {INF, INF,  6 ,  1 , INF, INF,  4 ,  0 },
							 };
//vector<int> path(N, INF);


void dijkstra(int src, vector<int>& dis, vector<vector<int>>& allPath) {
    vector<int> visited(N, 0);
	vector<int> path(N, -1);
	int min, i, j, dest;

	for (i = 0; i < N; i++) {
		dis[i] = graph[src][i];
		if (graph[src][i] < INF) {
			path[i] = src;
		}
	}
    
	visited[src] = 1;
	path[src] = -1;
	for (i = 0; i < N; i++) {
		min = INF;
		for (j = 0; j < N; j++) {
			if (visited[j] == 0 && dis[j] < min) {
				dest = j;
				min = dis[j];
			}
		}
		visited[dest] = 1;
		for (j = 0; j < N; j++) {
			if (visited[j] == 0 && dis[dest] + graph[dest][j] < dis[j]) {
				dis[j] = dis[dest] + graph[dest][j];
				path[j] = dest; 
			}
		}
	}

	for (int k = 0; k < N; k++) {
		vector<int> tempPath;
		stack<int> stk;
		int temp = k;
		while (path[temp] != -1) {
			stk.push(temp);
			temp = path[temp];
		}
		stk.push(temp);
		while (!stk.empty()) {
			tempPath.push_back(stk.top());
			stk.pop();
		}
		allPath.push_back(tempPath);
	}
}

int main() {
    int src = 0;
    vector<int> dis(N, INF);
	vector<vector<int>> path;
    dijkstra(src, dis, path);
    for (int i = 0; i < N; i++) {
		cout << "终点为: " << i << "   距离为: ";
        cout << dis[i] << "  路径为: ";
		for (int j = 0; j < path[i].size() - 1; j++) {
			cout << path[i][j] << " -> ";
		}
		cout << path[i][path[i].size() - 1] << endl;
    }
    return 0;
}
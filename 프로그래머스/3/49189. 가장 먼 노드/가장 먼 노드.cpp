#include <vector>
#include <map>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    vector<int> distance(n + 1, -1);
    vector<vector<int>> adj(n + 1);
    
    for (const auto& e : edge) {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }
    
    queue<int> q;
    q.push(1);
    distance[1] = 0;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        for (int neighbor : adj[node]) {
            if (distance[neighbor] == -1) { // 방문하지 않은 경우만
                distance[neighbor] = distance[node] + 1;
                q.push(neighbor);
            }
        }
    }
    
    int max_distance = *max_element(distance.begin(), distance.end());
    int answer = count(distance.begin(), distance.end(), max_distance);
    
    return answer;
}

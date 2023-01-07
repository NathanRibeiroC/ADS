#include <bits/stdc++.h>
using namespace std;

vector<int> adj[8];
queue<int> q;
bool visited[8];
int distances[8];

//TIME COMPLEXITY: (n+m)
// search starts at node x
void bfs(int x) {
    visited[x] = true;
    distances[x] = 0;
    q.push(x);
    while (!q.empty()) {
        int s = q.front(); q.pop();
// process node s
        for (auto u : adj[s]) {
            if (visited[u]) continue;
            visited[u] = true;
            distances[u] = distances[s]+1;
            q.push(u);
        }
    }
}

void initializate(){
    adj[1].push_back(2);
    adj[1].push_back(4);
    adj[2].push_back(3);
    adj[2].push_back(5);
    adj[3].push_back(6);
    adj[6].push_back(5);

    for(int i=0;i<8;i++){
        visited[i] = false;
        distances[i] = 0;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    // node we want to search for
    int s = 1;
    initializate();
    bfs(s);
}
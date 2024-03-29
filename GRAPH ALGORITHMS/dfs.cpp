#include <bits/stdc++.h>
using namespace std;

vector<int> adj[8];
bool visited[8];


//TIME COMPLEXITY: (n+m)
void dfs(int s) {
    if (visited[s]) return;
    visited[s] = true;
    // process node s
    for (auto u: adj[s]) {
        dfs(u);
    }
}

void initializate(){
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);

    for(int i=0;i<8;i++){
        visited[i] = false;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    // node we want to start the search on
    int s = 2;
    initializate();
    dfs(s);
}
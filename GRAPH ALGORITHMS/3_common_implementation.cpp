//
// Created by nribe on 10/09/2022.
//

//Adjacent List

#include <bits/stdc++.h>
using namespace std;
int main() {
    //Adjacent List
    // solution comes here
    vector<int> adj[8];
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);

    //weighted
    vector<pair<int,int>> adj1[8];
    adj1[1].push_back({2,5});
    adj1[2].push_back({3,7});
    adj1[2].push_back({4,6});
    adj1[3].push_back({4,5});
    adj1[4].push_back({1,2});

    for (auto u : adj[8]) {
        // process node u
    }

    //Adjacent Matrix

    //Edge List
    vector<pair<int,int>> edges;

    edges.push_back({1,2});
    edges.push_back({2,3});
    edges.push_back({2,4});
    edges.push_back({3,4});
    edges.push_back({4,1});

    //weighted
    vector<tuple<int,int,int>> edges1;
    edges1.push_back({1,2,5});
    edges1.push_back({2,3,7});
    edges1.push_back({2,4,6});
    edges1.push_back({3,4,5});
    edges1.push_back({4,1,2});
}
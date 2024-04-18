#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 20001
#define INF 3000001
using namespace std;

int V = 0, E = 0, K = 0;
vector<vector<pair<int,int>>> adj(MAX);
vector<int>dist(MAX);

struct cmp
{
    bool operator()(pair<int,int>&p1, pair<int,int>&p2)
    {
        return p1.second > p2.second;  
    }
};

void dijkstra(int start)
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
    for(int i = 1; i <= V; i++)
        dist[i] = INF;
    dist[start] = 0;
    pq.push({start, 0});
    
    int cur_idx, cur_cost, next_idx, next_cost;
    while(!pq.empty())
    {
        cur_idx = pq.top().first;
        cur_cost = pq.top().second;
        for(int i = 0; i < adj[cur_idx].size(); i++)
        {
            next_idx = adj[cur_idx][i].first;
            next_cost = adj[cur_idx][i].second + cur_cost;
            if(next_cost < dist[next_idx])
            {
                dist[next_idx] = next_cost;
                pq.push({next_idx, next_cost});
            }
        }
        pq.pop();
    }
    return;
}

int main()
{
    cin >> V >> E >> K;
    int u, v, w;
    while(E--)
    {
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    dijkstra(K);
    for(int i = 1; i <= V; i++)
        cout << ((dist[i] == INF) ? "INF" : to_string(dist[i])) << '\n';
    return 0;
}

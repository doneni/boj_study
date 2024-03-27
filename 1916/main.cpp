#include <iostream>
#include <vector>
#include <queue>
#define INF 1e9
#define MAX 1001
using namespace std;

int N = 0;
vector<vector<pair<int,int>>> bus(MAX);
vector<int> v(MAX);
vector<int> dist(MAX);

struct cmp{
    bool operator()(pair<int,int>& p1, pair<int,int>& p2){
        return p1.first > p2.first;
    }
};

void dijkstra(int src, int dst)
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
    for(int i = 1; i <= N; i++)
        dist[i] = INF;
    pq.push(make_pair(0, src));
    dist[src] = 0;

    int here = src, cost = 0;
    while(!pq.empty())
    {  
        cost = pq.top().first;
        here = pq.top().second;

        if(dist[here] < cost)
        {
            pq.pop();
            continue;
        }

        for(int i = 0; i < bus[here].size(); i++)
        {
            int next = bus[here][i].second;
            int next_cost = cost + bus[here][i].first;
            if(next_cost < dist[next])
            {
                dist[next] = next_cost;
                pq.push({next_cost, next});
            }
        }
        pq.pop();
    }
    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int M = 0;
    cin >> N >> M;
    
    int f, t, w;
    for(int m = 0; m < M; m++)
    {
        cin >> f >> t >> w;
        bus[f].push_back({w, t});
    }

    int src, dst;
    cin >> src >> dst;
    
    dijkstra(src, dst);
    cout << dist[dst] << '\n';

    return 0;
}
#include <iostream>
#include <vector>
#include <queue>
#define INF 1e9+7
#define MAX 1001
using namespace std;

int N = 0, M = 0, X = 0;
vector<vector<pair<int,int>>> T(MAX);
vector<int> v(MAX);
vector<int> dist(MAX);

struct cmp{
    bool operator()(pair<int,int>& p1, pair<int,int>& p2){
        return p1.second > p2.second;
    }
};

int dijkstra(int start, int end)
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
    for(int i = 1; i <= N; i++)
        dist[i] = INF;

    pq.push(make_pair(start, 0));
    dist[start] = 0;

    int here = start, cost = 0;
    while(!pq.empty())
    {
        here = pq.top().first;
        cost = pq.top().second;

        if(dist[here] < cost)
        {
            pq.pop();
            continue;
        }

        for(int i = 0; i < T[here].size(); i++)
        {
            int next = T[here][i].first;
            int next_cost = cost + T[here][i].second;
            if(next_cost < dist[next])
            {
                dist[next] = next_cost;
                pq.push(make_pair(next, next_cost));
             }
        }
        pq.pop();
    }
    return dist[end];
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M >> X;
    
    int from = 0, to = 0, w = 0;
    for(int i = 0; i < M; i++)
    {
        cin >> from >> to >> w;
        T[from].push_back(make_pair(to, w));
    }

    for(int i = 1; i <= N; i++)
    {
            v[i] = dijkstra(i, X);
    }

    dijkstra(X, 1);

    int max = 1;
    for(int i = 1; i <= N; i++)
    {
        v[i] += dist[i];
        if(v[max] < v[i])
            max = i;
    }   
    cout << v[max] << '\n';

    return 0;
}
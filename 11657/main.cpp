#include <iostream>
#include <vector>
#define MAX 501
#define INF 1e9
using namespace std;

int N = 0;
vector<pair<pair<int,int>, int>> bus;
long long dist[MAX] = { 0, };

bool bellman_ford(int start)
{
    dist[start] = 0;
    for(int i = 0; i < N; i++)
    {
        for(const auto& b : bus)
        {
            int from = b.first.first;
            int to = b.first.second;
            int cost = b.second;
            if(dist[from] == INF) { continue; }
            if(dist[to] > dist[from] + cost)
                if(i == N-1)
                    return false;
                else
                    dist[to] = dist[from] + cost;
        }
    }
    return true;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int M = 0; cin >> N >> M;
    int start = 1;
    int A, B, C;
    while(M--)
    {
        cin >> A >> B >> C;
        bus.push_back({{A,B},C});
    }
    fill(dist, dist + N + 1, INF);
    if(bellman_ford(start))
        for(int i = 1; i <= N; i++)
        {
            if(i == start) { continue; }
            cout << (dist[i] == INF ? -1 : dist[i]) << endl;
        }
    else
        cout << -1 << endl;
    return 0;
}

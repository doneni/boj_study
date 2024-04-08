#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N = 0, M = 0;
vector<vector<int>> adj;
vector<int> res;

void bfs(int start)
{
    vector<bool> visited(N + 1);
    queue<int> q;
    visited[start] = true;
    res[start] = 0;
    q.push(start);
    while(!q.empty())
    {
        int top = q.front();
        for(size_t i = 0; i < adj[top].size(); i++)
        {
            int next = adj[top][i];
            if(!visited[next])
            {
                visited[next] = true;
                q.push(next);
                res[next] = res[top] + 1;
            }
        }
        q.pop();
    }
    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    cin >> N >> M;
    adj.reserve(N + 1);
    res.reserve(N + 1);
    int a = 0, b = 0;
    while(M--)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1);

    int max = 0;
    priority_queue<int> pq;
    for(int i = 1; i <= N; i++)
    {
        if(res[max] < res[i])
        {
            while(!pq.empty()) { pq.pop(); }
            pq.push(res[i]);
            max = i;
        }
        else if(res[max] == res[i])
        {
            pq.push(res[i]);
        }
    }
    cout << max << ' ' << res[max] << ' ' << pq.size() << '\n';

    return 0;
}
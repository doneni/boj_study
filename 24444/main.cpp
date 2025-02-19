#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N = 0;
vector<priority_queue<int, vector<int>, greater<int>>> adj;
vector<int> visited;

void bfs(int R) {
    queue<int> q;
    int o = 1;
    visited[R] = o++;
    q.push(R);
    while(!q.empty()) {
        int t = q.front();
        q.pop();
        while(!adj[t].empty()) {
            int n = adj[t].top();
            adj[t].pop();
            if(visited[n] == 0) {
                visited[n] = o++;
                q.push(n);
            }
        }
    }
    return;
}

int main()
{
    int M, R; cin >> N >> M >> R;
    adj.resize(N+1);
    visited.resize(N+1);
    while(M--) {
        int s, d; cin >> s >> d;
        adj[s].push(d);
        adj[d].push(s);
    }
    bfs(R);
    for(int i = 1; i <= N; i++) {
        cout << visited[i] << '\n';
    }
    return 0;
}

#include <iostream>
#include <deque>
#define MAX 101
using namespace std;

int N = 0, M = 0;
int adj[MAX][MAX] = { 0, };

int bfs(int v)
{
    deque<int> q;
    deque<int> k(N + 1, 0);
    int visited[MAX] = { 0, };
    q.push_back(v);
    visited[v] = 1;
    while(!q.empty())
    {
        for(int i = 1; i <= N; i++)
        {
            if(adj[q.front()][i] && !visited[i])
            {
                q.push_back(i);
                visited[i] = 1;
                k[i] = k[q.front()] + 1;
            }
        }
        q.pop_front();
    }

    int ans = 0;
    for(int i = 1; i <= N; i++)
        ans += k[i];

    return ans;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;

    int x = 0, y = 0;
    for(int i = 0; i < M; i++)
    {
        cin >> x >> y;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }

    int who = 1, min = bfs(1);
    for(int i = 2; i <= N; i++)
    {
        int k = bfs(i);
        if(k < min)
        {
            who = i; 
            min = k;
        }
    }

    cout << who << '\n';

    return 0;
}
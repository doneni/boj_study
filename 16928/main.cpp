#include <iostream>
#include <queue>
using namespace std;

int map[101] = { 0, };
int visited[101] = { 0, };

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while(!q.empty())
    {
        int now = q.front();
        while(map[now])
        {
            visited[map[now]] = visited[now];
            now = map[now];
        }
        if(now == 100)
            break;
        for(int i = now + 1; i < now + 7; i++)
        {
            if(i > 100)
                break;
            if(visited[i])
                continue;
            q.push(i);
            visited[i] = visited[now] + 1;
        }
        q.pop();
    }
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N, M; cin >> N >> M;
    int x, y, u, v;
    while(N--)
    {
        cin >> x >> y;
        map[x] = y;
    }
    while(M--)
    {
        cin >> u >> v;
        map[u] = v;
    }
    bfs(1);
    cout << --visited[100] << endl;
    return 0;
}

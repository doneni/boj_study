#include <iostream>
#include <queue>
#define MAX 101
using namespace std;

int N = 0;
int adj[MAX][MAX] = { 0, };

void bfs(int start)
{
    bool visited[MAX] = { 0, };
    queue<int> q;
    q.push(start);
    int cur;
    while(!q.empty())
    {
        cur = q.front();
        for(int i = 1; i <= N; i++)
        {
            if(cur == i || visited[i] || !adj[cur][i])
                continue;
            visited[i] = true;
            q.push(i);
        }
        q.pop();
    }
    for(int i = 1; i <= N; i++)
        cout << visited[i] << ' ';
    cout << '\n';
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    cin >> N;
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++)
            cin >> adj[i][j];
    for(int i = 1; i <= N; i++)
        bfs(i);
    return 0;
}

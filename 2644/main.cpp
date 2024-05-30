#include <iostream>
#include <queue>
#define MAX 101
using namespace std;

int N = 0;
bool adj[MAX][MAX] = { 0, };
int visited[MAX] = { 0, };

void bfs(int start, int end)
{
    queue<int> q;
    visited[start] = 1;
    q.push(start);
    while(!q.empty())
    {
        int now = q.front();
        for(int i = 1; i <= N; i++)
        {
            if(adj[now][i] && !visited[i])
            {
                visited[i] = visited[now] + 1;
                q.push(i);
            }    
        }
        q.pop();
    }
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int start = 0, end = 0, M = 0; cin >> N >> start >> end >> M;
    int x, y;
    while(M--)
    {
        cin >> x >> y;
        adj[x][y] = true; adj[y][x] = true;
    }
    bfs(start, end);
    cout << visited[end] - 1 << endl;
    return 0;
}


#include <iostream>
#include <deque>
#define MAX 1001
using namespace std;

int n = 0;
int c = 0;
bool adj[MAX][MAX] = { 0, };
int visited[MAX] = { 0, };
void bfs(int v)
{
    deque<int> q;
    q.push_front(v);
    visited[v] = c;
    while(!q.empty())
    {
        for(int i = 1; i <= n; i++)
        {
            if(adj[q.front()][i] && !visited[i])
            {
                q.push_back(i);
                visited[i] = c;
            }
        }
        q.pop_front();
    }
    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int m = 0;
    cin >> n >> m;
    int x = 0, y = 0;
    for(int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }

    for(int i = 1; i <= n; i++)
        if(!visited[i])
        {
            c++;
            bfs(i);
        }

    cout << c << '\n';

    return 0;
}
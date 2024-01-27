#include <iostream>
#include <vector>
#define MAX 101
using namespace std;

int n = 0;
bool adj[MAX][MAX] = { 0, };
bool visited[MAX] = { 0, };
int cnt = 0;

void dfs(int p)
{
    cnt++;
    visited[p] = 1;
    for(int i = 1; i <= n; i++)
        if(adj[p][i] && !visited[i])
            dfs(i);
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int m = 0;
    cin >> n >> m;
    int x = 0, y = 0;
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }

    dfs(1);

    cout << cnt - 1 << '\n';

    return 0;
}
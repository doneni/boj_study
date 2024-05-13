#include <iostream>
#include <queue>
#define MAX 300
using namespace std;

int l, x, y, a, b;
queue<pair<int,int>> q;
bool visited[MAX][MAX] = { 0, };
int cnt[MAX][MAX] = { 0, };

bool visit(int nx, int ny)
{
    if(nx == a && ny == b)
    {
        cnt[nx][ny] = cnt[q.front().first][q.front().second] + 1;
        return true;
    }
    if(0 <= nx && nx < l && 0 <= ny && ny < l && !visited[nx][ny])
    {
        q.push({nx, ny});
        visited[nx][ny] = true;
        cnt[nx][ny] = cnt[q.front().first][q.front().second] + 1;
    }
    return false;
}

void bfs()
{
    if(x == a && y == b)
    {
        cout << 0 << endl;
        return;
    }
    visited[x][y] = true;
    q.push({x,y});
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        if( visit(x + 1, y + 2) || visit(x + 2, y + 1) || visit(x + 2, y - 1) || visit(x + 1, y - 2) || visit(x - 1, y - 2) || visit(x - 2, y - 1) || visit(x - 2, y + 1) || visit(x - 1, y + 2))
        {
            cout << cnt[a][b] << endl;
            return;
        }
        q.pop();
    }
    return;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int T = 0; cin >> T;

    while(T--)
    {
        cin >> l >> x >> y >> a >> b;
        while(!q.empty()) { q.pop(); }
        for(int i = 0; i < l; i++)
            for(int j = 0; j < l; j++)
            {
                visited[i][j] = false;
                cnt[i][j] = false;
            }
        bfs();
    }
    return 0;
}

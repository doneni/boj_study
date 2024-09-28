#include <iostream>
#include <vector>
#include <queue>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define MAX 100
using namespace std;

int N = 0;
vector<vector<int>> h;
int m_safe = 1;
int safe = 0;
bool visited[MAX][MAX] = { 0, };
int dx[4] = { 0, 1, 0, -1};
int dy[4] = { 1, 0, -1, 0};

void init()
{
    safe = 0;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            visited[i][j] = 0;
    return;
}

void bfs(int x, int y, int r)
{
    queue<pair<int,int>> q;
    q.push({x, y});
    visited[x][y] = true;
    safe++;
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && nx < N && 0 <= ny && ny < N)
                if(h[nx][ny] > r && !visited[nx][ny])
                {
                    q.push({nx, ny});
                    visited[nx][ny] = true;
                }
        }
        q.pop();
    }
    return;
}

int main()
{
    FASTIO;
    cin >> N;
    h.assign(N, vector<int>(N));
    int high = 0, low = 100;
    for(int i = 0; i < N; i++)
    { 
        for(int j = 0; j < N; j++)
        {
            cin >> h[i][j];
            high = max(h[i][j], high); low = min(h[i][j], low);
        }
    }
    for(int r = low; r < high; r++)
    {
        init();
        for(int x = 0; x < N; x++)
            for(int y = 0; y < N; y++)
                if(h[x][y] > r && !visited[x][y])
                    bfs(x, y, r);
        m_safe = max(safe, m_safe);
    }
    cout << m_safe;
    return 0;
}

#include <iostream>
#include <queue>
#include <tuple>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define MAX 5
using namespace std;

int R, C, K;
bool m[MAX][MAX] = { 0, };
bool visited[MAX][MAX] = { 0, };
int dx[4] = { 0, 1, 0, -1};
int dy[4] = { 1, 0, -1, 0};
int ans = 0;

void dfs(int x, int y, int k)
{
    if(x == 0 && y == C-1) {
        if(k == K)
            ans++; 
        return;
    }
    if(k > K)
        return;
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i]; int ny = y + dy[i];
        if((0 > nx || nx >= R || 0 > ny || ny >= C) || visited[nx][ny] || !m[nx][ny])
            continue;
        visited[x][y] = true;
        dfs(nx, ny, k+1);
        visited[x][y] = false;
    }
    return;
}

int main()
{
    FASTIO;
    cin >> R >> C >> K;
    for(int r = 0; r < R; r++)
        for(int c = 0; c < C; c++) {
            char ch; cin >> ch;
            if(ch == '.')
                m[r][c] = true;
        }
    visited[R-1][0] = true;
    dfs(R-1, 0, 1);    
    cout << ans;
    return 0;
}

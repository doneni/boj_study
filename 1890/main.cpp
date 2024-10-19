#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define MAX 100
using namespace std;

int N = 0;
int m[MAX][MAX] = { 0, };
long long dp[MAX][MAX] = { 0, };

void dfs(int x, int y) {
    if(x == N-1 && y == N-1)
        return;
    if(m[x][y] == 0 || dp[x][y] == 0)
        return;
    int nx = x + m[x][y];
    int ny = y + m[x][y];
    if(nx < N)
        dp[nx][y] += dp[x][y];
    if(ny < N)
        dp[x][ny] += dp[x][y];
    return;
}

int main()
{
    FASTIO;
    cin >> N;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> m[i][j];
    dp[0][0] = 1;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            dfs(i, j);
    cout << dp[N-1][N-1];
    return 0;
}

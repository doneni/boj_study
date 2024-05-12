#include <iostream>
#include <queue>
#include <tuple>
#define MAX 101
using namespace std;

int M = 0, N = 0, H = 0;
int b[MAX][MAX][MAX] = { 0, };
bool visited[MAX][MAX][MAX] = { 0, };
queue<tuple<int,int,int>> pq;
int dm[6] = { 0, 0, 1, -1, 0, 0};
int dn[6] = { 0, 0, 0, 0, 1, -1};
int dh[6] = { 1, -1, 0, 0, 0, 0};

bool check(int m_, int n_, int h_, int val)
{
    if(1 <= m_ && m_ <= M && 1 <= n_ && n_ <= N && 1 <= h_ && h_ <= H)
        if(b[m_][n_][h_] == 0 || (val + 1 < b[m_][n_][h_]) )
            return true;
    return false;
}

void visit(int m, int n, int h, int val)
{
    visited[m][n][h] = true;
    b[m][n][h] = 1 + val;
    pq.push({m, n, h});
}

void bfs(int m, int n, int h)
{
    while(!pq.empty()) { pq.pop(); }
    pq.push({m,n,h});
    visited[m][n][h] = true;
    while(!pq.empty())
    {
        m = get<0>(pq.front());
        n = get<1>(pq.front());
        h = get<2>(pq.front());
        for(int i = 0; i < 6; i++)
            if(check(m + dm[i], n + dn[i], h + dh[i], b[m][n][h]))
                visit(m + dm[i], n + dn[i], h + dh[i], b[m][n][h]);
        pq.pop();
    }
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    cin >> M >> N >> H;
    for(int h = 1; h <= H; h++)
        for(int n = 1; n <= N; n++)
            for(int m = 1; m <= M; m++)
                cin >> b[m][n][h];
    for(int h = 1; h <= H; h++)
        for(int n = 1; n <= N; n++)
            for(int m = 1; m <= M; m++)
                if(b[m][n][h] == 1 && !visited[m][n][h])
                    bfs(m, n, h);
    int max = 0;
    for(int h = 1; h <= H; h++)
        for(int n = 1; n <= N; n++)
            for(int m = 1; m <= M; m++)
            {
                if(max < b[m][n][h])
                    max = b[m][n][h];
                if(b[m][n][h] == 0)
                {
                    cout << -1 << '\n';
                    return 0;
                }
            }
    cout << max - 1 << '\n';
    return 0;
}

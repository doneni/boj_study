#include <iostream>
#define MAX 101
#define INF 10e6
using namespace std;

int N = 0;
int dist[MAX][MAX] = { 0, };

void floyd_warshall()
{
    for(int i = 1; i <= N; i++)
        for(int x = 1; x <= N; x++)
            for(int y = 1; y <= N; y++)
            {
                if(x == i || y == i || x == y)
                    continue;
                dist[x][y] = min(dist[x][y], dist[x][i] + dist[i][y]);  
            }
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int M = 0;
    cin >> N >> M;
    for(int i = 1; i <= N; i++)
    {
        fill(dist[i], dist[i] + N + 1, INF);
        dist[i][i] = 0;
    }
    int s, d, w;
    while(M--)
    {
        cin >> s >> d >> w;
        dist[s][d] = (dist[s][d] == 0) ? w : min(dist[s][d], w);
    }
    floyd_warshall();
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
            cout << ((dist[i][j] == INF) ? 0 : dist[i][j]) << ' ';
        cout << endl;
    }
    return 0;
}

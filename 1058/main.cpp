#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define MAX 50
#define INF 1e9
using namespace std;

int N = 0;
bool is_friend[MAX][MAX] = { 0, };
int dist[MAX][MAX] = { 0, };

void floyed_warshall()
{
    for(int cur = 0; cur < N; cur++)
    {
        for(int s = 0; s < N; s++)
            for(int d = 0; d < N; d++)
            {
                if(s == d) {    continue;   }
                dist[s][d] = min(dist[s][d], dist[s][cur]+dist[cur][d]);
            }
    }
    return;
}

int main()
{
    FASTIO;
    cin >> N;
    int cnt_friend[N] = { 0, };
    int ans = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            char c; cin >> c;
            is_friend[i][j] = (c == 'Y' ? true : false);
            dist[i][j] = (c == 'Y' ? 1 : INF);
            if(i == j) dist[i][j] = 0;
        }
    }
    floyed_warshall();
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            if(dist[i][j] <= 2 && i != j) cnt_friend[i]++;
        ans = max(ans, cnt_friend[i]);
    }
    cout << ans;
    return 0;
}

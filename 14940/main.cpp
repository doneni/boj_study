#include <iostream>
#include <deque>
#define MAX 1000
using namespace std;

int n = 0;
int m = 0;
int num_1 = 0;
pair<int, int> v;
int map[MAX][MAX] = { 0, };
bool visited[MAX][MAX] = { 0, };
int ans[MAX][MAX] = { 0, };

void bfs()
{
    deque<pair<int,int>> q;
    q.push_back(v);
    visited[v.first][v.second] = true;
    ans[v.first][v.second] = 0;
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        if(0 < x && map[x - 1][y] && !visited[x - 1][y])
        {
            q.push_back(make_pair(x - 1, y));
            visited[x - 1][y] = true;
            ans[x - 1][y] = (!ans[x - 1][y] || ans[x][y] + 1 < ans[x - 1][y]) ? ans[x][y] + 1 : ans[x - 1][y];
        }
        if(x < n - 1 && map[x + 1][y] && !visited[x + 1][y])
        {
            q.push_back(make_pair(x + 1, y));
            visited[x + 1][y] = true;
            ans[x + 1][y] = (!ans[x + 1][y] || ans[x][y] + 1 < ans[x + 1][y]) ? ans[x][y] + 1 : ans[x + 1][y];
        }
        if(0 < y && map[x][y - 1] && !visited[x][y - 1])
        {
            q.push_back(make_pair(x, y - 1));
            visited[x][y - 1] = true;
            ans[x][y - 1] = (!ans[x][y - 1] || ans[x][y] + 1 < ans[x][y - 1]) ? ans[x][y] + 1 : ans[x][y - 1];
        }
        if(y < m - 1 && map[x][y + 1] && !visited[x][y + 1])
        {
            q.push_back(make_pair(x, y + 1));
            visited[x][y + 1] = true;
            ans[x][y + 1] = (!ans[x][y + 1] || ans[x][y] + 1 < ans[x][y + 1]) ? ans[x][y] + 1 : ans[x][y + 1];
        }
        q.pop_front();
    }

    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cin >> map[i][j];
            if(map[i][j] == 2)
            {
                v.first = i;
                v.second = j;
            }
            else if(map[i][j] == 1)
                num_1++;
        }

    bfs();

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(map[i][j] == 1 && !ans[i][j])
                cout << -1 << " ";
            else
                cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
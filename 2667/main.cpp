#include <iostream>
#include <deque>
#include <algorithm>
#define MAX 25
using namespace std;

int n = 0;
int c = 0;
int map[MAX][MAX] = { 0, };
int visited[MAX][MAX] = { 0, };
int ans[MAX * MAX] = { 0, };

void bfs(pair<int,int> v)
{
    deque<pair<int, int>> q;
    q.push_back(v);
    visited[v.first][v.second] = c;
    ans[c]++;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        if(0 < x && map[x - 1][y] && !visited[x - 1][y])
        {
            q.push_back(make_pair(x - 1, y));
            visited[x - 1][y] = c;
            ans[c]++;
        }
        if(0 < y && map[x][y - 1] && !visited[x][y - 1])
        {
            q.push_back(make_pair(x, y - 1));
            visited[x][y - 1] = c;
            ans[c]++;
        }
        if(x < n - 1 && map[x + 1][y] && !visited[x + 1][y])
        {
            q.push_back(make_pair(x + 1, y));
            visited[x + 1][y] = c;
            ans[c]++;
        }
        if(y < n - 1 && map[x][y + 1] && !visited[x][y + 1])
        {
            q.push_back(make_pair(x, y + 1));
            visited[x][y + 1] = c;
            ans[c]++;
        }
        q.pop_front();
    }
    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    pair<int,int> v;
    string line;
    for(int i = 0; i < n; i++)
    {
        cin >> line;
        for(int j = 0; j < n; j++)
            map[i][j] = (line[j] == '0') ? 0 : 1;
    }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(map[i][j] && !visited[i][j])
            {
                c++;
                bfs(make_pair(i, j));
            }

    sort(ans + 1, ans + 1 + c);
    cout << c << '\n';
    for(int i = 1; i <= c; i++)
        cout << ans[i] << '\n';

    return 0;
}
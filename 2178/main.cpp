#include <iostream>
#include <deque>
#include <cmath>
#define ROW 101
#define COL 101
using namespace std;

int n = 0, m = 0;
bool map[ROW][COL] = { 0, };

void bfs()
{
    deque<pair<int,int>> q;
    bool visited[ROW][COL] = { 0, };
    int p[ROW][COL] = { 0, };
    q.push_back(make_pair(1, 1));
    visited[1][1] = true;
    p[1][1] = 1;
    while(1)
    {
        int x = q.front().first;
        int y = q.front().second;
        if(x == n && y == m)
            break;
        if(n < x || m < y)
            continue;

        if(1 < x && map[x - 1][y] && !visited[x - 1][y])
        {
            q.push_back(make_pair(x - 1, y));
            visited[x - 1][y] = true;
            if(!p[x - 1][y] || p[x][y] + 1 < p[x - 1][y])
                p[x - 1][y] = p[x][y] + 1;
        }
        if(x < n && map[x + 1][y] && !visited[x + 1][y])
        {
            q.push_back(make_pair(x + 1, y));
            visited[x + 1][y] = true;
            if(!p[x + 1][y] || p[x][y] + 1 < p[x + 1][y])
                p[x + 1][y] = p[x][y] + 1;
        }
        if(1 < y && map[x][y - 1] && !visited[x][y - 1])
        {
            q.push_back(make_pair(x, y - 1));
            visited[x][y - 1] = true;
            if(!p[x][y - 1] || p[x][y] + 1 < p[x][y - 1])
                p[x][y - 1] = p[x][y] + 1;
        }
        if(y < m && map[x][y + 1] && !visited[x][y + 1])
        {
            q.push_back(make_pair(x, y + 1));
            visited[x][y + 1] = true;
            if(!p[x][y + 1] || p[x][y] + 1 < p[x][y + 1])
                p[x][y + 1] = p[x][y] + 1;
        }
        q.pop_front();
    }
    cout << p[n][m] << '\n';

    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;

    string in;
    for(int i = 1; i <= n; i++)
    {
        cin >> in;
        for(int j = 1; j <= m; j++)
        {
            map[i][j] = (in[j - 1] == '0') ? false : true;
        }
    }

    bfs();

    return 0;
}
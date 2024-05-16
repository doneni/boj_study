#include <iostream>
#include <queue>
#include <cstring>
#define MAX 100
using namespace std;

int N = 0;
char map[MAX][MAX] = { 0, };
int region[MAX][MAX] = { 0, };
int region_cnt = 1;
int dx[4] = { 0, 1, 0, -1};
int dy[4] = { 1, 0, -1, 0};

bool check(int x, int y)
{
    if(0 <= x && x < N && 0 <= y && y < N)
        if(!region[x][y])
            return true;
    return false;
}

void bfs(int x, int y)
{
    region[x][y] = region_cnt++;
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        for(int i = 0; i < 4; i++)
            if(check(x + dx[i], y + dy[i]) && map[x][y] == map[x + dx[i]][y + dy[i]])
            {
                region[x + dx[i]][y + dy[i]] = region[x][y];
                q.push({x + dx[i], y + dy[i]});
            }
        q.pop();
    }
}

void foo()
{
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(!region[i][j])
                bfs(i, j);
    cout << --region_cnt << ' ';
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    cin >> N;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> map[i][j];
    foo();
    memset(region, 0, sizeof(region));
    region_cnt = 1;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if(map[i][j] == 'G')
                map[i][j] = 'R';
    foo();
    return 0;
}

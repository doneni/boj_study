#include <iostream>
#include <queue>
#define MAX 51
using namespace std;

int w = 0, h = 0;
bool map[MAX][MAX] = { 0, };
int visited[MAX][MAX] = { 0, };
int land = 0;
queue<pair<int,int>> q;

int init()
{
    cin >> h >> w;
    if(!w && !h)
        return 1;
    land = 0;
    for(int i = 1; i <= w; i++)
        for(int j = 1; j <= h; j++)
        {
            cin >> map[i][j];
            visited[i][j] = 0;
        }
    while(!q.empty()) { q.pop(); }
            
    return 0;
}

bool visit(int x, int y)
{
    if(1 <= x && x <= w && 1 <= y && y <= h && !visited[x][y] && map[x][y])
    {
        visited[x][y] = land;
        q.push({x, y});
        return 1;
    }
    return 0;
}

void bfs(int x, int y)
{
    q.push({x,y});
    visited[x][y] = ++land;
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        visit(x, y + 1);
        visit(x + 1, y + 1);
        visit(x + 1, y);
        visit(x + 1, y - 1);
        visit(x, y - 1);
        visit(x - 1, y - 1);
        visit(x - 1, y);
        visit(x - 1, y + 1);
        q.pop();
    }
    return;
}

int main()
{
    while(true)
    {
        if(init())
            break;
        for(int i = 1; i <= w; i++)
            for(int j = 1; j <= h; j++)
                if(map[i][j] && !visited[i][j])
                    bfs(i, j);
        cout << land << '\n';
    }
    return 0;
}
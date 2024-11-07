#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 500
using namespace std;

int n = 0, m = 0;
vector<vector<bool>> paper;
vector<int> paint;
vector<vector<bool>> visited;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

void input()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        vector<bool> p(m);
        vector<bool> v(m, false);
        int in = 0;
        for(int j = 0; j < m; j++) {
            cin >> in;
            p[j] = (in == 1 ? true : false);
        }
        paper.push_back(p);
        visited.push_back(v);
    }
    return;
}

void bfs(int x, int y)
{
    queue<pair<int,int>> q; // <x,y>
    q.push({x,y});
    visited[x][y] = true;
    int p = 1;
    
    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        for(int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx < 0 || n <= nx || ny < 0 || m <= ny 
                || visited[nx][ny] || !paper[nx][ny])
            {   continue;   }
            visited[nx][ny] = true;
            p++;
            q.push({nx,ny});    
        }
        q.pop();
    }
    paint.push_back(p);
    return;
}

void output()
{
    sort(paint.begin(), paint.end());
    cout << paint.size() << '\n' << (paint.empty() ? 0 : paint.back());
    return;
}

int main()
{
    input();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(!visited[i][j] && paper[i][j])
                bfs(i,j);
    output();
    
    return 0;
}

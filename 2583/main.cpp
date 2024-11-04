#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 100
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int M = 0, N = 0;
bool map[MAX][MAX] = { 0, };
vector<int> area;
int dx[4] = { 0, 1, 0, -1};
int dy[4] = { 1, 0, -1, 0};

void paint(int x1, int y1, int x2, int y2) {
    for(int i = x1; i < x2; i++)
        for(int j = y1; j < y2; j++)
            map[i][j] = true;
    return;
}

void bfs(int x, int y) {
    int a = 1;
    map[x][y] = true;
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        for(int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx < 0 || N <= nx || ny < 0 || M <= ny || map[nx][ny])
                continue;
            map[nx][ny] = true;
            a++;
            q.push({nx,ny});
        }
        q.pop();
    }
    area.push_back(a);
    return;
}

int main()
{
    FASTIO;
    int K = 0;
    cin >> M >> N >> K;
    while(K--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        paint(x1, y1, x2, y2);
    }
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            if(!map[i][j])
                bfs(i, j);
    sort(area.begin(), area.end());
    cout << area.size() << '\n';
    for(const int a : area)
        cout << a << ' ';
    return 0;
}

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N = 0;
vector<vector<int>> b;
int dx[2] = { 0, 1 };
int dy[2] = { 1, 0 };

bool bfs(int x, int y) {
    queue<pair<int,int>> q;
    queue<int> d;
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    q.push({x, y});
    d.push(b[x][y]);
    visited[x][y] = true;
    bool found = false;
    
    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        int cd = d.front();
        q.pop(); d.pop();
        for(int i = 0; i < 2; i++) {
            int nx = cx + cd * dx[i];
            int ny = cy + cd * dy[i];
            if(0 <= nx && nx < N && 0 <= ny && ny < N) {
                if(!visited[nx][ny]) {
                    if(b[nx][ny] == -1) {
                        found = true;
                        break;
                    }
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                    d.push(b[nx][ny]);
                }
            }
        }
    }
    return (found ? true : false);
}

int main()
{
    cin >> N;
    b.resize(N, vector<int>(N, 0));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> b[i][j];
        }
    }
    cout << (bfs(0, 0) == true ? "HaruHaru" : "Hing");
    return 0;
}

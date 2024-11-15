#include <iostream>
#include <vector>
using namespace std;

int N = 0, M = 0;
vector<vector<int>> m;
vector<vector<int>> c;
int dx[3] = { 0, 1, 1};
int dy[3] = { 1, 0, 1};

bool check_range(int x, int y)
{
    if(x < 0 || x >= N || y < 0 || y >= M)
        return false;
    return true;
}

int main()
{
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        vector<int> v(M);
        vector<int> w(M);
        for(int j = 0; j < M; j++) {
            cin >> v[j];
        }
        m.push_back(v);
        c.push_back(w);
    }
    c[0][0] = m[0][0];
    
    for(int x = 0; x < N; x++) {
        for(int y = 0; y < M; y++) {
            for(int i = 0; i < 3; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(!check_range(nx, ny))    {   continue;   }
                c[nx][ny] = max(c[nx][ny], c[x][y] + m[nx][ny]);
            }
        }
    }
    
    cout << c[N-1][M-1];
    return 0;
}

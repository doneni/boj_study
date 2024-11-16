#include <iostream>
#include <vector>
#include <set>
using namespace std;

int N = 5;
vector<vector<int>> m;
set<int> s;
int dx[4] = { 0, 1, 0, -1};
int dy[4] = { 1, 0, -1, 0};

void dfs(int depth, int x, int y, int num)
{
    if(depth == 5) {
        s.insert(num);
        return;
    }
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= N || ny < 0 || ny >= N)  {   continue;   }
        dfs(depth+1, nx, ny, 10*num + m[nx][ny]);
    }
}

int main()
{
    for(int i = 0; i < N; i++) {
        vector<int> v(N);
        for(int j = 0; j < N; j++) {
            cin >> v[j];
        }
        m.push_back(v);
    }
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            dfs(0, i, j, m[i][j]);
        }
    }
    cout << s.size();
    
    return 0;
}

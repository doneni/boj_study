#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#define INF (int)1e9
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(fasle);
using namespace std;

int L = 0, R = 0, C = 0;
vector<vector<string>> e;
int dl[6] = { 0, 0, 0, 0, 1, -1 };
int dr[6] = { 0, 1, 0, -1, 0, 0 };
int dc[6] = { 1, 0, -1, 0, 0, 0 };

bool checkRange(int nl, int nr, int nc) {
    if(0 <= nl && nl < L && 0 <= nr && nr < R && 0 <= nc && nc < C) {
        return true;
    }
    return false;
}

int bfs(int sl, int sr, int sc) {
    vector<vector<vector<bool>>> visited(L, vector<vector<bool>>(R, vector<bool>(C, false)));
    queue<tuple<int,int,int,int>> q; // { l, r, c, time }
    visited[sl][sr][sc] = true;
    q.push(make_tuple(sl, sr, sc, 0));

    int eta = INF;

    while(!q.empty()) {
        int cl = get<0>(q.front());
        int cr = get<1>(q.front());
        int cc = get<2>(q.front());
        int ct = get<3>(q.front());
        q.pop();

        for(int i = 0; i < 6; i++) {
            int nl = cl + dl[i];
            int nr = cr + dr[i];
            int nc = cc + dc[i];
            if(checkRange(nl, nr, nc) == false) {   continue;   }
            if(visited[nl][nr][nc] || e[nl][nr][nc] == '#') {   continue;   }
            if(e[nl][nr][nc] == 'E') {
                eta = min(INF, ct+1);
            } else {
                visited[nl][nr][nc] = true;
                q.push(make_tuple(nl, nr, nc, ct+1));
            }
        }
    }
    return (eta == INF ? -1 : eta);
}

int main()
{
    while(true) {
        cin >> L >> R >> C;
        if(L == 0 && R == 0 && C == 0) {    break;  }
        
        int sl = 0, sr = 0, sc = 0;
        bool foundS = false;
        e.clear();
        for(int l = 0; l < L; l++) {
            vector<string> t(R);
            for(int r = 0; r < R; r++) {
                cin >> t[r];
                if(foundS) { continue; }
                for(int c = 0; c < C; c++) {
                    if(t[r][c] == 'S') {
                        foundS = true;
                        sl = l; sr = r; sc = c;
                    }
                }
            }
            e.push_back(t);
        }
        int eta = bfs(sl, sr, sc);
        if(eta > 0) {
            cout << "Escaped in " << eta << " minute(s).\n";
        } else {
            cout << "Trapped!\n"; 
        }
    }
    return 0;
}

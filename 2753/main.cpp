 #include <iostream>
 #include <vector>
 #include <queue>
using namespace std;

int N = 0;
int M = 0;
int ice_cnt = 0;
vector<vector<int> > ice;
vector<vector<bool> > sea;
vector<vector<bool> > visited;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

bool CheckRange(int x, int y) {
    if(0 <= x && x < N && 0 <= y && y < M) {
        return true;
    }
    return false;
}

int Visit(int x, int y) {
    int sea_around = 0;
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (CheckRange(nx, ny) && sea[nx][ny]) {
            sea_around++;
        }
    }
    ice[x][y] -= sea_around;
    return sea_around;
}

void UpdateSea() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(ice[i][j] <= 0 && sea[i][j] == false) {
                sea[i][j] = true;
                ice[i][j] = 0;
                ice_cnt--;
            }
        }
    }
    return;
}

bool BFS(int x, int y) {
    queue<int> qx;
    queue<int> qy;
    int visited_cnt = 1;
    qx.push(x);
    qy.push(y);
    visited[x][y] = true;
    
    while(!qx.empty()) {
        int cx = qx.front();
        int cy = qy.front();
        qx.pop();
        qy.pop();
        
        Visit(cx, cy);
        
        for(int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(CheckRange(nx, ny) && sea[nx][ny] == false && visited[nx][ny] == false) {
                qx.push(nx);
                qy.push(ny);
                visited_cnt++;
                visited[nx][ny] = true;
            }
        }
    }
    
    return (visited_cnt == ice_cnt ? true : false);
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        vector<int> t(M);
        vector<bool> s(M);
        for(int j = 0; j < M; j++) {
            cin >> t[j];
            if(t[j] == 0) {
                s[j] = true;
            } else {
                ice_cnt++;
            }
        }
        ice.push_back(t);
        sea.push_back(s);
    }
    
    for(int y = 1; ; y++) {
        visited.clear();
        visited.resize(N, vector<bool>(M, false));
        bool separated = false;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(visited[i][j] == false && sea[i][j] == false) {
                    if(BFS(i, j) == false) {
                        separated = true;
                        break;
                    }
                }
            }
            if(separated == true) {
                break;
            }
        }
        UpdateSea();
        if(separated == true) {
            cout << y-1 << '\n';
            break;
        }
        if(ice_cnt == 0) {
            cout << 0 << '\n';
            break;
        }
    }

    return 0;
}
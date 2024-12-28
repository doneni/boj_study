#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int F = 0, S = 0, G = 0, U = 0, D = 0;
vector<int> dist;
vector<bool> visited;
int dx[2] = { 0, };
bool arrived = false;

void bfs() {
    queue<int> q;
    q.push(S);
    visited[S] = true;
    
    while(!q.empty()) {
        int x = q.front();
        
        if(x == G) {
            arrived = true;
            break;
        }
        
        for(int i = 0; i < 2; i++) {
            int nx = x + dx[i];
            
            if(0 < nx && nx <= F) {
                if(!visited[nx]) {
                    visited[nx] = true;
                    dist[nx] = dist[x] + 1;
                    q.push(nx);
                }
            }
        }
        q.pop();
    }
}

int main()
{
	cin >> F >> S >> G >> U >> D;
	dist.assign(F+1, 0);
	visited.assign(F+1, 0);
	dx[0] = U; dx[1] = -D;
	
	bfs();

    cout << (arrived ? to_string(dist[G]) : "use the stairs");

	return 0;
}
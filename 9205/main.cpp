#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

using namespace std;

int n = 0;
int beer = 20;
vector<pair<int,int> > p;
vector<vector<int> > adj;
vector<bool> visited;

const int MAX_BEER = 20;
const int MAX_DIST_WITHOUT_BEER = 50;
const int MAX_DIST_WITH_BEER = 20 * 50;

void Init()
{
    beer = MAX_BEER;
    p.clear();
	p.resize(n+2);
	adj.clear();
	adj.resize(n+2);
	visited.clear();
	visited.resize(n+2, false);
    return;
}

int CalcDist(pair<int,int> &p1, pair<int,int> &p2)
{
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

void FindNeighbor()
{
    for(int i = 0; i < n+1; i++) {
        for(int j = i; j < n+2; j++) {
            if(i != j && CalcDist(p[i], p[j]) <= MAX_DIST_WITH_BEER) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    return;
}

void BFS()
{
    bool found = false;
    queue<int> q;
    q.push(0);
    visited[0] = true;
    
    while(!q.empty()) {
        int cidx = q.front();
        
        if(cidx == n+1) {
            found = true;
            break;
        }
        
        q.pop();
        for(int nidx : adj[cidx]) {
            if(visited[nidx] == false) {
                q.push(nidx);
                visited[nidx] = true;
            }
        }
    }
    cout << (found ? "happy" : "sad") << '\n';
    return;
}

int main()
{
	FASTIO;
	int t = 0; cin >> t;
	while(t--) {
		cin >> n;
		Init();
		for(int i = 0; i < n+2; i++) {
			cin >> p[i].first >> p[i].second;
		}
		FindNeighbor();
		BFS();
	}
	return 0;
}

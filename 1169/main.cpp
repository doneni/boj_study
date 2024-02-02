#include <iostream>
#include <vector>
#include <deque>
#define MAX 100001
using namespace std;

int N = 0;
vector<pair<int, int>> adj[MAX];
int p[MAX] = { 0, };

int bfs(int a)
{
    int x = 0;
    deque<int> q;
    bool visited[MAX] = { 0, };
    q.push_back(a);
    visited[a] = true;
    for(auto& e : p)
        e = 0;
    p[a] = 0;
    while(!q.empty())
    {
        x = q.front();
        for(int i = 0; i < adj[x].size(); i++)
        {
            if(!visited[adj[x][i].first])
            {
                q.push_back(adj[x][i].first);
                visited[adj[x][i].first] = true;
                p[adj[x][i].first] = p[x] + adj[x][i].second;
            }
        }
        q.pop_front();
    }
    int max = p[1], who = 1;
    for(int i = 2; i <= N; i++)
        if(max < p[i])
        {
            max = p[i];
            who = i;
        }
    return who;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    int v = 0;
    int s = 0, d = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> v;
        while(1)
        {
            cin >> s;
            if(s == -1) 
                break;
            cin >> d;
            adj[v].push_back({s, d});
        }
    }

    int end = bfs(1);
    int begin = bfs(end);
    cout << p[begin] << endl;

    return 0;
}
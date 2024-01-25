#include <iostream>
#include <deque>
#define MAX 1001
using namespace std;

int N = 0, M = 0, V = 0;
int adj[MAX][MAX] = { 0, };
int visited[MAX] = { 0, };

void init()
{
    for(int i = 1; i <= N; i++)
        visited[i] = 0;
}

void dfs()
{
    deque<int> stck;
    stck.push_back(V);
    visited[V] = 1;
    cout << V;
    while(1)
    {
        if(stck.empty())
        {
            cout << '\n';
            break;
        }

        int check = 0;
        for(int i = 1; i <= N; i++)
        {
            if(adj[stck.back()][i] && !visited[i])
            {
                stck.push_back(i);
                visited[i] = 1;
                cout << " " << i;
                check = 1;
                break;
            }
        }
        if(!check)
            stck.pop_back();
    }
    return;
}

void bfs()
{
    deque<int> que;
    que.push_back(V);
    visited[V] = 1;
    cout << V;
    while(1)
    {
        if(que.empty())
        {
            cout << '\n';
            break;
        }
        int check = 0;
        for(int i = 1; i <= N; i++)
        {
            if(adj[que.front()][i] && !visited[i])
            {
                que.push_back(i);
                visited[i] = 1;
                cout << " " << i;
                check = 1;
            }
        }

        if(!check)
            que.pop_front();
    }
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M >> V;

    int x = 0, y = 0;
    for(int i = 0; i < M; i++)
    {
        cin >> x >> y;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }

    dfs();
    init();
    bfs();

    return 0;
}
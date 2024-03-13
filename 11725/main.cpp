#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;

int N = 0;
vector<vector<int>> adj(MAX);
vector<int> parent(MAX);
bool visited[MAX] = { 0, };

void input()
{
    cin >> N;
    for(int i = 0; i < N - 1; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void visitNode(int n)
{
    visited[n] = true;
    for(const auto& e : adj[n])
    {
        if(!visited[e])
        {
            parent[e] = n;
            visitNode(e);
        }
    }

    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    input();

    visitNode(1);
    for(int i = 2; i <= N; i++)
        cout << parent[i] << '\n';

    return 0;
}
#include <iostream>
#include <vector>
#include <cstring>
#define MAX 10001
using namespace std;

int maxNode = 0;
int maxLen = 0;
bool visited[MAX] = { 0, };
vector<vector<pair<int,int>>> v(MAX);

void dfs(int now, int len)
{
    visited[now] = true;

    if(maxLen < len)
    {
        maxLen = len;
        maxNode = now;
    }

    for(int i = 0; i < v[now].size(); i++)
    {
        if(!visited[v[now][i].first])
            dfs(v[now][i].first, len + v[now][i].second);
    }

    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;
    int p = 0, c = 0, w = 0;
    for(int i = 0; i < N - 1; i++)
    {
        cin >> p >> c >> w;
        v[p].push_back({c, w});
        v[c].push_back({p, w});
    }

    dfs(1, 0);
    memset(visited, false, sizeof(visited));
    dfs(maxNode, 0);
    cout << maxLen << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <queue>
#define MAX 601
using namespace std;

int N = 0, M = 0;
char c[MAX][MAX] = { 0, };
pair<int,int> I;
int pp_met = 0;

void bfs(void)
{
    bool visited[MAX][MAX] = { 0, };
    queue<pair<int,int>> q;
    q.push(I);
    visited[I.first][I.second] = true;
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        
        if (c[x][y] == 'P')
            pp_met++;
    
        if(x > 1 && !visited[x - 1][y] && c[x - 1][y] != 'X')
        {
            visited[x - 1][y] = true;
            q.push({x - 1, y});
        }
        if(x < N && !visited[x + 1][y] && c[x + 1][y] != 'X')
        {
            visited[x + 1][y] = true;
            q.push({x + 1, y});
        }
        if(y > 1 && !visited[x][y - 1] && c[x][y - 1] != 'X')
        {
            visited[x][y - 1] = true;
            q.push({x, y - 1});
        }
        if(y < M && !visited[x][y + 1] && c[x][y + 1] != 'X')
        {
            visited[x][y + 1] = true;
            q.push({x, y + 1});
        }
        q.pop();
    }
    return;
}

int main()
{
    cin >> N >> M;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            cin >> c[i][j];
            if(c[i][j] == 'I')
            {
                I.first = i;
                I.second = j;
            }
        }
    }

    bfs();
    cout << (pp_met ? to_string(pp_met) : "TT") << '\n';
    return 0;
}


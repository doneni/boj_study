#include <iostream>
#include <deque>
#define MAX 1000
using namespace std;

int row = 0;
int col = 0;
int tomato[MAX][MAX] = { 0, };
int dist[MAX][MAX] = { 0, };
bool visited[MAX][MAX] = { 0, };

deque<pair<int,int>> q;

void bfs()
{
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        if(0 < x && tomato[x - 1][y] == 0 && !visited[x - 1][y])
        {
            q.push_back(make_pair(x - 1, y));
            visited[x - 1][y] = 1;
            dist[x - 1][y] = (!dist[x - 1][y] || dist[x][y] + 1 < dist[x - 1][y]) ? dist[x][y] + 1 : dist[x - 1][y];
        }
        if(x < row - 1 && tomato[x + 1][y] == 0 && !visited[x + 1][y])
        {
            q.push_back(make_pair(x + 1, y));
            visited[x + 1][y] = 1;
            dist[x + 1][y] = (!dist[x + 1][y] || dist[x][y] + 1 < dist[x + 1][y]) ? dist[x][y] + 1 : dist[x + 1][y];
        }
        if(0 < y && tomato[x][y - 1] == 0 && !visited[x][y - 1])
        {            
            q.push_back(make_pair(x, y - 1));
            visited[x][y - 1] = 1;
            dist[x][y - 1] = (!dist[x][y - 1] || dist[x][y] + 1 < dist[x][y - 1]) ? dist[x][y] + 1 : dist[x][y - 1];
        }
        if(y < col - 1 && tomato[x][y + 1] == 0 && !visited[x][y + 1])
        {
            q.push_back(make_pair(x, y + 1));
            visited[x][y + 1] = 1;
            dist[x][y + 1] = (!dist[x][y + 1] || dist[x][y + 1] + 1 < dist[x][y + 1]) ? dist[x][y] + 1 : dist[x][y + 1];
        }
        q.pop_front();
    }
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> col >> row;
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> tomato[i][j];

    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
                if(tomato[i][j] == 1)
                {
                    q.push_back(make_pair(i, j));
                    visited[i][j] = true;
                    dist[i][j] = 0;
                }
    
    bfs();

    int max = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(max < dist[i][j])
                max = dist[i][j];
            if(tomato[i][j] == 0 && dist[i][j] == 0)
            {
                cout << -1 << '\n';
                return 0;
            }
        }
    }
    cout << max << '\n';

    return 0;
}
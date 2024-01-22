#include <iostream>
#include <vector>
#include <algorithm>
#define M 50
#define N 50
using namespace std;

int farm[M][N] = { 0, };
int visited[M][N] = { 0, };
int m = 0, n = 0;

void visit(int x, int y)
{
    visited[x][y] = 1;

    if(0 < x && farm[x - 1][y] == 1 && !visited[x - 1][y])
        visit(x - 1, y);
    if(x < m - 1 && farm[x + 1][y] == 1 && !visited[x + 1][y])
        visit(x + 1, y);
    if(y < n - 1 && farm[x][y + 1] == 1 && !visited[x][y + 1])
        visit(x, y + 1);
    if(0 < y && farm[x][y - 1] == 1 && !visited[x][y - 1])
        visit(x, y - 1);    
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t = 0;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        m = 0;
        n = 0;
        int k = 0;
        int x = 0, y = 0;
        cin >> m >> n >> k;
        for(int j = 0; j < m; j++)
            for(int k = 0; k < n; k++)
            {
                visited[j][k] = 0;
                farm[j][k] = 0;
            }
        for(int j = 0; j < k; j++)
        {
            cin >> x >> y;
            farm[x][y] = 1;
        }

        int ans = 0;
        for(int j = 0; j < m; j++)
            for(int k = 0; k < n; k++)
                if(farm[j][k] == 1 && visited[j][k] == 0)
                {
                    visit(j, k);
                    ans++;
                }
        cout << ans << '\n';
    }
    return 0;
}
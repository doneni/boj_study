#include <iostream>
#include <cmath>
#define MAX 500
using namespace std;

int N = 0;
int t[MAX][MAX] = { 0, };
int m[MAX][MAX] = { 0, };

void dfs(int depth, int idx)
{
    if(depth == N - 1)
    {
        m[depth][idx] = t[depth][idx];
        return;
    }
    if(!m[depth + 1][idx])
        dfs(depth + 1, idx);
    if(!m[depth + 1][idx + 1])
        dfs(depth + 1, idx + 1);
    m[depth][idx] = t[depth][idx] + max(m[depth + 1][idx], m[depth + 1][idx + 1]);
    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cin >> t[i][j];
        }
    }
    
    dfs(0, 0);
    cout << m[0][0] << '\n';

    return 0;
}
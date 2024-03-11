#include <iostream>
#define MAX 501
using namespace std;

int t[MAX][MAX] = { 0, };

void dfs(int depth, int sum)
{
    
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;
    for(int i = 1; i <= N; i++)
        for(int j = 0; j < i; j++)
            cin >> t[i][j];

    dfs(0, 0);

    return 0;
}
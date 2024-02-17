#include <iostream>
#include <vector>
#define MAX 30
using namespace std;

long long memo[MAX][MAX] = { 0, };

long long combination(int n, int r)
{
    if(n == r || r == 0)
        return 1;
    if(memo[n][r])
        return memo[n][r];
    memo[n][r] = combination(n - 1, r) + combination(n - 1, r - 1);
    return memo[n][r];
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T = 0;
    int N = 0, M = 0;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> N >> M;
        if(N > M - N)
            N = M - N;
        cout << combination(M, N) << '\n';
    }
    return 0;
}
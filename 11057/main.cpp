#include <iostream>
#define MAX 1001
using namespace std;

int N = 0;
int dp[MAX][10] = { 0, };

void init() {
    for(int i = 0; i < 10; i++)
        dp[1][i] = 1;
    for(int i = 2; i <= N; i++)
        dp[i][0] = 1;
}

int main()
{
    cin >> N;
    init();
    int mod = 10007;
    for(int i = 2; i <= N; i++)
        for(int j = 1; j < 10; j++)
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
    
    int ans = 0;
    for(int i = 0; i < 10; i++) {
        ans += dp[N][i];
        ans %= mod;
    }
    cout << ans;
    return 0;
}

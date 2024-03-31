#include <iostream>
#define MAX 1001
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    int dp[MAX] = { 0, };
    dp[1] = 1; dp[2] = 3;
    for(int i = 3; i <= n; i++)
        dp[i] = (dp[i - 1] + 2 * dp[i - 2] % 10007) % 10007;
    cout << dp[n] << '\n';

    return 0;
}
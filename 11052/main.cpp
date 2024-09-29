#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    int N; cin >> N;
    int a[N+1] = { 0, };
    int dp[N+1] = { 0, };
    for(int i = 1; i <= N; i++)
        cin >> a[i];
    for(int i = 1; i <= N; i++)
    {
        dp[i] = a[i];
        for(int n = 1; n <= i-n; n++)
            dp[i] = max(dp[i], dp[i-n] + dp[n]);
    }
    cout << dp[N];
    return 0;
}

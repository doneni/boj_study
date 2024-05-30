#include <iostream>
#define MAX 10000
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int wine[MAX] = { 0, };
    int dp[MAX] = { 0, };
    int N = 0; cin >> N;
    for(int i = 0; i < N; i++)
        cin >> wine[i];
    dp[0] = wine[0];
    dp[1] = wine[0] + wine[1];
    dp[2] = max(dp[1], max(wine[0] + wine[2], wine[1] + wine[2]));
    for(int i = 3; i < N; i++)
        dp[i] = max(dp[i - 1], max(dp[i - 3] + wine[i - 1] + wine[i], dp[i - 2] + wine[i]));
    cout << dp[N-1] << endl;
    return 0;
}


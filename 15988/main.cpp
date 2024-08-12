#include <iostream>
#define MAX 1000001
using namespace std;

int dp[MAX] = { 0, };

void init()
{
    int m = 1000000009;
    dp[1] = 1; dp[2] = 2; dp[3] = 4;
    for(int i = 4; i < MAX; i++)
        dp[i] = ((dp[i - 1] + dp[i - 2]) % m + dp[i - 3]) % m;
}

int main()
{
    init();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << dp[n] << '\n';
    }
    return 0;
}

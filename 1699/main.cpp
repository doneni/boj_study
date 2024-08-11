#include <iostream>
#define MAX 100001
using namespace std;

int dp[MAX] = { 0, };

void init()
{
    for(int i = 1; i < MAX; i++)
        dp[i] = i;
    for(int i = 1; i < MAX; i++)
        for(int j = 1; j * j <= i; j++)
            dp[i] = min(dp[i], dp[i - j*j] + 1);
}

int main()
{
    init(); 
    int n; cin >> n;
    cout << dp[n];
    return 0;
}

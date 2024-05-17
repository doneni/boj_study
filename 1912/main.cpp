#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N = 0; cin >> N;
    vector<int> v(N);
    vector<int> dp(N);
    cin >> v[0];
    dp[0] = v[0];
    int ans = dp[0];
    for(int i = 1; i < N; i++) {
        cin >> v[i];
        dp[i] = max(v[i], dp[i - 1] + v[i]);
        if(ans < dp[i])
            ans = dp[i];
    }
    cout << ans << endl;
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N; cin >> N;
    vector<pair<int,int>> v(N + 1);
    vector<int> dp(N + 2);
    for(int i = 1; i <= N; i++)
        cin >> v[i].first >> v[i].second;
    for(int today = N; today > 0; today--)
    {
        int next_day = today + v[today].first;
        if(next_day > N + 1)
            dp[today] = dp[today + 1];
        else
            dp[today] = max(dp[today + 1], v[today].second + dp[next_day]);
    }
    cout << dp[1];
    return 0;
}

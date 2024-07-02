#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int T; cin >> T;
    for(int t = 1; t <= T; t++)
    {
        int N = 0; cin >> N;
        int v[N + 1] = { 0, };
        int cnt = 0;
        for(int i = 1; i <= N; i++)
        {
            cin >> v[i];
            if(v[i - 1] >= v[i])
                cnt++;
        }
        cout << "Case #" << t << ": " << cnt << '\n';
    }
    return 0;
}

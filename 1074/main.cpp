#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0, r = 0, c = 0;
    cin >> N >> r >> c;

    int w = 0;
    int ans = 0;
    while(N > 1)
    {
        w = pow(2, N);

        ans = (w / 2 <= c) ? (ans + w * w / 4) : ans;
        ans = (w / 2 <= r) ? (ans + w * w / 2) : ans;

        r = (w / 2 <= r) ? r - w / 2 : r;
        c = (w / 2 <= c) ? c - w / 2 : c;

        N--;
    }

    ans = (r == 1) ? ans + 2 : ans;
    ans = (c == 1) ? ans + 1 : ans;

    cout << ans << '\n';

    return 0;
}
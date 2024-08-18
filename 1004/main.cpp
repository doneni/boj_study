#include <iostream>
#include <cmath>
using namespace std;

double p2p_dist(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int T; cin >> T;
    int x1, y1, x2, y2, n, cx, cy, r;
    while(T--)
    {
        int ans = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        while(n--)
        {
            cin >> cx >> cy >> r;
            double d1 = p2p_dist(x1, y1, cx, cy);
            double d2 = p2p_dist(x2, y2, cx, cy);
            if((d1 < r && r < d2) || (d2 < r && r < d1))
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}

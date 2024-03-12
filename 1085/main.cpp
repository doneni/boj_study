#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    
    int x = 0, y = 0, w = 0, h = 0;
    cin >> x >> y >> w >> h;
    int ans = min(min(h - y, y), min(x, w - x));
    cout << ans << '\n';
    
    return 0;
}

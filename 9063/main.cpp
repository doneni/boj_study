#include <iostream>
#define INF 10000
using namespace std;

int main()
{
    int N; cin >> N;
    int min_x = INF, max_x = -INF;
    int min_y = INF, max_y = -INF;
    while(N--)
    {
        int x, y; cin >> x >> y;
        min_x = min(min_x, x);  max_x = max(max_x, x);
        min_y = min(min_y, y);  max_y = max(max_y, y);
    }
    cout << (max_x - min_x) * (max_y - min_y) << '\n';
    return 0;
}

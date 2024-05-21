#include <iostream>
#include <cmath>
#define INF 1000
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N = 0, M = 0; cin >> N >> M;
    int min6 = INF, min1 = INF;
    int c6 = 0, c1 = 0;
    while(M--)
    {
        cin >> c6 >> c1;
        min6 = min(min6, min(c6, c1 * 6));
        min1 = min(min1, c1);
    }
    cout << min(min(int(ceil(1.0 * N/6)* min6), min1 * N), N/6 * min6 + min1 * (N - N/6 * 6)) << endl;
    return 0;
}

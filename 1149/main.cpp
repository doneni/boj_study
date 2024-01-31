#include <iostream>
#define MAX 1001
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;

    int h[MAX][3] = { 0, };

    int r = 0, g = 0, b = 0;
    for(int i = 1; i <= N; i++)
    {
        cin >> r >> g >> b;
        h[i][0] = min(h[i - 1][1], h[i - 1][2]) + r;
        h[i][1] = min(h[i - 1][0], h[i - 1][2]) + g;
        h[i][2] = min(h[i - 1][0], h[i - 1][1]) + b;
    }

    cout << min(min(h[N][0], h[N][1]), h[N][2]) << '\n';

    return 0;
}
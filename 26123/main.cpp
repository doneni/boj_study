#include <iostream>
#define MAX 300000
using namespace std;

int main()
{
    int N, D; cin >> N >> D;
    int b[MAX + 1] = { 0, };
    int m = 0;
    long long ans = 0;
    while(N--)
    {
        int x; cin >> x;
        b[x]++;
        ans += x;
        m = max(m, x);
    }
    int t = m - D;
    if(t > 0)
    {
        ans = 0;
        for(int i = m; i > t; i--)
            ans += b[i] * (i - t);
    }
    cout << ans << '\n';
    return 0;
}

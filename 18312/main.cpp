#include <iostream>
using namespace std;

int main()
{
    int N, K; cin >> N >> K;
    int H = 0, M = 0, S = 0;
    int ans = 0;
    for(int h = 0; h <= N; h++)
    {
        if(h % 10 == K || h / 10 == K)
        {
            ans += 60 * 60;
            continue;
        }
        for(int m = 0; m < 60; m++)
        {
            if(m % 10 == K || m / 10 == K)
            {
                ans += 60;
                continue;
            }
            for(int s = 0; s < 60; s++)
            {
                if(s % 10 == K || s / 10 == K)
                    ans++;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}

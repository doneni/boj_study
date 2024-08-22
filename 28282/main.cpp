#include <iostream>
using namespace std;

int main()
{
    int x, k; cin >> x >> k;
    int l[k + 1] = { 0, };
    int r[k + 1] = { 0, };
    long long ans = 0;
    for(int i = 0; i < x; i++)
    {
        int in; cin >> in;
        l[in]++;
    }
    for(int i = 0; i < x; i++)
    {
        int in; cin >> in;
        r[in]++;
    }
    for(int i_l = 1; i_l <= k; i_l++)
    {
        for(int i_r = 1; i_r <= k; i_r++)
        {
            if(i_l == i_r)
                continue;
            ans += (long long)l[i_l] * (long long)r[i_r];
        }
    }
    cout << ans << '\n';
    return 0;
}

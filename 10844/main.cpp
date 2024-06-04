#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    long long mod = 1000000000;
    vector<long long[10]> a(N + 1);
    for(int i = 1; i <= 9; i++)
        a[1][i] = 1;
    for(int n = 2; n <= N; n++)
    {
        a[n][0] = a[n-1][1];
        a[n][9] = a[n-1][8];
        for(int i = 1; i < 9; i++)
            a[n][i] = (a[n-1][i-1] + a[n-1][i+1]) % mod;
    }
    long long ans = 0;
    for(int i = 0; i < 10; i++)
        ans = (ans + a[N][i]) % mod;
    cout << ans << endl;
    return 0;
}


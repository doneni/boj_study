#include <iostream>
#include <cmath>
#define MAX 301
using namespace std;

int s[MAX] = { 0, };
int m[MAX] = { 0, };
int n = 0;

int dp()
{
    m[1] = s[1];
    m[2] = s[1] + s[2];
    m[3] = s[3] + max(s[1], s[2]);
    for(int i = 4; i <= n; i++)
        m[i] = s[i] + max(m[i - 2], m[i - 3] + s[i - 1]);

    return m[n];
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> s[i];

    cout << dp() << '\n';

    return 0;
}
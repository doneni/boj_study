#include <iostream>
#include <cmath>
#define MAX 100001
using namespace std;

int N = 0;
int s[MAX][2] = { 0, };
int m[MAX][2] = { 0, };

void init()
{
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cin >> s[i][0];
        m[i][0] = 0;
    }
    for(int i = 1; i <= N; i++)
    {
        cin >> s[i][1];
        m[i][1] = 0;
    }
}

int dp()
{
    m[1][0] = s[1][0]; m[1][1] = s[1][1];
    for(int i = 2; i <= N; i++)
    {
        m[i][0] = max(m[i - 1][1], m[i - 2][1]) + s[i][0];
        m[i][1] = max(m[i - 1][0], m[i - 2][0]) + s[i][1];
    }
    return max(m[N][0], m[N][1]);
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    int T = 0;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        init();
        cout << dp() << '\n';
    }
    return 0;
}
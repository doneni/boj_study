#include <iostream>
#define MAX 100001
using namespace std;

int m[MAX][3] = { 0, };

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N = 0; cin >> N;
    int mod = 9901;
    m[1][0] = 1;
    m[1][1] = 1;
    m[1][2] = 1;
    for(int i = 2; i <= N; i++)
    {
        m[i][0] = (m[i - 1][1] + m[i - 1][2]) % mod;
        m[i][1] = (m[i - 1][0] + m[i - 1][2]) % mod;
        m[i][2] = (m[i - 1][0] + m[i - 1][1] + m[i - 1][2]) % mod;
    }
    cout << (m[N][0] + m[N][1] + m[N][2]) % mod << '\n';
    
    return 0;
}

#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    FASTIO;
    int N; cin >> N;
    int m = 1e9, M = 0; 
    while(N--)
    {
        int x; cin >> x;
        m = min(x, m);
        M = max(x, M);
    }
    cout << m * M;
    return 0;
}

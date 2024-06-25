#include <iostream>
#define MAX 100001
#define MINF -1e9
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N, K; cin >> N >> K;
    int a[MAX] = { 0, };
    int res = MINF, window = 0;
    for(int i = 1; i <= N; i++)
    {
        cin >> a[i];
        window += a[i];
        if(i > K)
            window -= a[i - K];
        if(i >= K)
            res = max(res, window);
    }
    cout << res << endl;
    return 0;
}

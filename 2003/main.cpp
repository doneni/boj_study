#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int N, M; cin >> N >> M;
    int a[N + 1] = { 0, };
    int cnt = 0;
    for(int i = 1; i <= N; i++) {
        cin >> a[i];
        a[i] += a[i-1];
    }
    for(int h = 1; h <= N; h++)
        for(int t = h; t <= N; t++)
            if(a[t] - a[h - 1] == M)
                cnt++;
    cout << cnt;
    return 0;
}

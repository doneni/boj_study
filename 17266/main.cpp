#include <iostream>
using namespace std;

int main()
{
    int N, M; cin >> N >> M;
    int h = 0;
    int s = 0;
    for(int i = 0; i < M; i++) {
        int n; cin >> n;
        if(i == 0) {
            h = max(h, n);
        }
        if(i == M-1) {
            h = max(h, N-n);
        }
        if(0 < i) {
            h = max(h, (n-s+1)/2);
        }
        s = n;
    }
    cout << h;
    return 0;
}
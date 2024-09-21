#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int t = 8 * (N-1);
    while(N--)
    {
        int x; cin >> x;
        t += x;
    }
    cout << t / 24 << ' ' << t % 24;
    return 0;
}

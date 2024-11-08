#include <iostream>
#include <cmath>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

void hanoi(int n, int from, int to)
{
    if (n == 1) {
        cout << from << ' ' << to << '\n';
        return;
    }
    int via = 6 - from - to;
    hanoi(n-1, from, via);
    cout << from << ' ' << to << '\n';
    hanoi(n-1, via, to);
    return;
}

int main()
{
    FASTIO;
    int N; cin >> N;
    cout << (int)pow(2, N) - 1 << '\n';
    hanoi(N, 1, 3);
    return 0;
}

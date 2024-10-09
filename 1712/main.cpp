#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    FASTIO;
    long long A, B, C; cin >> A >> B >> C;
    cout << (B >= C ? -1 : A / (C-B) + 1);
    return 0;
}

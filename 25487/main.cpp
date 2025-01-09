#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    FASTIO;
    int T; cin >> T;
    while(T--) {
        int a, b, c; cin >> a >> b >> c;
        cout << min(a, min(b,c)) << '\n';
    }
    return 0;
}

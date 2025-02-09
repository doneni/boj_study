#include <iostream>
using namespace std;

int lcm(int n, int m) {
    int a = n, b = m;
    while(a != b) {
        if(a < b) {
            a += n;
        } else {
            b += m;
        }
    }
    return a;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        int n, m; cin >> n >> m;
        cout << lcm(n, m) << '\n';
    }
    return 0;
}

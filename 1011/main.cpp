#include <iostream>
using namespace std;

int main()
{
    int T = 0; cin >> T;
    while(T--) {
        int x, y; cin >> x >> y;
        x = y - x;
        long long n = 1;
        while(true) {
            if(x <= n * (n+1))
                break;
            n++;
        }
        cout << (x <= n*n ? 2*n-1 : 2*n) << '\n';
    }
    return 0;
}

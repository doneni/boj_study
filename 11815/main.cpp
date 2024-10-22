#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N; cin >> N;
    while(N--) {
        long long x; cin >> x;
        long long s = (long long)sqrt(x);
        if(s * s == x)
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    }
    return 0;
}

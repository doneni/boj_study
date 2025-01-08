#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    int f1 = 0;
    while(N--) {
        int x, y; cin >> x >> y;
        f1 += x*y;
    }
    cout << f1;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int h, w, n, m; cin >> h >> w >> n >> m;
    cout << (long long)ceil(1.0 * h / (n+1)) * (long long)ceil(1.0 * w / (m+1));
    return 0;
}

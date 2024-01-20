#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    long long a = 0, b = 0, v = 0;
    cin >> a >> b >> v;

    long double ans = ceil(1.0 * (v - a) / (a - b)) + 1;

    cout << (long long)ans << endl;

    return 0;
}
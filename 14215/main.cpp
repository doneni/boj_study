#include <iostream>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    int M = max(a, max(b, c));
    cout << (M < a + b + c - M ? a + b + c : 2 * (a + b + c - M) - 1) << '\n';
    return 0;
}

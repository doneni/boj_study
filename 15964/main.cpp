#include <iostream>
#include <cmath>
using namespace std;

int foo(int n, int m, int p, int q, int r)
{
    return fmod(pow(n, 2) + pow(m, 2) + pow(p, 2) + pow(q, 2) + pow(r, 2), 10);
}

int main(void)
{
    int n = 0, m = 0, p = 0, q = 0, r = 0;
    cin >> n >> m >> p >> q >> r;
    cout << foo(n, m, p, q, r) << endl;
    return 0;
}
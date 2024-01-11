#include <iostream>
#include <cmath>
using namespace std;

int foo(int h, int w, int n)
{
    if (n % h == 0)
        return h * 100 + (n / h);
    else
        return (n % h) * 100 + (n / h);
}

int main(void)
{
    int t = 0, h = 0, w = 0, n = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;
        cout << foo(h, w, n) << endl;
    }
    return 0;
}
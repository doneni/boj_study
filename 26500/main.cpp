#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    double x, y;
    cout << fixed; cout.precision(1);
    while(n--)
    {
        cin >> x >> y;
        cout << abs(x - y) << '\n';
    }
    return 0;
}

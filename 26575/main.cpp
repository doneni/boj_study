#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        double d, f, p; cin >> d >> f >> p;
        cout << fixed; cout.precision(2);
        cout << '$' << d * f * p << '\n';
    }
    return 0;
}

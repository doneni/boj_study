#include <iostream>
using namespace std;

int main()
{
    int p, c; cin >> p >> c;
    cout << 50 * p - 10 * c + 500 * (p > c);
    return 0;
}

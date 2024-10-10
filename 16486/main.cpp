#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
#define PI 3.141592
using namespace std;

int main()
{
    FASTIO;
    int d1, d2; cin >> d1 >> d2;
    double a = d1 * 2 + d2 * 2 * PI;
    cout << fixed; cout.precision(6);
    cout << a;
    return 0;
}

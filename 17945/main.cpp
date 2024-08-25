#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int x1 = -a - sqrt(a * a - b);
    int x2 = -a + sqrt(a * a - b);
    if(x1 == x2)
        cout << x1;
    else
        cout << x1 << ' ' << x2;
    return 0;
}

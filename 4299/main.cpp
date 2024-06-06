#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int a = (x + y) / 2;
    int b = (x - y) / 2;
    if(x < y || a + b != x || a - b != y)
        cout << -1 << endl;
    else
        cout << a << ' ' << b << endl;
    return 0;
}

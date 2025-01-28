#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    int a = 100, b = 100;
    while(N--) {
        int x, y; cin >> x >> y;
        if(x > y) {
            b -= x;
        }
        else if (x < y) {
            a -= y;
        }
    }
    cout << a << '\n' << b;
    return 0;
}
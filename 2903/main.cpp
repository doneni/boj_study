#include <iostream>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    int d = 2;
    while(N--)
        d = 2 * d - 1;
    cout << d * d << '\n';
    return 0;
}

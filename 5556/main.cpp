#include <iostream>
using namespace std;

int main()
{
    int N, K; cin >> N >> K;
    while(K--)
    {
        int x, y; cin >> x >> y;
        cout << (min(min(x, N - x + 1), min(y, N - y + 1)) - 1) % 3 + 1 << endl;
    }
}

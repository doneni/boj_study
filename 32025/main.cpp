#include <iostream>
using namespace std;

int main()
{
    int H, W; cin >> H >> W;
    cout << min(H, W) / 2.0 * 100 << '\n';
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int D, H, W; cin >> D >> H >> W;
    double r = D / sqrt(H*H + W*W);
    double h = H * r; double w = W * r;
    cout << floor(h) << ' ' << floor(w);
    return 0;
}

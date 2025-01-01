#include <iostream>
using namespace std;

int main()
{
    int W, N; cin >> W >> N;
    int S = 0;
    while(N--) {
        int w, l; cin >> w >> l;
        S += w*l;
    }
    int L = S/W;
    cout << L;
    return 0;
}

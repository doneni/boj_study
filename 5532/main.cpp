#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int L = 0, A = 0, B = 0, C = 0, D = 0;
    cin >> L >> A >> B >> C >> D;
    cout << L - max(ceil(1.0 * A / C), ceil(1.0 * B / D)) << endl;
    return 0;
}

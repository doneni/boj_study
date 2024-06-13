#include <iostream>
using namespace std;

int main()
{
    int T = 0; cin >> T;
    int n, m;
    while(T--)
    {
        cin >> n >> m;
        int one_leg = m * 2 - n;
        cout << one_leg << ' ' << m - one_leg << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    for(int t = 1; t <= T; t++)
    {
        int N, M; cin >> N >> M;
        cout << "Case " << t << ": " << N + M << '\n';
    }
    return 0;
}

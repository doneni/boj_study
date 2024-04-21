#include <iostream>
using namespace std;
int M, N, x, y;

int foo()
{
    while(x <= M * N)
    {
        if((x-y) % N == 0)
            return x;
        x += M;
    }
    return -1;
}

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int T = 0; cin >> T;
    while(T--)
    {
        cin >> M >> N >> x >> y;
        cout << foo() << '\n';
    }
    return 0;
}

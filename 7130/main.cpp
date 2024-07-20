#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int M, H, N; cin >> M >> H >> N;
    int C, B;
    int h = 0;
    while(N--)
    {
        cin >> C >> B;
        h += max(C * M, B * H);
    }
    cout << h << '\n';
    return 0;
}

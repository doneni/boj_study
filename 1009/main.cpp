#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    while(N--) {
        int a, b; cin >> a >> b;
        int r = 1;
        for(int i = 0; i < b; i++) {
            r = (r * a) % 10;
        }
        cout << (r == 0 ? 10 : r % 10) << '\n';
    }
    return 0;
}
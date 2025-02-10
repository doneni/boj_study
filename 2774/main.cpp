#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--) {
        string X; cin >> X;
        bool number[10] = { 0, };
        for(auto x : X) {
            number[x-'0'] = true;
        }
        int ans = 0;
        for(int i = 0; i < 10; i++) {
            if(number[i]) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

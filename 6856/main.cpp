#include <iostream>
using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    int ans = 0;
    for(int i = 1; i <= m; i++) {
        if(1 <= 10 - i && 10 - i <= n) {
            ans++;
        }    
    }
    if(ans == 1) {
        cout << "There is " << ans << " way to get the sum 10.";
    }
    else {
        cout << "There are " << ans << " ways to get the sum 10.";
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int ans[5] = { 0, };
    while(n--) {
        int x, y; cin >> x >> y;
        if(x > 0) {
            if(y > 0) {
                ans[0]++;
            }
            else if(y < 0) {
                ans[3]++;
            }
            else {
                ans[4]++;
            }
        }
        else if (x < 0) {
            if(y > 0) {
                ans[1]++;
            }
            else if(y < 0) {
                ans[2]++;
            }
            else {
                ans[4]++;
            }
        }
        else {
            ans[4]++;
        }
    }
    
    for(int i = 0; i < 5; i++) {
        if(i != 4) {
            cout << "Q" << i+1 << ": " << ans[i] << '\n';
        }
        else {
            cout << "AXIS: " << ans[i] << '\n';
        }
    }
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, S, R; cin >> N >> S >> R;
    vector<int> kayaks(N+1, 1);
    while(S--) {
        int s; cin >> s;
        kayaks[s]--;
    }
    while(R--) {
        int r; cin >> r;
        kayaks[r]++;
    }
    
    for(int i = 1; i <= N; i++) {
        if(kayaks[i] == 2) {
            if(i-1 >= 1 && kayaks[i-1] == 0) {
                kayaks[i-1] = 1;
                kayaks[i] = 1;
            }
            else if(i+1 <= N && kayaks[i+1] == 0) {
                kayaks[i+1] = 1;
                kayaks[i] = 1;
            }
        }
    }
    
    int ans = 0;
    for(int i = 1; i <= N; i++) {
        if(kayaks[i] == 0) {
            ans++;
        }
    }
    cout << ans;
    
    return 0;
}

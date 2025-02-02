#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    int ans = 0;
    for(int i = 1; i < N; i++) {
        for(int j = i; j < N; j++) {
            int k = N - i - j;
            if(j > k) {
                break;
            }
            if(i + j > k) {
                ans++;
            }
        }
    }    
    cout << ans;
    return 0;
}

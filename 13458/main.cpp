#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N; cin >> N;
    int A[N] = { 0, };
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int B, C; cin >> B >> C;
    
    long long ans = N;
    for(int i = 0; i < N; i++) {
        if(A[i] > B) {
            ans += ceil(1.0 * (A[i] - B) / C);
        }
    }
    cout << ans;
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> v(N+1);
    for(int i = 1; i <= N; i++) {
        cin >> v[i];
    }
    
    int ans = 1e9;
    for(int i = 1; i <= N; i++) {
        int sum = 0;
        for(int j = 1; j <= N; j++) {
            sum += (i <= j ? (j-i) : N+j-i) * v[j];
        }
        ans = min(ans, sum);
    }
    cout << ans;
    
    return 0;
}
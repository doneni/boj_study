#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> v;
    while(N--) {
        int x; cin >> x;
        v.push_back(x);
    }
    int ans = 0;
    for(int i = v.size()-2; i >= 0; i--) {
        if(v[i] >= v[i+1]) {
            ans += v[i] - v[i+1] + 1;
            v[i] = v[i+1]-1;
        }
    }
    cout << ans;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    FASTIO;
    int N = 0, B = 0, H = 0, W = 0; cin >> N >> B >> H >> W;
    int min_cost = B + 1;
    
    while(H--) {
        int p = 0; cin >> p;    
        vector<int> i(W);
        for(int idx = 0; idx < W; idx++) {
            cin >> i[idx];
        }
        if(*max_element(i.begin(), i.end()) >= N) {
            min_cost = min(min_cost, N*p);
        }
    }
    cout << (min_cost > B ? "stay home" : to_string(min_cost));
    
    return 0;
}

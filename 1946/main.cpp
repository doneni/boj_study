#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        vector<pair<int,int>> candidates(N);
        for(int i = 0; i < N; i++) {
            cin >> candidates[i].first >> candidates[i].second;
        }
        
        sort(candidates.begin(), candidates.end());
        int lowest = candidates[0].second;
        int passed = 1;
        for(int i = 1; i < N; i++) {
            if(lowest < candidates[i].second)
                continue;
            passed++;
            lowest = candidates[i].second;
        }
        cout << passed << '\n';
    }
}

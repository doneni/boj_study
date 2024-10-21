#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

bool cmp_m (pair<int,int> &p1, pair<int,int> &p2) {
    return p1.second > p2.second;
}

int main()
{
    FASTIO;
    int N = 1, M = 1;
    while(true) {
        cin >> N >> M;
        if(!N && !M)
            break;
        map<int,int> m;
        for(int i = 0; i < N * M; i++) {
            int x; cin >> x;
            m[x]++;
        }
        vector<pair<int,int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), cmp_m);
        int num2 = v[1].second;
        vector<int> rank2;
        for(const auto& e : v) {
            if(e.second == num2)
                rank2.push_back(e.first);
            else if(e.second < num2)
                break;
        }
        sort(rank2.begin(), rank2.end());
        for(const auto& r : rank2)
            cout << r << ' ';
        cout << '\n';
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int R, C; cin >> R >> C;
    vector<pair<int,int>> x;
    vector<int> rank(10);
    while(R--) {
        string line; cin >> line;
        for(int i = 0; i < C; i++) {
            if('0' <= line[i] && line[i] <= '9') {
                x.push_back({i+2, line[i+2] - '0'});
                break;
            }
        }
    }
    sort(x.begin(), x.end(), greater<pair<int,int>>());
    rank[x[0].second] = 1;
    for(int i = 1; i < 9; i++) {
        rank[x[i].second] = rank[x[i-1].second];
        if(x[i].first != x[i-1].first) {
            rank[x[i].second]++;
        }
    }
    for(int i = 1; i <= 9; i++) {
        cout << rank[i] << '\n';
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmpQuality(pair<int,int> &p1, pair<int,int> &p2) {
    if(p1.first == p2.first) {
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}

bool cmpPrice(pair<int,int> &p1, pair<int,int> &p2) {
    if(p1.second == p2.second) {
        return p1.first > p2.first;
    }
    return p1.second < p2.second;
}

int main()
{
    int N; cin >> N;
    vector<pair<int,int>> figure;
    while(N--) {
        int q, p; cin >> q >> p;
        figure.push_back({q,p});
    }
    // first
    sort(figure.begin(), figure.end(), cmpQuality);
    for(int i = 0; i < 2; i++) {
        cout << figure[i].first << ' ' << figure[i].second << ' ';
    }
    cout << '\n';
    //second
    sort(figure.begin(), figure.end(), cmpPrice);
    for(int i = 0; i < 2; i++) {
        cout << figure[i].first << ' ' << figure[i].second << ' ';
    }
    
    return 0;
}

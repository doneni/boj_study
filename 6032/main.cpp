#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct playThing{
    int idx;
    int joy;
    int price;
} p;

bool cmp(pair<double,playThing> &p1, pair<double,playThing> &p2)
{
    return p1.first > p2.first;
}

int main()
{
    int N; cin >> N;
    vector<pair<double,playThing>> v(N);
    for(int i = 0; i < N; i++)
    {
        p.idx = i + 1;
        cin >> p.joy >> p.price;
        v[i].second = p;
        v[i].first = 1.0 * p.joy / p.price;
    }
    sort(v.begin(), v.end(), cmp);
    int sum = 0;
    for(int i = 0; i < 3; i++)
        sum += v[i].second.price;
    cout << sum << '\n' << v[0].second.idx << '\n' << v[1].second.idx << '\n' << v[2].second.idx << '\n';
    return 0;
}

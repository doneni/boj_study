#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 2147483648
using namespace std;

bool cmp(pair<long long, long long> p1, pair<long long, long long> p2)
{
    if(p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second < p2.second;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    vector<pair<long long, long long>> v;
    cin >> n;

    long long x = 0, y = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), cmp);

    int cnt = 0;
    x = -1, y = -1;
    for(const auto& e : v)
    {
        if(y <= e.first)
        {
            cnt++;
            x = e.first;
            y = e.second;
        }
    }
    cout << cnt << '\n';

    return 0;
}
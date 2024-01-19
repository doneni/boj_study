#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int>&p1, pair<int, int>&p2)
{
    if(p1.first < p2.first)
        return true;
    else if(p1.first == p2.first)
        return p1.second < p2.second;
    else
        return false;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    vector<pair<int, int>> m;
    int tmp1 = 0, tmp2 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp1 >> tmp2;
        m.push_back(make_pair(tmp1, tmp2));
    }
    sort(m.begin(), m.end(), cmp);

    for(const auto& entry : m)
        cout << entry.first << " " << entry.second << '\n';

    return 0;
}
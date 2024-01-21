#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>& p1, pair<int, int>& p2)
{
    if (p1.second != p2.second)
        return p1.second < p2.second;
    else
        return p1.first < p2.first;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    vector<pair<int, int>> vec;
    int t1 = 0, t2 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> t1 >> t2;
        vec.push_back(make_pair(t1, t2));
    }
    sort(vec.begin(), vec.end(), cmp);

    for(auto& entry : vec)
        cout << entry.first << " " << entry.second << '\n';

    return 0;
}
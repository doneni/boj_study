#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, string>& p1, const pair<int, string>& p2)
{
    return p1.first < p2.first;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0, tmp = 0;
    string str;
    vector<pair<int, string>> m;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> tmp >> str;
        m.push_back(make_pair(tmp, str));
    }

    stable_sort(m.begin(), m.end(), cmp);

    for(auto entry : m)
        cout << entry.first << " " << entry.second << '\n';    

    return 0;
}
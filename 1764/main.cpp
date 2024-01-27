#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0, m = 0;
    cin >> n >> m;
    unordered_set<string> s;
    unordered_set<string> p;

    string in;
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        s.insert(in);
    }
    for(int i = 0; i < m; i++)
    {
        cin >> in;
        p.insert(in);
    }

    int cnt = 0;
    vector<string> v;
    for(const auto& e : s)
    {
        if(p.find(e) != p.end())
        {
            cnt++;
            v.push_back(e);
        }
    }

    sort(v.begin(), v.end());

    cout << cnt << '\n';
    for (const auto& e : v)
        cout << e << '\n';

    return 0;
}
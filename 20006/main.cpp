#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct room {
    int level;
    int people_cnt;
    vector<pair<string,int>> player;
};

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int p, m; cin >> p >> m;
    vector<room> r;
    while(p--)
    {
        int l;
        string n;
        cin >> l >> n;
        bool in = false;
        for(auto & e : r)
        {
            if(e.people_cnt == m)
                continue;
            if(l - 10 <= e.level && e.level <= l + 10)
            {
                e.player.push_back({n, l});
                e.people_cnt++;
                in = true;
                break;
            }
        }
        if(!in)
        {
            room tmp_r;
            tmp_r.level = l;
            tmp_r.people_cnt = 1;
            tmp_r.player.push_back({n, l});
            r.push_back(tmp_r);
        }
    }
    for(auto & e : r)
    {
        cout << (e.people_cnt == m ? "Started!" : "Waiting!") << '\n';
        sort(e.player.begin(), e.player.end());
        for(const auto & p : e.player)
            cout << p.second << ' ' << p.first << '\n';
    }
    return 0;
}

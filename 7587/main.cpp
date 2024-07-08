#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    while(true)
    {
        int N = 0; cin >> N;
        if(N == 0)  
            break;
        map<string, int> m;
        map<string, string> n;
        string s;
        string t;
        while(N--)
        {
            cin >> s;
            t = s;
            sort(s.begin(), s.end());
            if(m.find(s) != m.end())
                m[s]++;
            else
            {
                m[s] = 1;
                n[s] = t;
            }
        }
        string ans;
        int cnt = 0;
        for(const auto& e : m)
        {
            if(e.second > cnt)
            {
                cnt = e.second;
                ans = n[e.first];
            }
        }
        cout << ans << ' ' << cnt-1 << '\n';
    }
    return 0;
}

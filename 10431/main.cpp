#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    int T; cin >> T;
    while(T--)
    {
        int n; cin >> n; cout << n << ' ';
        vector<int> v;
        int first; cin >> first; v.push_back(first);
        int ans = 0;
        for(int i = 1; i < 20; i++) {
            int next; cin >> next;
            int taller = -1;
            for(int idx = v.size() - 1; idx >= 0; idx--)
            {
                if(v[idx] > next)
                    taller = idx;
            }
            if(taller == -1)
                v.push_back(next);
            else {
                ans += v.size() - taller;
                v.insert(v.begin() + taller, next);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

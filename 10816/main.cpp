#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0, m = 0;
    cin >> n;
    map<int, int> mp;

    for(int i = 0; i < n; i++)
   {
        int tmp = 0;
        cin >> tmp;
        if(mp.count(tmp))
            mp[tmp]++;
        else
            mp[tmp] = 1;
   }
    cin >> m;
    
    for(int i = 0; i < m; i++)
    {
        int target = 0, ans = 0;
        cin >> target;
        if(mp.count(target))
            ans = mp[target];
        else
            ans = 0;
        if(i == (n - 1))
            cout << ans;
        else
            cout << ans << " ";
    }
    cout << '\n';

    return 0;
}
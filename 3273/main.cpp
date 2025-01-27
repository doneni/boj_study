#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x; cin >> x;
    sort(a.begin(), a.end());
    
    int ans = 0;
    int h = 0, t = n-1;
    while(h < t) {
        if (a[h] + a[t] == x) {
            ans++;
            h++;
            t--;
            continue;
        }
        else if (a[h] + a[t] < x) {
            h++;
        }
        else {
            t--;
        }
    }
    cout << ans;
    return 0;
}

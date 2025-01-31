#include <iostream>
#include <vector>
using namespace std;

int calc_gcd(int n, int m) {
    if(n == 0 || m == 0) {
        return (n == 0 ? m : n);
    }
    if(n < m) {
        int tmp = n;
        n = m;
        m = tmp;
    }
    
    while(n % m != 0) {
        int q = m;
        int r = n % m;
        n = q;
        m = r;
    }
    return m;
}

int main()
{
    int N = 0; cin >> N;
    int gcd = 0;
    int before = 0;
    int ans = 0;
    vector<int> d;
    
    while(N--) {
        int x; cin >> x;
        if(before == 0) {
            before = x;
            continue;
        }
        d.push_back(x - before);
        gcd = calc_gcd(gcd, x - before);
        before = x;
    }
    
    for(int e : d) {
        ans += (e/gcd) - 1;
    }
    cout << ans;
    return 0;
}

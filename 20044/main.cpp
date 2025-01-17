#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> s(2*n);
    for(int i = 0; i < 2*n; i++) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    int sm = s.front() + s.back();
    for(int i = 0; i < n; i++) {
        sm = min(sm, s[i] + s[2*n-1-i]);
    }
    cout << sm;
    return 0;
}
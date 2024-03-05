#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0, m = 0;
    cin >> n >> m;

    vector<int> s1(n);
    vector<int> s2(m);
    vector<int> res(n + m);
    vector<int>::iterator iter;

    for(int i = 0; i < n; i++)
        cin >> s1[i];
    for(int i = 0; i < m; i++)
        cin >> s2[i];
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    iter = set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), res.begin());
    cout << iter - res.begin() << '\n';

    return 0;
}
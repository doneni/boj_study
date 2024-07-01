#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    vector<int> v(n + 1);
    int max_len = 0;
    for(int i = 0; i < n; i++)
        v[i + 1] = v[i] + s[i] - '0';
    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            int base = 2 * i - j;
            if(0 <= base && base <= n && ((v[i] - v[base]) * 2 == v[j] - v[base]))
                max_len = max(max_len, j - base);
        }
    }
    cout << max_len << '\n';
    return 0;
}

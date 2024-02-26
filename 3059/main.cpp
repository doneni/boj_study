#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T = 0;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int ans = 2015;
        bool check[26] = { 0, };
        string str = "";
        cin >> str;
        for(const auto& c : str)
        {
            int idx = int(c) - 65;
            if(check[idx])
                continue;
            check[idx] = true;
            ans -= int(c);
        }
        cout << ans << '\n';
    }
    return 0;
}
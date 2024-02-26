#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string n1, n2;
    cin >> n1 >> n2;
    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());
    string ans = to_string(stoi(n1) + stoi(n2));
    reverse(ans.begin(), ans.end());
    cout << stoi(ans) << '\n';

    return 0;
}
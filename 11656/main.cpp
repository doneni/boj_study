#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    vector<string> v;
    string s; cin >> s;
    for(int i = 0; i < s.length(); i++)
        v.push_back(s.substr(i));
    sort(v.begin(), v.end());
    for(const auto& e : v)
        cout << e << '\n';
    return 0;
}

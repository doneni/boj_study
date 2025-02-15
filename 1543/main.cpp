#include <iostream>
#include <string>
using namespace std;

bool removeSubStr(string& d, string& s, int& idx) {
    int n_idx = 0;
    if ((n_idx = d.find(s, idx)) != string::npos) {
        idx = n_idx + s.size();
        return true;
    }
    return false;
}

int main()
{
    string d, s;
    getline(cin, d);
    getline(cin, s);
    int ans = 0;
    int idx = 0;
    while (removeSubStr(d, s, idx)) {
        ans++;

    }
    cout << ans;
    return 0;
}
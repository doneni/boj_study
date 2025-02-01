#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    char b = s[0];
    int ans = 1;
    for(int i = 1; i < s.size(); i++) {
        if(b >= s[i]) {
            ans++;
        }
        b = s[i];
    }
    cout << ans;
    return 0;
}
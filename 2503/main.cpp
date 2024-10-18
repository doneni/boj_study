#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<string> s;
    vector<pair<string,pair<int,int>>> sb;
    int ans = 0;
    for(int i = 123; i <= 987; i++) {
        string str = to_string(i);
        if(str[0] == str[1] || str[1] == str[2] || str[2] == str[0])
            continue;
        if(str[0] == '0' || str[1] == '0' || str[2] == '0')
            continue;
        s.push_back(str);
    }
    while(N--) {
        string n;
        int s, b;
        cin >> n >> s >> b;
        sb.push_back({n, {s,b}});
    }
    for(const auto& e : s) {
        bool done = true;
        for(const auto& n : sb) {
            int s = 0, b = 0;
            string cur = n.first;
            for(int i = 0; i < 3; i++) {
                if(e[i] == cur[i])
                    s++;
                else if(cur.find(e[i]) != string::npos)
                    b++;
            }
            if(n.second.first != s || n.second.second != b) {
                done = false;
                break;
            }
        }
        if(done)
            ans++;
    }
    cout << ans;
    return 0;
}

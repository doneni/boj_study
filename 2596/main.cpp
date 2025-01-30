#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<string, char> m;

void init() {
    vector<string> s = { "000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010" };
    for(size_t i = 0; i < s.size(); i++) {
        m[s[i]] = 'A' + i;
        for(int j = 0; j < s[i].size(); j++) {
            string t = s[i];
            t[j] = (t[j] == '0' ? '1' : '0');
            m[t] = 'A' + i;
        }
    }
    return;
}

int main()
{
    init();
    int N; cin >> N;
    string q; cin >> q;
    string a = "";
    int idx = 0;
    for(int i = 0; i < N; i++) {
        string s = "";
        while(s.size() < 6) {
            s += q[idx++];
        }
        if(m.find(s) != m.end()) {
            a += m[s];
        }
        else {
            cout << i+1;
            break;
        }
        if(i == N-1) {
            cout << a;
        }
    }
    return 0;
}

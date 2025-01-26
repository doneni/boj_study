#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--) {
        string f;
        getline(cin, f);
        
        vector<string> sounds;
        set<string> others;
        string line;
        getline(cin, line);
        
        string t = "";
        for(int idx = 0; idx < line.size(); idx++) {
            if(line[idx] == ' ') {
                sounds.push_back(t);
                t = "";
                continue;
            }
            t += line[idx];
            if(idx == line.size()-1) {
                sounds.push_back(t);
            }
        }
        
        while(true) {
            string a, b, c; cin >> a >> b >> c;
            if(b == "does") 
            {
                cin >> b >> b;
                break;
            }
            others.insert(c);
        }
        
        for(string s : sounds) {
            if(others.find(s) == others.end()) {
                cout << s << '\n';
            }
        }
    }
    return 0;
}

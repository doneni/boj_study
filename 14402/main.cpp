#include <iostream>
#include <map>
using namespace std;

int main()
{
    int q; cin >> q;
    map<string, int> m;
    int over = 0;
    while(q--) {
        string n; char c; cin >> n >> c;
        if(c == '+') {
            m[n]++;
        }
        else if(c == '-') {
            if(m[n] == 0) {
                over++;
            }
            else {
                m[n]--;
            }
        }
    }
    for(auto e : m) {
        over += e.second;
    }
    cout << over;
    
    return 0;
}
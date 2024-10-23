#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int N; cin >> N;
    map<string, int> m;
    while(N--) {
        string s; cin >> s;
        sort(s.begin(), s.end());
        m[s]++;
    }
    cout << m.size();
    return 0;
}

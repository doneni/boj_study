#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    string in; cin >> in;
    set<string> s;
    for(int i = 0; i < in.size(); i++) {
        for(int j = 1; j <= in.size(); j++) {
            string sub = in.substr(i, j);
            s.insert(sub);
        }
    }
    cout << s.size();
}

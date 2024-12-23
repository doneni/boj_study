#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    int a = 0;
    int len = s.size();
    for(char c : s) {
        if(c == 'a')    { a++; }
    }
    int min_change = a;
    for(int i = 0; i < len; i++) {
        int change = 0;
        for(int j = i; j < i + a; j++) {
            if(j < len ? s[j] == 'b' : s[j-len] == 'b') {
                change++;
            }
        }
        min_change = min(min_change, change);
    }
    cout << min_change << endl;
    return 0;
}

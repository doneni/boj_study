#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    string m = "{";
    int len = s.size();
    
    for(int i = 1; i < len; i++) {
        for(int j = i+1; j < len; j++) {
            string t = "";
            for(int k = i-1; k >= 0; k--) {  t += s[k]; }
            for(int k = j-1; k >= i; k--) {  t += s[k]; }
            for(int k = len-1; k >=j; k--) {  t += s[k]; }
            m = min(m, t);
        }
    }
    cout << m;
    
    return 0;
}
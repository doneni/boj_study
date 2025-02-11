#include <iostream>
#include <vector>
using namespace std;

int find(vector<string>& v, int N) {
    int ans = 0;
    for(string s : v) {
        bool pass = false;
        for(int i = 1; i < N; i++) {
            if(pass) {
                if(s[i] == 'X') {
                    pass = false;
                }
                continue;
            }
            if(s[i] == s[i-1] && s[i] == '.') {
                ans++;
                pass = true;
            }
        }
    }
    return ans;
}

int main()
{
    int N; cin >> N;
    vector<string> v(N);
    vector<string> h(N);
    for(int i = 0; i < N; i++) {
        cin >> v[i];
        for(int j = 0; j < N; j++) {
            h[j] += v[i][j];
        }
    }
    cout << find(v, N) << ' ' << find(h, N);
    
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N; cin >> N;
    vector<string> v;
    v.push_back("");
    
    for(int i = 1; i <= N; i++) {
        string t = "";
        for(int j = 0; j < i; j++) {
            t += '*';
        }
        for(int j = 2*(N-i); j > 0; j--) {
            t += ' ';
        }
        for(int j = 0; j < i; j++) {
            t += '*';
        }
        v.push_back(t);
    }
    
    for(int i = 1 ; i <= N; i++) {
        cout << v[i] << '\n';
    }
    for(int i = N-1; i > 0; i--) {
        cout << v[i] << '\n';
    }
    return 0;
}

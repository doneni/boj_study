#include <iostream>
using namespace std;

string foo(string N) {
    int ret = 0;
    for(char n : N) {
        ret += n-'0';
    }
    return to_string(ret);
}

int main()
{
    string N; cin >> N;
    int run = 0;
    while(N.size() >= 2) {
        run++;
        N = foo(N);   
    }
    cout << run << '\n' << ((N[0]-'0') % 3 == 0 ? "YES" : "NO");
    
    return 0;
}

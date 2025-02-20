#include <iostream>
using namespace std;

int main()
{
    while(true) {
        int N; cin >> N;
        if(N == -1)  { break; }
        int miles = 0;
        int past = 0;
        while(N--) {
            int m, t; cin >> m >> t;
            miles += m * (t - past);
            past = t;
        }
        cout << miles << " miles\n";
    }
    return 0;
}

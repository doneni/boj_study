#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    while(N--) {
        int n; cin >> n;
        for(int i = 2; i <= n && n > 1; i++) {
            if(n % i == 0) {
                int m = 0;
                while(n % i == 0 && n > 1) {
                    n /= i;
                    m++;
                }
                cout << i << ' ' << m << '\n';
            }
        }
    }
    return 0;
}

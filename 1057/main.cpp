#include <iostream>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    int a, b; cin >> a >> b;
    int ans = 0;
    while(a != b)
    {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        ans++;
    }
    cout << ans << '\n';   
    return 0;
}

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N = 0; cin >> N;
    int ans = 0;
    while(N)
    {
        if(N % 2 == 1)
            ans++;
        N /= 2;
    }
    cout << ans << endl;
    return 0;
}

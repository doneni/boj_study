#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    long long n = 0, m = 0;
    while(1)
    {
        cin >> n >> m;
        if (!n && n == m)
            break;
        cout << ((n > m) ? "Yes" : "No") << '\n';
    }

    return 0;
}

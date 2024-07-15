#include <iostream>
using namespace std;

int main()
{
    int N; cin >> N;
    long long s = 1, e = 2e9;
    while(s <= e)
    {
        int m = (s + e) / 2;
        if(m - m/3 - m/5 + m/15 < N)
            s = m + 1;
        else
            e = m - 1;
    }
    cout << s << '\n';
}

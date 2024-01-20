#include <iostream>
using namespace std;

int foo(int k, int n)
{
    if(k == 0)
        return n;
    else
    {
        int ans = 0;
        for(int i = 1; i < n + 1; i++)
        {
            ans += foo(k - 1, i);
        }
        return ans;
    }
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t = 0;
    int k = 0, n = 0; 
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> k >> n;
        cout << foo(k, n) << '\n';
    }

    return 0;
}
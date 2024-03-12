#include <iostream>
#define MAX 45
using namespace std;
int f[MAX] = { 0, };

int fib(int n)
{
    if(n == 0 || n == 1)
        return 1;
    if(f[n])
        return f[n];
    f[n] = fib(n - 1) + fib(n - 2);
    return f[n];
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    f[0] = 1;
    f[1] = 1;

    int T = 0;
    cin >> T;

    int in = 0;
    for(int i = 0; i < T;i++)
    {
        cin >> in;
        cout << fib(in) << '\n';
    }

    return 0;
}
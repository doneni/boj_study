#include <iostream>
#define MAX 1000001
using namespace std;

int fib[MAX] = { 0, };

int main()
{
    int mod = 1000000007;
    int N = 0; cin >> N;
    fib[0] = 0; fib[1] = 1;
    for(int i = 2; i <= N; i++)
        fib[i] = (fib[i - 1] + fib[i - 2]) % mod;
    cout << fib[N] << '\n';
    return 0;
}

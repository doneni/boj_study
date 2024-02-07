#include <iostream>
using namespace std;

long long A = 0, B = 0, C = 0;

long long foo(long long b)
{
    if(b == 1) return A % C;
    long long k = foo(b/2) % C;
    if(b % 2) return (k * k % C) * (A % C);
    else return k * k % C; 
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> A >> B >> C;
    cout << foo(B) % C << '\n';

    return 0;
}
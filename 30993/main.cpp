#include <iostream>
using namespace std;

long long N;
long long M[3];

long long factorial(int n)
{
    long long res = 1;
    for(int i = n; i > 0; i--)
        res *= i;
    return res;
}

void init()
{
    N = factorial(N);
    for(int i = 0; i < 3; i++)
        M[i] = factorial(M[i]);
}

int main()
{
    cin >> N >> M[0] >> M[1] >> M[2];
    init();
    for(int i = 0; i < 3; i++)
    {
        N /= M[i];
    }
    cout << N << endl;
    return 0;
}

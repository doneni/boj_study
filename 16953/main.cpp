#include <iostream>
using namespace std;

bool flag = true;

void dfs(long long n, int g, int v)
{
    if(n == g)
    {
        cout << v << '\n';
        flag = false;
        return;
    }
    if(n > g)
        return;
    dfs(n * 2, g, v + 1);
    dfs(n * 10 + 1, g, v + 1);
    return;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int A = 0, B = 0;
    cin >> A >> B;
    dfs(A, B, 1);
    if(flag)
        cout << -1 << '\n';
    return 0;
}
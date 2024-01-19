#include <iostream>
using namespace std;

int factorial(int num)
{
    int ans = 1;
    for(int i = num; i > 0; i--)
        ans *= i;
    return ans;
}

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0, k = 0;
    int ans = 1;
    cin >> n >> k;

    cout << factorial(n) / (factorial(k) * factorial(n - k)) << endl;

    return 0;
}
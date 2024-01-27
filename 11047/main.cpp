#include <iostream>
#define MAX 10
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0, k = 0;
    cin >> n >> k;

    int money[MAX] = { 0, };
    int used[MAX] = { 0, };

    for(int i = 0; i < n; i++)
        cin >> money[n - i - 1];

    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        used[i] = k / money[i];
        k -= used[i] * money[i];
        cnt += used[i];
    }
    cout << cnt << '\n';

    return 0;
}
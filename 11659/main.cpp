#include <iostream>
#define MAX 100001
using namespace std;

int arr[MAX] = { 0, };
int sum[MAX] = { 0, };

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0, m = 0;
    cin >> n >> m;
    int x = 0, y = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;
        cout << sum[y] - sum[x - 1] << '\n';
    }

    return 0;
}
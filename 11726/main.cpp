#include <iostream>
#define MAX 1001
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    int arr[MAX] = { 0, };

    arr[1] = 1;
    arr[2] = 2;
    for(int i = 3; i <= n; i++)
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10007;
    cout << arr[n] << '\n';

    return 0;
}
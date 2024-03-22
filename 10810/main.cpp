#include <iostream>
#define MAX 101
using namespace std;

int main(void)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

    int N = 0, M = 0;
    cin >> N >> M;
    int arr[MAX] = { 0, };

    int i, j, k;
    for(int t = 0; t < M; t++)
    {
        cin >> i >> j >> k;
        for(int idx = i; idx <= j; idx++)
            arr[idx] = k;
    }
    for(int i = 1; i <= N; i++)
        cout << arr[i] << ' ';
    return 0;
}